//
//  RecordPage.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "RecordPage.h"
#import "Contents.h"

@interface RecordPage ()
@end

@implementation RecordPage

@synthesize bg;

- (void)dealloc
{
    [table release], table=nil;
    
    [super dealloc];
}

-(BOOL)prefersStatusBarHidden
{
    return YES;
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
        
        [self.navigationController popViewControllerAnimated:YES];
    }];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [self setUserInterface];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    [table reloadData];
    dispatch_async(dispatch_get_main_queue(), ^{
        [table performSelector:@selector(flashScrollIndicators) withObject:nil afterDelay:0];
    });
}

- (void)setUserInterface
{
    [self customNavigationBarWithTitle:@"기록" backButtonSelector:@selector(backClick:)];
    
    table = [[TableViewDelegate alloc] initWithFrame:CGRectMake([[UIScreen mainScreen] bounds].size.width * 0.1, [[UIScreen mainScreen] bounds].size.height * 0.1, [[UIScreen mainScreen] bounds].size.width * 0.8, [[UIScreen mainScreen] bounds].size.height * 0.8 - self.deleteButton.frame.size.height - 20) withRecordPage:self];
    [table.layer setBorderColor:[UIColor colorWithWhite:0.8 alpha:1.0].CGColor];
    [table.layer setBorderWidth:1.0];
    [table.layer setCornerRadius:5.0];
    [table setBackgroundColor:[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.5]];
    [self.view addSubview:table];
    
    self.deleteButton.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, table.frame.size.height + table.frame.origin.y + 20 + self.deleteButton.frame.size.height * 0.5);
    self.deleteButton.layer.cornerRadius = 5;
    self.deleteButton.layer.backgroundColor = [UIColor colorWithWhite:0.6 alpha:1.0].CGColor;
}

- (IBAction)clickDeleteRecord:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    
    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [Functions alertTitle:@"삭제하시겠습니까?" message:nil buttons:@[@"확인",@"취소"] delegate:^(NSInteger buttonIndex) {
            if (buttonIndex==0)
            {
                [Functions recordRemoveAll];
                [table reloadData];
                dispatch_async(dispatch_get_main_queue(), ^{
                    [table performSelector:@selector(flashScrollIndicators) withObject:nil afterDelay:0];
                });
            }
        }];
    }];
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
