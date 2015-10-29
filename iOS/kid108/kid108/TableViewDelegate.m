//
//  TableViewDelegate.m
//  CustomTableView
//
//  Created by MacBook on 11. 9. 30..
//  Copyright 2011 POSTECH. All rights reserved.
//

#import "TableViewDelegate.h"
// for objc_msgSend(target, @selector(action:::), arg1, arg2, arg3);
//#import <objc/message.h>


@implementation TableViewDelegate


@synthesize protocolDelegate = _protocolDelegate;
@synthesize tableView = _tableView;
@synthesize tableData = _tableData;
@synthesize tableViewCellHeight = _tableViewCellHeight;
@synthesize classNameOfCell = _classNameOfCell;
@synthesize loadMoreToUpView = _loadMoreToUpView;
@synthesize loadMoreToDownView = _loadMoreToDownView;
@synthesize loadMoreToUpSelector = _loadMoreToUpSelector;
@synthesize loadMoreToDownSelector = _loadMoreToDownSelector;
@synthesize headerViews = _headerViews;
@synthesize headerTitles = _headerTitles;
@synthesize noResultView = _noResultView;
//
@synthesize stretchedCellIndexPath = _stretchedCellIndexPath;
@synthesize stretchedCellHeight = _stretchedCellHeight;


- (void)dealloc
{
	[_tableView release], _tableView=nil;
	[_tableData release], _tableData=nil;
	[_classNameOfCell release], _classNameOfCell=nil;	
	[_loadMoreToUpView release], _loadMoreToUpView=nil;
	[_loadMoreToDownView release], _loadMoreToDownView=nil;   
    [_headerViews release], _headerViews=nil;
    [_headerTitles release], _headerTitles=nil;
    
    [_cellForRowAtIndexPathBlock release], _cellForRowAtIndexPathBlock=nil;
    [_allocateCellBlock release], _allocateCellBlock=nil;
    [_didSelectRowBlock release], _didSelectRowBlock=nil;
    [_heightForRowBlock release], _heightForRowBlock=nil;
    [_commitEditingBlock release], _commitEditingBlock=nil;
    [_moveRowBlock release], _moveRowBlock=nil;
    [_loadMoreToUpBlock release], _loadMoreToUpBlock=nil;
    [_loadMoreToDownBlock release], _loadMoreToDownBlock=nil;
    [_autoLoadMoreToDownBlock release], _autoLoadMoreToDownBlock=nil;
    //
    [_didStretchRowBlock release], _didStretchRowBlock=nil;
    [_heightForRowBlock release], _heightForRowBlock=nil;
    [_noResultView release], _noResultView=nil;
	
    [super dealloc];
}


- (id)          initWithFrame:(CGRect)frame 
               addTableViewTo:(id)superView 
             protocolDelegate:(id)protocolDelegate 
              classNameOfCell:(NSString *)classNameOfCell 
                   cellHeight:(CGFloat)cellHeight
   cellForRowAtIndexPathBlock:(CellForRowAtIndexPathBlock)cellForRowAtIndexPathBlock
{
	self = [super init];
    if (self) {
        // Initialization code.
//		_tableView = [[UITableView alloc]initWithFrame:frame style:UITableViewStylePlain];
		_tableView = [[CustomTableView alloc]initWithFrame:frame style:UITableViewStylePlain];
		_tableView.delegate = self;
		_tableView.dataSource = self;
		[superView addSubview:_tableView];
        // detact
        [_tableView setReloadDataObserver:self withSelector:@selector(didEndReloadData)];
        
		_protocolDelegate = protocolDelegate;
		
        _classNameOfCell = [classNameOfCell retain];
        _tableViewCellHeight = cellHeight;
        _cellForRowAtIndexPathBlock = [cellForRowAtIndexPathBlock copy];
        
        [self setDefaultValue];
        
        [_tableView setSeparatorInset:UIEdgeInsetsZero];
	}
    return self;    
}

