//
//  RecordPage.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "RecordPage.h"
#import "Contents.h"

@implementation RecordCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if(self) {
        [self setSelectionStyle:UITableViewCellSelectionStyleNone];
        [self.textLabel setBackgroundColor:[UIColor clearColor]];
        [self.detailTextLabel setBackgroundColor:[UIColor clearColor]];
        [self.detailTextLabel setTextColor:[UIColor blackColor]];
        
        [self.textLabel setFont:FONT_NanumPen(27)];
        [self.detailTextLabel setFont:FONT_NanumPen(23)];
        
        [self setBackgroundColor:[UIColor clearColor]];
        
        bt = [UIButton buttonWithType:UIButtonTypeCustom];
        [bt setBackgroundImage:[UIImage imageNamed:@"buttonBg2"] forState:UIControlStateNormal];
        [bt setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        [bt addTarget:self action:@selector(clickBT) forControlEvents:UIControlEventTouchUpInside];
        [bt addTarget:self action:@selector(cancelBT) forControlEvents:UIControlEventTouchUpOutside];
        [bt addTarget:self action:@selector(downBT) forControlEvents:UIControlEventTouchDown];
        [self addSubview:bt];
    }
    return self;
}

- (void)downBT {
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    [bt setAlpha:0.5f];
}

- (void)cancelBT {
    [bt setAlpha:1.0f];
}

- (void)clickBT {
    [self cancelBT];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    bt.frame = CGRectMake(self.frame.size.width - 95.0f, 5.0f, 90.0f, 30.0f);
    self.detailTextLabel.frame = CGRectMake(self.frame.size.width - 100.0f - self.detailTextLabel.frame.size.width,
                                            self.detailTextLabel.frame.origin.y,
                                            self.detailTextLabel.frame.size.width,
                                            self.detailTextLabel.frame.size.height);
}

- (void)update:(id)data {
    id check_empty = [data objectForKey:@"is_empty"];
    if(check_empty != nil && [check_empty isEqualToString:@"true"]) {
        self.textLabel.text = @"기록이 없습니다.";
        self.detailTextLabel.text = @"";
        [bt setTitle:@"시작하기" forState:UIControlStateNormal];
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
            [formatter setDateFormat:@"yyyy-MM-dd hh:mm:ss"];
            dateString = [formatter stringFromDate:dateObject];
            [formatter release];
        }
        
        self.textLabel.text = dateString;
        self.detailTextLabel.text = [NSString stringWithFormat:@"%d배", count + 1];
        [bt setTitle:@"이어하기" forState:UIControlStateNormal];
    }
}

@end

@interface RecordPage ()
@end

@implementation RecordPage

@synthesize scrollBar, scrollBarBg, bg, bt1, bt2;

- (void)dealloc
{
    self.scrollBar = nil;
    self.scrollBarBg = nil;
    [table release], table=nil;
    
    [super dealloc];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.view.frame = [[UIScreen mainScreen] bounds];
        bg.frame = [[UIScreen mainScreen] bounds];
        bg.contentMode = UIViewContentModeScaleAspectFill;
        // Custom initialization
    }
    return self;
}



- (void)backClick:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    
    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.navigationController popViewControllerAnimated:NO];
    }];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [self setUserInterface];
    [self loadRecordData];
}
- (void)setUserInterface
{
    [self customNavigationBarWithTitle:@"기록" backButtonSelector:@selector(backClick:)];
    
    table = [[TableViewDelegate alloc] initWithFrame:CGRectMake([[UIScreen mainScreen] bounds].size.width * 0.2, [[UIScreen mainScreen] bounds].size.height * 0.2, [[UIScreen mainScreen] bounds].size.width * 0.6, [[UIScreen mainScreen] bounds].size.height * 0.6)
                                     addTableViewTo:self.view
                                   protocolDelegate:self
                                    classNameOfCell:nil
                                         cellHeight:40
                         cellForRowAtIndexPathBlock:^(UITableView *tableView, NSIndexPath *indexPath, UITableViewCell *cell, id dataForRow) {
                             [(RecordCell*)cell update:dataForRow];
                         }];
    
    bt1.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.8 + bt1.frame.size.width * 0.5 + 5, [[UIScreen mainScreen] bounds].size.height * 0.2);
    bt2.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.8 + bt2.frame.size.width * 0.5 + 5, [[UIScreen mainScreen] bounds].size.height * 0.8);
    scrollBarBg.frame = CGRectMake(bt1.center.x - bt1.frame.size.width * 0.5, bt1.center.y, bt1.frame.size.width, bt2.center.y - bt1.center.y);
    scrollBar.frame = scrollBarBg.frame;
    
    [table allocateCellBlock:^id(id allocatedObjectFromClassName) {
        return [[[RecordCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:table.classNameOfCell] autorelease];
    }];
    [table.tableView.layer setBorderColor:[UIColor colorWithWhite:0 alpha:0.5].CGColor];
    [table.tableView.layer setBorderWidth:1.0];
    [table.tableView setBackgroundColor:[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.5]];
    
}

- (void)loadRecordData
{
    NSMutableArray *recordData = [Functions recordGet];
    [table reloadWithDataArray:recordData];
    
    [self setScrollBarHeight];
}
- (void)setScrollBarHeight
{
    CGFloat scrollBarHeight = 0;
    if (table.tableView.frame.size.height<table.tableView.contentSize.height) {
        CGFloat ratio = table.tableView.frame.size.height/table.tableView.contentSize.height;
        scrollBarHeight = self.scrollBarBg.frame.size.height*ratio;
    } else {
        scrollBarHeight = self.scrollBarBg.frame.size.height;
    }
    [self.scrollBar setHeight:scrollBarHeight];
    
}

- (void)tableViewDidScroll:(UIScrollView *)scrollView
{
    CGFloat ratio = (self.scrollBarBg.frame.size.height-self.scrollBar.frame.size.height)/(scrollView.contentSize.height-scrollView.frame.size.height);
    CGFloat scrollBarContentOffsetY = self.scrollBarBg.frame.origin.y + scrollView.contentOffset.y*ratio;
    
    [self.scrollBar setY:scrollBarContentOffsetY];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    if (toInterfaceOrientation==UIInterfaceOrientationLandscapeLeft) {
        return YES;
    }
    return NO;
}

@end
