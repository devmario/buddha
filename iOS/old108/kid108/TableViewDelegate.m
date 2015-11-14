//
//  TableViewDelegate.m
//  CustomTableView
//
//  Created by MacBook on 11. 9. 30..
//  Copyright 2011 POSTECH. All rights reserved.
//

#import "TableViewDelegate.h"
#import "Contents.h"
#import "Functions.h"
#import "RecordPage.h"
#import "PlayPage.h"
// for objc_msgSend(target, @selector(action:::), arg1, arg2, arg3);
//#import <objc/message.h>


@implementation RecordCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if(self) {
        [self setSelectionStyle:UITableViewCellSelectionStyleNone];
        [self.textLabel setBackgroundColor:[UIColor clearColor]];
        [self.detailTextLabel setBackgroundColor:[UIColor clearColor]];
        [self.detailTextLabel setTextColor:[UIColor blackColor]];
        
        [self.textLabel setFont:FONT_GLOBAL(16)];
        [self.detailTextLabel setFont:FONT_GLOBAL(18)];
        
        [self setBackgroundColor:[UIColor clearColor]];
        
        self.bt = [UIButton buttonWithType:UIButtonTypeCustom];
        [self.bt.titleLabel setFont:FONT_GLOBAL(18)];
        [self.bt setTitleColor:[UIColor darkGrayColor] forState:UIControlStateNormal];
        [self.bt setTitleColor:[UIColor lightGrayColor] forState:UIControlStateDisabled];
        self.bt.layer.cornerRadius = 5;
        self.bt.layer.backgroundColor = [UIColor colorWithRed:0.90 green:0.90 blue:0.90 alpha:1.0].CGColor;
        [self addSubview:self.bt];
        [self.textLabel setTextColor:[UIColor darkGrayColor]];
        [self.detailTextLabel setTextColor:[UIColor darkGrayColor]];
        
        [self.bt addTarget:self action:@selector(clickBT) forControlEvents:UIControlEventTouchUpInside];
        [self.bt addTarget:self action:@selector(cancelBT) forControlEvents:UIControlEventTouchUpOutside];
        [self.bt addTarget:self action:@selector(downBT) forControlEvents:UIControlEventTouchDown];
        
        
    }
    return self;
}

- (void)downBT {
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    [self.bt setAlpha:0.5f];
}

- (void)cancelBT {
    [self.bt setAlpha:1.0f];
}

- (void)clickBT {
    [self cancelBT];
    id check_empty = [self.data objectForKey:@"is_empty"];
    if(check_empty != nil && [check_empty isEqualToString:@"true"]) {
        [[(RecordPage*)self.record_page navigationController] pushViewController:[[[PlayPage alloc] initWithNewPosition:0] autorelease] animated:NO];
    } else {
        int count = -1;
        id countObject = [self.data objectForKey:@"count"];
        if(countObject != nil) {
            count = [countObject intValue];
        }
        int count_buddha = count;
        if(count_buddha > 107)
            count_buddha = 107;
        if(count_buddha == 107) {
            
        } else {
            [[(RecordPage*)self.record_page navigationController] pushViewController:[[[PlayPage alloc] initWithRecord:self.data] autorelease] animated:NO];
        }
    }
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.bt.frame = CGRectMake(self.frame.size.width - 95.0f, 5.0f, 90.0f, 30.0f);
    self.detailTextLabel.frame = CGRectMake(self.frame.size.width - 100.0f - self.detailTextLabel.frame.size.width,
                                            self.detailTextLabel.frame.origin.y,
                                            self.detailTextLabel.frame.size.width,
                                            self.detailTextLabel.frame.size.height);
}

- (void)update:(id)data {
    [UIView setAnimationsEnabled:NO];
    id check_empty = [data objectForKey:@"is_empty"];
    if(check_empty != nil && [check_empty isEqualToString:@"true"]) {
        self.textLabel.text = @"기록이 없습니다.";
        self.detailTextLabel.text = @"";
        [self.bt setTitle:@"시작하기" forState:UIControlStateNormal];
        [self.bt setEnabled:YES];
    } else {
        int count = -1;
        id countObject = [data objectForKey:@"count"];
        if(countObject != nil) {
            count = [countObject intValue];
        }
        
        NSString* dateString = @"Date";
        id dateObject = [data objectForKey:@"date"];
        if(dateObject != nil) {
            NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
            [formatter setDateFormat:@"yyyy년 MM월 dd일 hh시 mm분 ss초"];
            dateString = [formatter stringFromDate:dateObject];
            [formatter release];
        }
        
        self.textLabel.text = dateString;
        int count_buddha = count + 1;
        if(count_buddha > 108)
            count_buddha = 108;
        self.detailTextLabel.text = [NSString stringWithFormat:@"%d배", count_buddha];
        [self.bt setTitle:count_buddha == 108 ? @"완료" : @"이어하기" forState:UIControlStateNormal];
        [self.bt setEnabled:count_buddha != 108];
    }
    self.data = data;
    [UIView setAnimationsEnabled:YES];
}

@end


@implementation TableViewDelegate


- (void)dealloc
{
    [super dealloc];
}


- (id)initWithFrame:(CGRect)frame withRecordPage:(id)p
{
	self = [super initWithFrame:frame style:UITableViewStylePlain];
    if (self) {
        self.data = [[NSMutableArray alloc] init];
        self.record_page = p;
        self.delegate = self;
        self.dataSource = self;
	}
    return self;    
}

-(void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath {
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


- (void)reloadData {
    self.data = [Functions recordGet];
    [super reloadData];
    [self performSelector:@selector(flashScrollIndicators) withObject:nil afterDelay:0];
    
}


- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 40.0f;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [self.data count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
	UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"record_cell"];
	
	if (cell==nil)
    {
        cell = [[RecordCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"record_cell"];
	}
    ((RecordCell*)cell).record_page = self.record_page;
    
    [(RecordCell*)cell update:[self.data objectAtIndex:indexPath.row]];
    return cell;
}


@end


