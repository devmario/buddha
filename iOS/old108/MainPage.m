//
//  MainPage.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "MainPage.h"
//
#import "PlayPage.h"
#import "SettingPage.h"
#import "RecordPage.h"
#import "HelpPage.h"
#import "SelectViewController.h"
//
#import "Contents.h"

@interface MainPage ()
@end

@implementation MainPage

- (void)dealloc
{
    [super dealloc];
}

id _main;
+ (MainPage*)getMain {
    return _main;
}

-(BOOL)prefersStatusBarHidden
{
    return YES;
}


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    _main = self;
    if (self) {
        // iOS 7:
        [[UITableView appearance] setSeparatorStyle:UITableViewCellSeparatorStyleSingleLine];
        [[UITableView appearance] setSeparatorInset:UIEdgeInsetsZero];
        
        [[UITableViewCell appearance] setSeparatorInset:UIEdgeInsetsZero];
        
        // iOS 8:
        if ([UITableView instancesRespondToSelector:@selector(setLayoutMargins:)]) {
            
            [[UITableView appearance] setLayoutMargins:UIEdgeInsetsZero];
            [[UITableViewCell appearance] setLayoutMargins:UIEdgeInsetsZero];
            [[UITableViewCell appearance] setPreservesSuperviewLayoutMargins:NO];
            
        }
        
        self.view.frame = [[UIScreen mainScreen] bounds];
        img.frame = [[UIScreen mainScreen] bounds];
        img.contentMode = UIViewContentModeScaleAspectFill;
        // Custom initialization
        mb.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height - mb.frame.size.height * 0.5 - 20);
        mb.layer.cornerRadius = 5;
        [bt1.titleLabel setFont:FONT_GLOBAL(16)];
        [bt2.titleLabel setFont:FONT_GLOBAL(16)];
        [bt3.titleLabel setFont:FONT_GLOBAL(16)];
        [bt4.titleLabel setFont:FONT_GLOBAL(16)];
        
        /*
        NSMutableArray* arr = [[NSMutableArray alloc] init];
        for(int i = 1; i <= 108; i++) {
            NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
            [dict setObject:[Contents titleWithCount:i] forKey:@"title"];
            [dict setObject:[Contents subtitleWithCount:i] forKey:@"sub_title"];
            [arr addObject:dict];
        }
        NSError* error = nil;
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:arr options:nil error:&error];
        NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        NSLog(@"====DATA====\n%@", jsonString);
         */
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
}


- (IBAction)clickHelpButton:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        [self.navigationController pushViewController:[[[HelpPage alloc]init]autorelease] animated:YES];
    }];
}
- (IBAction)clickSettingButton:(id)sender
{
    //[Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.navigationController pushViewController:[[[SettingPage alloc]init]autorelease] animated:YES];
    }];
}
- (IBAction)clickRecordButton:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.navigationController pushViewController:[[[RecordPage alloc]init]autorelease] animated:YES];
    }];
}
- (IBAction)clickPalyButton:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        
        SelectViewController* vc = [[[SelectViewController alloc] init] autorelease];
        vc.view.backgroundColor = [UIColor whiteColor];
        [self.navigationController pushViewController:vc animated:YES];
        
        //[self.navigationController pushViewController:[[[PlayPage alloc] initWithNewPosition:0] autorelease] animated:NO];
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
