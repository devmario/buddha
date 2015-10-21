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
    [records release];
    self.bgView = nil;
    self.bgViewForAnimation = nil;
    self.viewClosePopUp=nil;
    self.viewPlayDelay=nil;
    self.labelCount=nil;
    self.viewPlaying=nil;
    self.labelTitle=nil;
    self.labelSubtitle = nil;
    
    [super dealloc];
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

    count = 0;
    records = [[Functions loadArrayFromPlistForKey:KEY_RECORD_DATA] retain];
    if([GET(KEY_PLAY_OPTION) isEqualToString:VALUE_PLAY_OPTION_CONTINUE])
    {
        NSString *today = [[NSDate date] stringWithDateFormat:@"yyyy-MM-dd"];

        NSMutableDictionary *lastRecord = [records lastObject];
        NSString *lastDate = [lastRecord objectForKey:KEY_RECORD_DATA_DATE];
        if ([lastDate isEqualToString:today]) {
            count = [[lastRecord objectForKey:KEY_RECORD_DATA_COUNT] intValue];
        }
    }
    
    countSavedOver108 = 0;
    if (count>=108) {
        int quotient = count/108;
        countSavedOver108 = 108*quotient;
        count = count-countSavedOver108;
    }
    [self showDelayViewWithCount:count];
}


- (void)pauseClick:(id)sender
{
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
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        NSString *today = [[NSDate date] stringWithDateFormat:@"yyyy-MM-dd"];
        
        NSMutableDictionary *lastRecord = [records lastObject];
        NSString *lastDate = [lastRecord objectForKey:KEY_RECORD_DATA_DATE];
        if ([lastDate isEqualToString:today])
        {
            int totalCount;
            if([GET(KEY_PLAY_OPTION) isEqualToString:VALUE_PLAY_OPTION_CONTINUE]) {
                totalCount = count + countSavedOver108;
            } else if([GET(KEY_PLAY_OPTION) isEqualToString:VALUE_PLAY_OPTION_RESTART]) {
                totalCount = count + [[lastRecord objectForKey:KEY_RECORD_DATA_COUNT] intValue];
            }
            [lastRecord setObject:STRING_INT(totalCount) forKey:KEY_RECORD_DATA_COUNT];
        }
        else
        {
            NSMutableDictionary *record = [NSMutableDictionary dictionaryWithObjectsAndKeys:
                                           STRING_INT(count),                                   KEY_RECORD_DATA_COUNT,
                                           [[NSDate date] stringWithDateFormat:@"yyyy-MM-dd"],  KEY_RECORD_DATA_DATE,
                                           nil];
            [records addObject:record];
        }
        [Functions saveArrayToPlist:records forKey:KEY_RECORD_DATA];
        
        //
        [self.navigationController popViewControllerAnimated:NO];
    }];
}
- (IBAction)clickContinue:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
    
        [self.viewClosePopUp setHidden:YES];
        
        [self showDelayViewWithCount:count];
    }];
}

- (void)showDelayViewWithCount:(int)currentCount
{
    currentCount = count;
    if (currentCount==108) {
        [self clickClose:nil];
        //count = 0;
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
        self.bgViewForAnimation.image = [Contents playBgWithNumber:currentCount+1];
    }];
 
    [Functions audioPlayerWithRetainObject:self
                                   playURL:URL_SOUND_BELL
                                    volume:1
                             numberOfLoops:0];
    self.bgView.image = [Contents playBgWithNumber:currentCount+1];
    self.labelCount.text = [NSString stringWithFormat:@"%d배를 올립니다.", currentCount+1];

    [self performSelector:@selector(showTitlePageWithCount:) withObject:[NSNumber numberWithInt:currentCount] afterDelay:introDuration];
}

- (void)showTitlePageWithCount:(int)currentCount
{
    currentCount = count;
    
    // animation
    [self.labelSubtitle setTransform:CGAffineTransformScale(self.labelTitle.transform, 1.3, 1.3)];
    self.labelSubtitle.alpha = 0;
    //
    [self.viewPlayDelay setHidden:NO];
    [self.viewPlaying setHidden:NO];
    self.viewPlayDelay.alpha = 1;
    self.viewPlaying.alpha = 0;
    [UIView animateWithDuration:3 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [self.labelSubtitle setTransform:CGAffineTransformMakeScale(1, 1)];
        self.labelSubtitle.alpha = 1;
        //
        self.viewPlayDelay.alpha = 0;
        self.viewPlaying.alpha = 1;
    } completion:^(BOOL finished) {
        [self.viewPlayDelay setHidden:YES];
        [self.viewPlaying setHidden:NO];
    }];
    //
    [Contents playVoiceWithNumber:currentCount+1];
    self.labelTitle.text = [Contents titleWithCount:currentCount+1];
    self.labelSubtitle.text = [Contents subtitleWithCount:currentCount+1];

    
    count++;
    [self performSelector:@selector(showDelayViewWithCount:) withObject:[NSNumber numberWithInt:currentCount] afterDelay:playDuration+delayDuration];
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