-(void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath{
    
    if ([tableView respondsToSelector:@selector(setSeparatorInset:)]) {
        [tableView setSeparatorInset:UIEdgeInsetsZero];
    }
    
    if ([tableView respondsToSelector:@selector(setLayoutMargins:)]) {
        [tableView setLayoutMargins:UIEdgeInsetsZero];
    }
    
    if ([cell respondsToSelector:@selector(setLayoutMargins:)]) {
        [cell setLayoutMargins:UIEdgeInsetsZero];
    }
}

- (void)didEndReloadData
{
    [self relocateMoreView];
    NSLog(@"reload tableView end");
    
    if (self.noResultView)
    {
        if (![_noResultView isDescendantOfView:_tableView]) {
            _noResultView.frame = CGRectMake(0, _tableView.tableHeaderView.frame.size.height, _noResultView.frame.size.width, _noResultView.frame.size.height);
            [_tableView addSubview:_noResultView];
        }
        
        if ([_tableData count]>0)
        {
            _noResultView.hidden = YES;
        }
        else
        {
            _noResultView.hidden = NO;
        }
        [_tableView bringSubviewToFront:_noResultView];
    }
}
- (void)setNoResultView:(UIView *)noResultView
{
    [_noResultView removeFromSuperview];
    [_noResultView release]; _noResultView=nil;
    _noResultView = [noResultView retain];
    /*
    if (![_noResultView isDescendantOfView:_tableView]) {
        _noResultView.frame = CGRectMake(0, _tableView.tableHeaderView.frame.size.height, _noResultView.frame.size.width, _noResultView.frame.size.height);
        [_tableView addSubview:_noResultView];
    }
    [_tableView reloadData];
    [_tableView bringSubviewToFront:_noResultView];
     */
}

- (void)setDefaultValue
{
	if (_tableViewCellHeight==0) {
		_tableViewCellHeight = 44;
	}
	if (self.classNameOfCell==nil) {
		self.classNameOfCell = @"UITableViewCell";
	}
    if (_tableData==nil) {
        _tableData = [[NSMutableArray alloc]init];
    }
    _editingStyle = UITableViewCellEditingStyleNone;
//    _cellForRowAtIndexPathBlock=nil; init에서 초기화
    _allocateCellBlock=nil;
    _didSelectRowBlock=nil;
    _heightForRowBlock=nil;
    _commitEditingBlock=nil;
    _loadMoreToUpBlock=nil;
    _loadMoreToDownBlock=nil;
    _autoLoadMoreToDownBlock=nil;
    
    _headerTitles=nil;
    _headerViews=nil;
}



- (void)allocateCellBlock:(AllocateCellBlock)allocateCellBlock
{
    [_allocateCellBlock release], _allocateCellBlock=nil;
    _allocateCellBlock = [allocateCellBlock copy];
}
- (id)cellFromClassName:(NSString *)className
{
    NSString *identifier = className;
    id cell = [[[NSClassFromString(self.classNameOfCell) alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier]autorelease];
    [(UITableViewCell *)cell setSelectionStyle:UITableViewCellSelectionStyleNone];

    return cell;
}


- (void)relocateMoreView
{
    // for load more to down view
	if (self.tableView.contentSize.height>self.tableView.frame.size.height) {
		self.loadMoreToDownView.frame = CGRectMake(0, 
                                                   self.tableView.contentSize.height, 
                                                   self.loadMoreToDownView.frame.size.width,
                                                   self.loadMoreToDownView.frame.size.height);
		self.loadMoreToDownView.hidden = NO;
	} else {
        self.loadMoreToDownView.hidden = YES;
    }
}


- (void)reloadWithDataArray:(NSMutableArray *)dataArray
{
	self.tableData = dataArray;
	[self.tableView reloadData];

    //[self relocateMoreView];
}



// 더 불러오기 사용
- (void)useLoadMoreToUpWithDelegateBlock:(LoadMoreToUpBlock)loadMoreToUpBlock withView:(UIImageView *)loadMoreView
{
    [_loadMoreToUpBlock release], _loadMoreToUpBlock=nil;
    _loadMoreToUpBlock = [loadMoreToUpBlock copy];
	self.loadMoreToUpView = loadMoreView;
	[self.tableView addSubview:self.loadMoreToUpView];
	
	self.loadMoreToUpView.frame = CGRectMake(0, -loadMoreView.frame.size.height, loadMoreView.frame.size.width, loadMoreView.frame.size.height);    
}
- (void)useLoadMoreToDownWithDelegateBlock:(LoadMoreToDownBlock)loadMoreToDownBlock withView:(UIImageView *)loadMoreView
{
    [_loadMoreToDownBlock release], _loadMoreToDownBlock=nil;
    _loadMoreToDownBlock = [loadMoreToDownBlock copy];
	self.loadMoreToDownView = loadMoreView;
	[self.tableView addSubview:self.loadMoreToDownView];
    self.loadMoreToDownView.hidden = YES;
	if (self.tableView.contentSize.height>self.tableView.frame.size.height) {
		self.loadMoreToDownView.frame = CGRectMake(0, self.tableView.contentSize.height, loadMoreView.frame.size.width, loadMoreView.frame.size.height);
		self.loadMoreToDownView.hidden = NO;
	}
}
- (void)useLoadMoreToUp:(SEL)selectorForLoadMore withView:(UIImageView *)loadMoreView
{
	_loadMoreToUpSelector = selectorForLoadMore;
    [self addLoadMoreToUpView:loadMoreView];
    /*
	self.loadMoreToUpView = loadMoreView;
	[self.tableView addSubview:self.loadMoreToUpView];
	self.loadMoreToUpView.frame = CGRectMake(0, -loadMoreView.frame.size.height, loadMoreView.frame.size.width, loadMoreView.frame.size.height);	
     */
}
- (void)useLoadMoreToDown:(SEL)selectorForLoadMore withView:(UIImageView *)loadMoreView
{
	_loadMoreToDownSelector = selectorForLoadMore;
    [self addLoadMoreToDownView:loadMoreView];
    /*
	self.loadMoreToDownView = loadMoreView;
	[self.tableView addSubview:self.loadMoreToDownView];
	self.loadMoreToDownView.hidden = YES;
	if (self.tableView.contentSize.height>self.tableView.frame.size.height) {
		self.loadMoreToDownView.frame = CGRectMake(0, self.tableView.contentSize.height, loadMoreView.frame.size.width, loadMoreView.frame.size.height);
		self.loadMoreToDownView.hidden = NO;
	}
     */
}




- (void)heightForRowBlock:(HeightForRowBlock)heightForRowBlock
{
    [_heightForRowBlock release], _heightForRowBlock=nil;
    _heightForRowBlock = [heightForRowBlock copy];
}
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (_stretchedCellHeight && [indexPath isEqual:_stretchedCellIndexPath]) {
        return _stretchedCellHeight;
    }
    
	if ([self.protocolDelegate respondsToSelector:@selector(tableView:heightForRowAtIndexPath:)]) {
		return [self.protocolDelegate tableView:tableView heightForRowAtIndexPath:indexPath];
	} else if (_heightForRowBlock) {
        return _heightForRowBlock(tableView, indexPath);
    } else {
        if (_heightForStretchedRowBlock)
        {
            if ([indexPath isEqual:_stretchedCellIndexPath]) {
                /*
                // tableView:cellForRowAtIndexPath: 가 tableView:heightForRowAtIndexPath: 이후에 호출이 된다
                // 어떤 이유에선지 모르지만, 여기서 tableView:cellForRowAtIndexPath:을 호출해 cell을 리턴 받으면 전에 있던 cell을 재활용하지만(reloadData시)
                // 이 함수가 끝난 후 셀의 높이를 할당하고 실제 셀을 그릴 때는 cell을 재활용하지 못하고 다시 생성하게 된다.
                // 만약 이 함수에서 tableView:cellForRowAtIndexPath:을 호출하지 않는다면 높이를 할당하고 실제 셀을 그릴 때 cell을 재활용 해 그린다(reloadData시)
                id cell = [self tableView:_tableView cellForRowAtIndexPath:_stretchedCellIndexPath];
                CGFloat height = _heightForStretchedRowBlock(cell);
                 */
                CGFloat height = _heightForStretchedRowBlock(tableView, indexPath);
                return height;
            } else {
                //id cell = [self tableView:_tableView cellForRowAtIndexPath:_stretchedCellIndexPath];
                //NSLog(@"in height function : %@",cell);
                return _tableViewCellHeight;
            }
        }
        else
        {
            //if ([indexPath isEqual:_stretchedCellIndexPath]) {
            //    return _stretchedCellHeight;
            //} else {
                return _tableViewCellHeight;
            //}
        }
	}
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
//	if ([self.headerViews count]>1 && self.tableData) {
	if ([[_tableData lastObject] isKindOfClass:[NSArray class]]) {
        return [_tableData count];
    }
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
//	if ([self.headerViews count]>1 && self.tableData) {
    if ([_tableData count]==0) {
        return 0;
    } else if ([[_tableData objectAtIndex:section] isKindOfClass:[NSArray class]]) {
        return [[self.tableData objectAtIndex:section]count];   
    }
	return [self.tableData count];
}

- (void)didSelectRowBlock:(DidSelectRowBlock)didSelectRowBlock
{
    [_didSelectRowBlock release], _didSelectRowBlock=nil;
    _didSelectRowBlock = [didSelectRowBlock copy];
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
	if ([self.protocolDelegate respondsToSelector:@selector(tableView:didSelectRowAtIndexPath:)]) {
		[self.protocolDelegate tableView:tableView didSelectRowAtIndexPath:indexPath];
	}
    if (_didSelectRowBlock) {
        id selectedData = [self _dataForRowAtIndexPath:indexPath];
        _didSelectRowBlock(tableView, indexPath, selectedData);
    }
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
	NSString *identifier = _classNameOfCell;
	UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
	
	if (cell==nil)
    {
        if (_allocateCellBlock) {
            cell = _allocateCellBlock([self cellFromClassName:_classNameOfCell]);
        }
        if (cell==nil) {
            cell = [[[NSClassFromString(self.classNameOfCell) alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier]autorelease];
            //[cell setSelectionStyle:UITableViewCellSelectionStyleNone];
        }
        cell.clipsToBounds = YES; // default
	}
    
    
    // data declare
    NSMutableDictionary *cellData = [self _dataForRowAtIndexPath:indexPath];
    
    if (_cellForRowAtIndexPathBlock) {
        _cellForRowAtIndexPathBlock(tableView, indexPath, cell, cellData);
        return cell;
    }
    

	// input data to cell
	if ([self.classNameOfCell isEqualToString:@"UITableViewCell"]) {
//        if ([[self.tableData objectAtIndex:indexPath.row]class]==[NSString class])
            cell.textLabel.text = [self.tableData objectAtIndex:indexPath.row];

        return cell;
	} else { // custom cell
        //objc_msgSend(cell, @selector(setData:tableView:indexPath:), cellData, tableView, indexPath);
	}
	
	return cell;
}


// load more function
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
	if (scrollView.contentOffset.y < -self.loadMoreToUpView.frame.size.height && self.loadMoreToUpView!=nil) 
	{
		scrollView.scrollEnabled = NO;
	}
	if (scrollView.contentOffset.y > scrollView.contentSize.height-scrollView.frame.size.height+self.loadMoreToDownView.frame.size.height && 
        self.loadMoreToDownView!=nil && self.loadMoreToDownView.hidden==NO) 
	{
		scrollView.scrollEnabled = NO;
	}
    
    // scrollview delegate
    if ([self.protocolDelegate respondsToSelector:@selector(tableViewDidEndDragging:willDecelerate:)]) {
        [self.protocolDelegate tableViewDidEndDragging:scrollView willDecelerate:decelerate];
    }
}
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)scrollView
{
	if (scrollView.scrollEnabled==NO) 
	{
		[scrollView setContentOffset:CGPointMake(0, scrollView.contentOffset.y) animated:NO];
		if (scrollView.contentOffset.y<0) {
			[scrollView setContentOffset:CGPointMake(0, -self.loadMoreToUpView.frame.size.height) animated:YES];			
			[self loadMoreToUp];
		} else /*if (scrollView.contentOffset.y>scrollView.contentSize.height-scrollView.frame.size.height)*/ {
			[scrollView setContentOffset:CGPointMake(0, scrollView.contentSize.height-scrollView.frame.size.height+self.loadMoreToDownView.frame.size.height) animated:YES];			
			[self loadMoreToDown];
		}
	}
    
    // scrollview delegate
    if ([self.protocolDelegate respondsToSelector:@selector(tableViewWillBeginDecelerating:)]) {
        [self.protocolDelegate tableViewWillBeginDecelerating:scrollView];
    }
}
- (void)loadMoreToUp
{
	if ( [self.protocolDelegate respondsToSelector:_loadMoreToUpSelector] ) {
		[self.protocolDelegate performSelector:_loadMoreToUpSelector];		
	}
    if (_loadMoreToUpBlock) {
        _loadMoreToUpBlock(nil);
    }
	self.tableView.scrollEnabled = YES;
}
- (void)loadMoreToDown
{
	if ( [self.protocolDelegate respondsToSelector:_loadMoreToDownSelector] ) {
		[self.protocolDelegate performSelector:_loadMoreToDownSelector];
	}
    if (_loadMoreToDownBlock) {
        _loadMoreToDownBlock(_loadMoreToDownView);
    }
	self.tableView.scrollEnabled = YES;
}


