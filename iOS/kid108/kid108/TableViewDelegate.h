//
//  TableViewDelegate.h
//  CustomTableView
//
//  Created by MacBook on 11. 9. 30..
//  Copyright 2011 POSTECH. All rights reserved.
//

// last updated.
// 2012.8.30



#import "CustomTableView.h"
#import <Foundation/Foundation.h>


typedef void(^CellForRowAtIndexPathBlock)(UITableView *tableView, NSIndexPath *indexPath, UITableViewCell *cell, id dataForRow);
typedef id(^AllocateCellBlock)(id allocatedObjectFromClassName);
//
typedef void(^DidSelectRowBlock)(UITableView *tableView, NSIndexPath *indexPath, id dataForRow);
typedef CGFloat(^HeightForRowBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef void(^CommitEditingBlock)(UITableView *tableView, UITableViewCellEditingStyle editingStyle, NSIndexPath *indexPath);
typedef void(^MoveRowBlock)(UITableView *tableView, NSIndexPath *fromIndexPath, NSIndexPath *toIndexPath);
typedef void(^LoadMoreToUpBlock)(id object);
typedef void(^LoadMoreToDownBlock)(id object);
typedef void(^AutoLoadMoreToDownBlock)(id object);
//
typedef void(^DidStretchRowBlock)(id cell, id dataForRow);
//typedef CGFloat(^HeightForStretchedRowBlock)(id cell);// (id cell) -> (nil) 로 변경
typedef CGFloat(^HeightForStretchedRowBlock)(UITableView *tableView, NSIndexPath *indexPath);


@protocol TableViewProtocol
//@required
@optional
// UITableViewDelegate, UITableViewDataSource
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath*)toIndexPath;

// UIScrollView(super) delegate - 프로토콜을 받는 클래스에서 스크롤뷰 딜리게이트를 구현했을 경우 중복되는 것을 방지하기 위해 이름을 tableView로 변경
- (void)tableViewDidScroll:(UIScrollView *)scrollView;
- (void)tableViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)tableViewWillBeginDecelerating:(UIScrollView *)scrollView;

// Common
- (BOOL)respondsToSelector:(SEL)selector;
- (void)performSelector:(SEL)selector;
- (void)performSelector:(SEL)selector withObject:(id)object;
@end



@interface TableViewDelegate : NSObject <UITableViewDelegate, UITableViewDataSource> 
{
	id <TableViewProtocol> _protocolDelegate;

	CustomTableView *_tableView;
	NSMutableArray *_tableData;
	NSString *_classNameOfCell;
	
    NSMutableArray *_headerViews;
    NSMutableArray *_headerTitles;
    
    CellForRowAtIndexPathBlock  _cellForRowAtIndexPathBlock;
    AllocateCellBlock           _allocateCellBlock;
    
    // protocol or block
    DidSelectRowBlock           _didSelectRowBlock;

    //
	CGFloat                     _tableViewCellHeight;
    HeightForRowBlock           _heightForRowBlock;
    
    //
    UITableViewCellEditingStyle _editingStyle;
    CommitEditingBlock          _commitEditingBlock;
    MoveRowBlock                _moveRowBlock;

    //
	UIImageView                 *_loadMoreToUpView;
	UIImageView                 *_loadMoreToDownView;
	SEL                         _loadMoreToUpSelector;
	SEL                         _loadMoreToDownSelector;
    LoadMoreToUpBlock           _loadMoreToUpBlock;
    LoadMoreToDownBlock         _loadMoreToDownBlock; 
    
    SEL                         _autoLoadMoreToDownSelector;
    AutoLoadMoreToDownBlock     _autoLoadMoreToDownBlock;
    
    //
    DidStretchRowBlock          _didStretchRowBlock;
    HeightForStretchedRowBlock  _heightForStretchedRowBlock;
    CGFloat                     _stretchedCellHeight;
}


// ******************************************************* API ******************************************************* //
//
- (id)          initWithFrame:(CGRect)frame                                             // tableView의 frame
               addTableViewTo:(id)superView                                             // tableView를 붙일 superView
             protocolDelegate:(id)protocolDelegate                                      // 프로토콜을 받을 객체 지정, 안받거나 모두 블럭으로 구현할 경우 없어도 됨
              classNameOfCell:(NSString *)classNameOfCell                               // tableView cell의 클래스 이름(문자열), 해당 클래스를 사용함
                   cellHeight:(CGFloat)cellHeight                                       // cell 의 높이, 0으로 넘길 경우 기본 값 44
   cellForRowAtIndexPathBlock:(CellForRowAtIndexPathBlock)cellForRowAtIndexPathBlock;   // cell 에 data를 넘겨주기

// *optional
// 기본적으로 classNameOfCell 문자열로 할당한 클래스가 인자로 넘어가며 이 것을 그대로 리턴해도 되고, 새로 할당해 리턴해도 된다.
// -> 셀을 IB로 생성하는 등 다른 방식에 대비하기 위해
- (void)allocateCellBlock:(AllocateCellBlock)allocateCellBlock;

