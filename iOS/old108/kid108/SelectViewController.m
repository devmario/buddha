//
//  SelectViewController.m
//  kid108
//
//  Created by jangwonhee on 2015. 10. 30..
//  Copyright © 2015년 3dpaper. All rights reserved.
//

#import "SelectViewController.h"
#import "Contents.h"

#import "PlayPage.h"
#import "MainPage.h"

@interface SelectViewController ()


@end

@implementation SelectViewController

@synthesize bg, popup, categoryTitleBT, categoryPosBT, table, cancelBT, data;

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if(self.data == nil)
        return 0;
    return self.data.count;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    NSMutableDictionary* dict = [self.data objectAtIndex:indexPath.row];
    [self dismissViewControllerAnimated:YES completion:^{
        [[MainPage getMain].navigationController pushViewController:[[[PlayPage alloc] initWithNewPosition:[[dict objectForKey:@"pos"] intValue] - 1] autorelease] animated:YES];
    }];
    
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"select_cell"];
    
    if (cell==nil)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"select_cell"];
        cell.backgroundColor = [UIColor clearColor];
        UIView *bgColorView = [[UIView alloc] init];
        bgColorView.backgroundColor = [UIColor lightGrayColor];
        [cell setSelectedBackgroundView:bgColorView];
        [cell.textLabel setFont:FONT_GLOBAL(16)];
        cell.textLabel.textColor = [UIColor darkGrayColor];
        cell.textLabel.highlightedTextColor = [UIColor whiteColor];
        cell.selectionStyle = UITableViewCellSelectionStyleBlue;
    }
    NSMutableDictionary* dict = [self.data objectAtIndex:indexPath.row];
    if(dict) {
        NSString* title = [dict objectForKey:@"title"];
        NSNumber* pos = [dict objectForKey:@"pos"];
        if(title)
            cell.textLabel.text = title;
        else {
            if([pos intValue] == 1) {
                cell.textLabel.text = @"처음부터";
            } else {
                cell.textLabel.text = [NSString stringWithFormat:@"%d배", [pos intValue]];
            }
        }
    }
    
    return cell;
}

- (void)down:(id)sender {
    UIButton* bt = sender;
    bt.layer.backgroundColor = [UIColor whiteColor].CGColor;
}

- (void)up:(id)sender {
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    UIButton* bt = sender;
    bt.layer.backgroundColor = [UIColor colorWithRed:0.20 green:0.20 blue:0.20 alpha:1.0].CGColor;
}

const float radius_SELECT = 5;

- (void)setupButton:(UIButton*)bt {
    bt.layer.cornerRadius = radius_SELECT;
    bt.layer.shadowColor = [UIColor blackColor].CGColor;
    bt.layer.shadowOpacity = 0.3;
    bt.layer.shadowRadius = 3;
    bt.layer.shadowOffset = CGSizeMake(3, 3);
    bt.layer.backgroundColor = [UIColor colorWithRed:0.20 green:0.20 blue:0.20 alpha:1.0].CGColor;
    [bt setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [bt setTitleColor:[UIColor colorWithRed:0.20 green:0.20 blue:0.20 alpha:1.0] forState:UIControlEventTouchDown];
    [bt addTarget:self action:@selector(down:) forControlEvents:UIControlEventTouchDown];
    [bt addTarget:self action:@selector(up:) forControlEvents:UIControlEventTouchUpInside];
    [bt addTarget:self action:@selector(up:) forControlEvents:UIControlEventTouchUpOutside];
    [bt.titleLabel setFont:FONT_GLOBAL(22)];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.data = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)dealloc {
    [self.data release];
    self.data = nil;
    [super dealloc];
}

- (IBAction)clickTitle:(id)sender {
    [self reloadData:YES];
}

- (IBAction)clickPos:(id)sender {
    [self reloadData:NO];
}

- (IBAction)clickCancel:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)reloadData:(BOOL)isTitle {
    [self.data release];
    self.data = [[NSMutableArray alloc] init];
    if(isTitle) {
        NSString* title = @"";
        for(int i = 1; i <= 108; i++) {
            NSString* titleIndex = [Contents titleWithCount:i];
            if([title isEqualToString:titleIndex]) {
                continue;
            } else {
                title = titleIndex;
                NSMutableDictionary* dict = [[[NSMutableDictionary alloc] init] autorelease];
                [dict setObject:[NSString stringWithString:title] forKey:@"title"];
                [dict setObject:[NSNumber numberWithInt:i] forKey:@"pos"];
                [self.data addObject:dict];
            }
        }
    } else {
        for(int i = 1; i <= 108; i++) {
            NSMutableDictionary* dict = [[[NSMutableDictionary alloc] init] autorelease];
            [dict setObject:[NSNumber numberWithInt:i] forKey:@"pos"];
            [self.data addObject:dict];
        }
    }
    [table reloadData];
    [table setContentOffset:CGPointZero animated:YES];
    [table performSelector:@selector(flashScrollIndicators) withObject:nil afterDelay:0];
}


- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 40.0f;
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

- (void)viewDidLayoutSubviews
{
    self.view.frame = [[UIScreen mainScreen] bounds];
    CGRect r = [[UIScreen mainScreen] bounds];
    bg.frame = r;
    float ratio = 0.6;
    popup.frame = CGRectMake(r.size.width * ((1.0 - ratio) * 0.5), r.size.height * 0.1, r.size.width * ratio, r.size.height * 0.8);
    float bs = 40.0f;
    float bm = 2.0f;
    categoryTitleBT.frame = CGRectMake(popup.frame.size.width * 0.5, bm, popup.frame.size.width * 0.5 - bm * 2, bs - bm * 2);
    categoryPosBT.frame = CGRectMake(bm, bm, popup.frame.size.width * 0.5 - bm * 2, bs - bm * 2);
    table.frame = CGRectMake(bm, bs, popup.frame.size.width - bm * 3, popup.frame.size.height - bs * 2.0f);
    cancelBT.frame = CGRectMake(bm, popup.frame.size.height - bs + bm, popup.frame.size.width - bm * 2, bs - bm * 2);
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setupButton:categoryTitleBT];
    [self setupButton:categoryPosBT];
    [self setupButton:cancelBT];
    table.layer.cornerRadius = radius_SELECT;
    [table setBackgroundColor:[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.8]];
    [popup setBackgroundColor:[UIColor clearColor]];
    [self reloadData:NO];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