- (void)loadFail
{
	if (self.tableView.contentOffset.y<0) {
		[self.tableView setContentOffset:CGPointMake(0, 0) animated:YES];
	} else {
		[self.tableView setContentOffset:CGPointMake(0, self.tableView.contentSize.height-self.tableView.frame.size.height) animated:YES];
	}
}


- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section 
{
    NSString *headerTitle = nil;
    if ([_headerTitles count]>section) {
        headerTitle = [_headerTitles objectAtIndex:section];
    }
    return headerTitle;
}
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    if ([_headerViews count]<=section) return nil; // _headerViews가 nil일 때도 거르도록
    
    
    id headerObject = [self.headerViews objectAtIndex:section];
    if ([headerObject isKindOfClass:[NSString class]]) {
        return nil;
    }
    return headerObject;
}
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
//    if (_headerViews) // 헤더뷰가 있으면 우선적으로 높이 적용 
//    {
        if ([_headerViews count]>section) {
            id headerViewObject = [self.headerViews objectAtIndex:section];
            if ([headerViewObject respondsToSelector:@selector(frame)]) {
                return [[self.headerViews objectAtIndex:section]frame].size.height;            
            }
        }
//        return 0;
//    }
//    if (_headerTitles) // 타이틀만 있을 경우 기본 높이 적용
//    {
        if ([_headerTitles count]>section) {
            // default
            return 28;
        }
        return 0;
