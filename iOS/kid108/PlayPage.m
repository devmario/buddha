//
//  PlayPage.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "PlayPage.h"
#import "Contents.h"

@interface PlayPage ()
@end

@implementation PlayPage

@synthesize bgView;
@synthesize bgViewForAnimation;
@synthesize viewClosePopUp;
@synthesize viewPlayDelay;
@synthesize labelCount;
@synthesize viewPlaying;
@synthesize labelTitle;
@synthesize labelSubtitle;
@synthesize viewClosePopupImage;
@synthesize popupBt1;
@synthesize popupBt2;

- (void)dealloc
{
    self.bgView = nil;
    self.bgViewForAnimation = nil;
    self.viewClosePopUp=nil;
    self.viewPlayDelay=nil;
    self.labelCount=nil;
    self.viewPlaying=nil;
    self.labelTitle=nil;
    self.labelSubtitle = nil;
    [record_dict release];
    
    [super dealloc];
}

- (id)initWithRecord:(NSMutableDictionary*)record {
    self = [super init];
    if(self) {
        record_dict = [[NSMutableDictionary alloc] initWithDictionary:record];
        count = [[record_dict objectForKey:@"count"] intValue];
    }
    [self showDelayViewWithCount:[NSNumber numberWithInt:count]];
    return self;
}

- (id)initWithNewPosition:(int)position {
    self = [super init];
    if(self) {
        record_dict = [[NSMutableDictionary alloc] initWithDictionary:[Functions recordNew]];
        [record_dict setObject:[NSNumber numberWithInt:position] forKey:@"count"];
        count = [[record_dict objectForKey:@"count"] intValue];
    }
    
    [self showDelayViewWithCount:[NSNumber numberWithInt:count]];
    return self;
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.view.frame = [[UIScreen mainScreen] bounds];
        viewPlaying.frame = [[UIScreen mainScreen] bounds];
        bgViewForAnimation.frame = [[UIScreen mainScreen] bounds];
        bgView.frame = [[UIScreen mainScreen] bounds];
        viewClosePopUp.frame = [[UIScreen mainScreen] bounds];
        viewClosePopupImage.frame = [[UIScreen mainScreen] bounds];
        bgViewForAnimation.contentMode = bgView.contentMode = UIViewContentModeScaleAspectFit;
        viewClosePopupImage.contentMode = UIViewContentModeScaleAspectFill;
        labelSubtitle.center = CGPointMake(bgView.frame.size.width * 0.5, bgView.frame.size.height * 0.87);
        labelTitle.center = CGPointMake(bgView.frame.size.width * 0.5, bgView.frame.size.height * 0.13);
        popupBt1.center = CGPointMake(self.view.frame.size.width * 0.42, popupBt1.center.y);
        popupBt2.center = CGPointMake(self.view.frame.size.width * 0.58, popupBt2.center.y);
        
        count = 0;
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.labelTitle.font = FONT_NanumPen(26);
    self.labelSubtitle.font = FONT_NanumPen(30);
    [self.labelTitle.layer setShadowColor:[UIColor blackColor].CGColor];
    [self.labelTitle.layer setShadowOffset:CGSizeMake(0, 1)];
    [self.labelTitle.layer setShadowRadius:2.0];
    [self.labelTitle.layer setShadowOpacity:0.85];

    //[self customNavigationBarWithTitle:@"절하기" backButtonSelector:@selector(backClick)];
    UIButton *pauseButton = [[UIButton alloc]initWithFrame:CGRectMake(12/2, 14/2, 60/2, 58/2)];
    [pauseButton setBackgroundImage:[UIImage imageNamed:@"pauseButton.png"] forState:UIControlStateNormal];
    [pauseButton addTarget:self action:@selector(pauseClick:) forControlEvents:UIControlEventTouchUpInside];
    [pauseButton setAdjustsImageWhenHighlighted:NO];
    [self.view addSubview:pauseButton];
    [pauseButton release];
    
    introDuration = 3;
    playDuration = 10;
    delayDuration = [GET(KEY_PLAY_SPEED) intValue];
}


- (void)pauseClick:(id)sender
{
    countAtpause = count;
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        [self.viewClosePopUp setHidden:NO];
        [NSThread cancelPreviousPerformRequestsWithTarget:self];
        [[Functions audioPlayerWithRetainObject:KEY_VOICE_TYPE] stop];
    }];
}

- (IBAction)clickClose:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [self.navigationController popViewControllerAnimated:NO];
    }];
}
- (IBAction)clickContinue:(id)sender
{
    self.labelSubtitle.alpha = self.labelTitle.alpha = 0.0f;
    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
    
        [self.viewClosePopUp setHidden:YES];
        
        [self showDelayViewWithCount:[NSNumber numberWithInt:countAtpause]];
    }];
}

- (void)showDelayViewWithCount:(NSNumber*)currentCount
{
    count = [currentCount intValue];
    [record_dict setObject:[NSNumber numberWithInt:count] forKey:@"count"];
    [Functions recordUpdate:record_dict];
    
    NSLog(@"play count => %d", count);
    if ([currentCount intValue]==108) {
        [self clickClose:nil];
        return;
    }
    
    [self.viewPlayDelay setHidden:NO];
    self.viewPlayDelay.alpha = 0;
    self.viewPlaying.alpha = 1;
    self.bgViewForAnimation.alpha = 1;
    [UIView animateWithDuration:3 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        self.viewPlayDelay.alpha = 1;
        self.viewPlaying.alpha = 0;
        self.bgViewForAnimation.alpha = 0;
    } completion:^(BOOL finished) {
        self.bgViewForAnimation.image = [Contents playBgWithNumber:[currentCount intValue]+1];
    }];
 
    [Functions audioPlayerWithRetainObject:self
                                   playURL:URL_SOUND_BELL
                                    volume:1
                             numberOfLoops:0];
    self.bgView.image = [Contents playBgWithNumber:[currentCount intValue]+1];
    self.labelCount.text = [NSString stringWithFormat:@"%d배를 올립니다.", [currentCount intValue]+1];

    [self performSelector:@selector(showTitlePageWithCount:) withObject:[NSNumber numberWithInt:[currentCount intValue]] afterDelay:introDuration];
}

- (void)showTitlePageWithCount:(NSNumber*)currentCount
{
    
    // animation
    [self.labelSubtitle setTransform:CGAffineTransformScale(self.labelTitle.transform, 1.3, 1.3)];
    self.labelSubtitle.alpha = 0;
    self.labelTitle.alpha = 0;
    //
    [self.viewPlayDelay setHidden:NO];
    [self.viewPlaying setHidden:NO];
    self.viewPlayDelay.alpha = 1;
    self.viewPlaying.alpha = 0;
    [UIView animateWithDuration:3 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [self.labelSubtitle setTransform:CGAffineTransformMakeScale(1, 1)];
        self.labelSubtitle.alpha = 1;
        self.labelTitle.alpha = 1;
        //
        self.viewPlayDelay.alpha = 0;
        self.viewPlaying.alpha = 1;
    } completion:^(BOOL finished) {
        [self.viewPlayDelay setHidden:YES];
        [self.viewPlaying setHidden:NO];
    }];
    //
    [Contents playVoiceWithNumber:[currentCount intValue]+1];
    self.labelTitle.text = [Contents titleWithCount:[currentCount intValue]+1];
    self.labelSubtitle.text = [Contents subtitleWithCount:[currentCount intValue]+1];

    
    [self performSelector:@selector(showDelayViewWithCount:) withObject:[NSNumber numberWithInt:[currentCount intValue]+1] afterDelay:playDuration+delayDuration];
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
