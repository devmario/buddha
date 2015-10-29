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

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    _main = self;
    if (self) {
        self.view.frame = [[UIScreen mainScreen] bounds];
        img.frame = [[UIScreen mainScreen] bounds];
        img.contentMode = UIViewContentModeScaleAspectFill;
        // Custom initialization
        bt1.center = CGPointMake(self.view.frame.size.width * 0.2, self.view.frame.size.height - bt1.frame.size.height * 0.5 - 10);
        bt2.center = CGPointMake(self.view.frame.size.width * 0.4, self.view.frame.size.height - bt1.frame.size.height * 0.5 - 10);
        bt3.center = CGPointMake(self.view.frame.size.width * 0.6, self.view.frame.size.height - bt1.frame.size.height * 0.5 - 10);
        bt4.center = CGPointMake(self.view.frame.size.width * 0.8, self.view.frame.size.height - bt1.frame.size.height * 0.5 - 10);
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

        [self.navigationController pushViewController:[[[HelpPage alloc]init]autorelease] animated:NO];
    }];
}
- (IBAction)clickSettingButton:(id)sender
{
    //[Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.navigationController pushViewController:[[[SettingPage alloc]init]autorelease] animated:NO];
    }];
}
- (IBAction)clickRecordButton:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.navigationController pushViewController:[[[RecordPage alloc]init]autorelease] animated:NO];
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
        vc.view.backgroundColor = [UIColor clearColor];
        vc.modalPresentationStyle = UIModalPresentationOverCurrentContext;
        vc.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;
        [self presentViewController:vc animated:YES completion:nil];
        
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