//    }
//    else // 헤더를 안 쓸 경우
//    {
//        return 0;
//    }
// -> 주석을 풀면 _headerViews는 첫번째에만 존재하고 두번째부터는 _headerTiles로 적용하고 싶을 경우가 적용이 안됨
}



// 편집
- (void)commitEditingBlock:(CommitEditingBlock)commitEditingBlock
{
    _editingStyle = UITableViewCellEditingStyleDelete; // default
    [_commitEditingBlock release], _commitEditingBlock=nil;
    _commitEditingBlock = [commitEditingBlock copy];
}
- (void)setEditingStyle:(UITableViewCellEditingStyle)editingStyle commitEditingBlock:(CommitEditingBlock)commitEditingBlock
{
    _editingStyle = editingStyle;
    [_commitEditingBlock release], _commitEditingBlock=nil;
    _commitEditingBlock = [commitEditingBlock copy];
}
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if ([self.protocolDelegate respondsToSelector:@selector(tableView:commitEditingStyle:forRowAtIndexPath:)]) {
        [self.protocolDelegate tableView:tableView commitEditingStyle:editingStyle forRowAtIndexPath:indexPath];
    }
    if (_commitEditingBlock) {
        _commitEditingBlock(tableView, editingStyle, indexPath);
    }
}
- (UITableViewCellEditingStyle)tableView:(UITableView *)aTableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath 
{
    return _editingStyle;
    /*
    if ([self.protocolDelegate respondsToSelector:@selector(tableView:commitEditingStyle:forRowAtIndexPath:)] ||
        _commitEditingBlock) {
        return UITableViewCellEditingStyleDelete;
    }
    return UITableViewCellEditingStyleNone;
     */
}