// did select row delegate
- (void)didSelectRowBlock:(DidSelectRowBlock)didSelectRowBlock;

// cell height
- (void)heightForRowBlock:(HeightForRowBlock)heightForRowBlock;

// edit
- (void)commitEditingBlock:(CommitEditingBlock)commitEditingBlock;
- (void)setEditingStyle:(UITableViewCellEditingStyle)editingStyle commitEditingBlock:(CommitEditingBlock)commitEditingBlock;
- (void)moveRowBlock:(MoveRowBlock)moveRowBlock;

// *optional
// 당겨서 더 불러오기를 사용할 경우, 호출될 selector와 더 불러오기 용 (이미지)뷰를 인자로 넘겨줌
- (void)useLoadMoreToUp:(SEL)selectorForLoadMore withView:(UIImageView *)loadMoreView;
- (void)useLoadMoreToDown:(SEL)selectorForLoadMore withView:(UIImageView *)loadMoreView;
- (void)useLoadMoreToUpWithDelegateBlock:(LoadMoreToUpBlock)loadMoreToUpBlock withView:(UIImageView *)loadMoreView;
- (void)useLoadMoreToDownWithDelegateBlock:(LoadMoreToDownBlock)loadMoreToDownBlock withView:(UIImageView *)loadMoreView;
// 테이블뷰 경계 끝에 닿으면 자동으로 셀렉터나 블럭을 호출함, 더 불러오기 성공이나 실패후의 처리는 reloadData 혹은 loadFail로 처리해주어야함
- (void)useAutoLoadMoreToDown:(SEL)selectorForAutoLoadMore withView:(UIImageView *)loadMoreView;
- (void)useAutoLoadMoreToDownWithDelegateBlock:(AutoLoadMoreToDownBlock)autoLoadMoreToDownBlock withView:(UIImageView *)loadMoreView;


// 데이터(배열)가 갱신되었을 때, 테이블과 데이터 갱신
- (void)reloadWithDataArray:(NSMutableArray *)dataArray;

// 더 불러오기 뷰의 위치 갱신 -> 자동으로 되도록 해결하기
- (void)relocateMoreView;

// temp
- (void)loadFail;
//
// ******************************************************************************************************************* //

@property (nonatomic, assign) id <TableViewProtocol>    protocolDelegate;
@property (nonatomic, retain) UITableView               *tableView;
// 섹션을 사용하려면 각 섹션의 데이터 배열들로 이루어진 배열을 설정
@property (nonatomic, retain) NSMutableArray            *tableData;

@property (nonatomic, assign) CGFloat                   tableViewCellHeight;
@property (nonatomic, retain) NSString                  *classNameOfCell;
// 더 불러오기
@property (nonatomic, retain) UIImageView               *loadMoreToUpView;
@property (nonatomic, retain) UIImageView               *loadMoreToDownView;
@property (nonatomic, assign) SEL                       loadMoreToUpSelector;
@property (nonatomic, assign) SEL                       loadMoreToDownSelector;
// 테이블뷰 섹션
// *** API ***
// 헤더뷰로 사용할 뷰들을 섹션의 인덱스에 맞게 배열로 넣으면 그 뷰가 각 섹션의 헤더로 지정, 기본 헤더뷰를 사용할 경우 headerTitles 배열에 문자열만 설정
@property (nonatomic, retain) NSMutableArray            *headerViews;
// 헤더의 타이틀로 사용할 문자열들을 섹션의 인덱스에 맞게 배열로 넣으면 기본 헤더뷰를 사용하며 문자열이 각 섹션 헤더의 title로 출력.
@property (nonatomic, retain) NSMutableArray            *headerTitles;

// stretchable cell
@property (nonatomic, retain) NSIndexPath               *stretchedCellIndexPath;
@property (nonatomic, assign) CGFloat                   stretchedCellHeight;
- (void)setStretchedCellIndexPath:(NSIndexPath *)stretchedCellIndexPath cellHeight:(CGFloat)stretchedCellHeight;
- (void)didStretchRowBlock:(DidStretchRowBlock)didStretchRowBlock heightForStretchedRowBlock:(HeightForStretchedRowBlock)heightForRowBlock;

@property (nonatomic, retain) UIView                    *noResultView;
// ***********

@end



/*
#import <objc/runtime.h>

@interface UITableViewCell (IndexPaths)
@property (nonatomic, retain) NSIndexPath *indexPaths;
@end

@implementation UITableViewCell (IndexPaths)
static char indexPathKey;
- (NSIndexPath *)indexPaths 
{
    return objc_getAssociatedObject(self, &indexPathKey);
}
- (void)setIndexPaths:(NSIndexPath *)indexPaths
{
    objc_setAssociatedObject(self, &indexPathKey, indexPaths, OBJC_ASSOCIATION_RETAIN);
} 
@end
*/