// move cell
- (void)moveRowBlock:(MoveRowBlock)moveRowBlock
{
    [_moveRowBlock release], _moveRowBlock=nil;
    _moveRowBlock = [moveRowBlock copy];
}
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath*)toIndexPath 
{
    if ([self.protocolDelegate respondsToSelector:@selector(tableView:moveRowAtIndexPath:toIndexPath:)]) {
        [self.protocolDelegate tableView:tableView moveRowAtIndexPath:fromIndexPath toIndexPath:toIndexPath];
    }
    if (_moveRowBlock) {
        _moveRowBlock(tableView, fromIndexPath, toIndexPath);
    }
}
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath 
{
    return YES;
}



- (void)addLoadMoreToDownView:(UIImageView *)loadMoreView
{
	self.loadMoreToDownView = loadMoreView;
	[self.tableView addSubview:self.loadMoreToDownView];
	self.loadMoreToDownView.hidden = YES;
	if (self.tableView.contentSize.height>self.tableView.frame.size.height) {
		self.loadMoreToDownView.frame = CGRectMake(0, self.tableView.contentSize.height, loadMoreView.frame.size.width, loadMoreView.frame.size.height);
		self.loadMoreToDownView.hidden = NO;
	}    
}
- (void)addLoadMoreToUpView:(UIImageView *)loadMoreView
{
    self.loadMoreToUpView = loadMoreView;
	[self.tableView addSubview:self.loadMoreToUpView];	
	self.loadMoreToUpView.frame = CGRectMake(0, -loadMoreView.frame.size.height, loadMoreView.frame.size.width, loadMoreView.frame.size.height);
}

- (void)useAutoLoadMoreToDown:(SEL)selectorForAutoLoadMore withView:(UIImageView *)loadMoreView
{
    [self addLoadMoreToDownView:loadMoreView];
    _autoLoadMoreToDownSelector = selectorForAutoLoadMore;
}
- (void)useAutoLoadMoreToDownWithDelegateBlock:(AutoLoadMoreToDownBlock)autoLoadMoreToDownBlock withView:(UIImageView *)loadMoreView
{
    [self addLoadMoreToDownView:loadMoreView];
    [_autoLoadMoreToDownBlock release], _autoLoadMoreToDownBlock=nil;
    _autoLoadMoreToDownBlock = [autoLoadMoreToDownBlock copy];
}
// 스크롤뷰 딜리게이트
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    if ([self.protocolDelegate respondsToSelector:@selector(tableViewDidScroll:)]) {
        [self.protocolDelegate tableViewDidScroll:scrollView];
    }
    
    if (_autoLoadMoreToDownBlock || _autoLoadMoreToDownSelector) 
    {
        if ([_tableData count]==0) return;
        
        // 자동으로 더 불러오기
        CGFloat offsetBottom = scrollView.contentSize.height-scrollView.frame.size.height;
        if (scrollView.contentOffset.y>=offsetBottom)
        {
            [scrollView setContentOffset:CGPointMake(0, scrollView.contentSize.height-scrollView.frame.size.height+self.loadMoreToDownView.frame.size.height)
                                animated:YES];
            
            if (_autoLoadMoreToDownBlock) {
                _autoLoadMoreToDownBlock(nil);
            }
            if ([_protocolDelegate respondsToSelector:_autoLoadMoreToDownSelector]) {
                [_protocolDelegate performSelector:_autoLoadMoreToDownSelector withObject:nil];
            }
            /*
            if (scrollView.tag!=kStateLoading)
            {
                scrollView.tag = kStateLoading;

                if (_autoLoadMoreToDownBlock) {
                    _autoLoadMoreToDownBlock(nil);
                }                
                if ([_protocolDelegate respondsToSelector:_autoLoadMoreToDownSelector]) {
                    [_protocolDelegate performSelector:_autoLoadMoreToDownSelector withObject:nil];
                }
            }
             */
        }
    }
}


- (id)_dataForRowAtIndexPath:(NSIndexPath *)indexPath
{
    id dataForRow = nil;
    
    if ([_tableData count]==0) {//|| [_tableData count]<=indexPath.section) {
        
    }
	//if ([self.headerViews count]>1) { // grouped
    else if ([[_tableData objectAtIndex:indexPath.section] isKindOfClass:[NSArray class]]) { // grouped
        dataForRow = [[self.tableData objectAtIndex:indexPath.section]objectAtIndex:indexPath.row];
    } else { // plain
        dataForRow = [self.tableData objectAtIndex:indexPath.row];
    }
    return dataForRow;
}
//
// strechable cell
//
- (void)setStretchedCellIndexPath:(NSIndexPath *)stretchedCellIndexPath cellHeight:(CGFloat)stretchedCellHeight
{
    _stretchedCellHeight = stretchedCellHeight;
    [self setStretchedCellIndexPath:stretchedCellIndexPath];
}
- (void)setStretchedCellIndexPath:(NSIndexPath *)stretchedCellIndexPath
{
    [_stretchedCellIndexPath release]; _stretchedCellIndexPath=nil;
    _stretchedCellIndexPath = [stretchedCellIndexPath retain];
    
    [_tableView reloadData];

    
    if (_didStretchRowBlock) {
        [self performSelector:@selector(forDelay) withObject:nil afterDelay:0.1];
    }
    // [_tableView reloadData] 가 이 함수 안에서 호출되었으므로 아래 루프가 끝난 후 테이블을 리로드하므로
    // 셀을 변경하는 작업은 리로드가 끝난 후 해주어야 제대로 적용된다.
    /*
    id cell = [self tableView:_tableView cellForRowAtIndexPath:_stretchedCellIndexPath];
    id dataForRow = [self _dataForRowAtIndexPath:_stretchedCellIndexPath];
    _didStretchRowBlock(cell, dataForRow);
    */
}
- (void)forDelay
{
    id cell = [_tableView cellForRowAtIndexPath:_stretchedCellIndexPath];
    id dataForRow = [self _dataForRowAtIndexPath:_stretchedCellIndexPath];
    //if (_didStretchRowBlock) {
        _didStretchRowBlock(cell, dataForRow);
    //}
}
- (void)didStretchRowBlock:(DidStretchRowBlock)didStretchRowBlock heightForStretchedRowBlock:(HeightForStretchedRowBlock)heightForRowBlock
{
    [_didStretchRowBlock release], _didStretchRowBlock=nil;
    _didStretchRowBlock = [didStretchRowBlock copy];
    
    [_heightForStretchedRowBlock release], _heightForStretchedRowBlock=nil;
    _heightForStretchedRowBlock = [heightForRowBlock copy];
}


@end


