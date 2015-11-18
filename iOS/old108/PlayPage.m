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
@synthesize viewPlaying;
@synthesize labelTitle;
@synthesize labelSubtitle;
@synthesize viewClosePopupImage;
@synthesize popupBt1;
@synthesize popupBt2;

- (void)setUILabel:(UILabel *)myLabel withMaxFrame:(CGRect)maxFrame withText:(NSString *)theText usingVerticalAlign:(int)vertAlign {
    CGSize stringSize = [theText sizeWithFont:myLabel.font constrainedToSize:maxFrame.size lineBreakMode:myLabel.lineBreakMode];
    
    switch (vertAlign) {
        case 0: // vertical align = top
            myLabel.frame = CGRectMake(myLabel.frame.origin.x,
                                       myLabel.frame.origin.y,
                                       myLabel.frame.size.width,
                                       stringSize.height
                                       );
            break;
            
        case 1: // vertical align = middle
            // don't do anything, lines will be placed in vertical middle by default
            break;
            
        case 2: // vertical align = bottom
            myLabel.frame = CGRectMake(myLabel.frame.origin.x,
                                       (myLabel.frame.origin.y + myLabel.frame.size.height) - stringSize.height,
                                       myLabel.frame.size.width,
                                       stringSize.height
                                       );
            break;
    }
    
    myLabel.text = theText;
}


- (void)dealloc
{
    self.bgView = nil;
    self.bgViewForAnimation = nil;
    self.viewClosePopUp=nil;
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

-(BOOL)prefersStatusBarHidden
{
    return YES;
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
        if([[[Contents jsonData] objectForKey:@"play_image_fit"] boolValue]) {
            bgViewForAnimation.contentMode = bgView.contentMode = UIViewContentModeScaleAspectFit;
        } else {
            bgViewForAnimation.contentMode = bgView.contentMode = UIViewContentModeScaleAspectFill;
        }
        viewClosePopupImage.contentMode = UIViewContentModeScaleAspectFill;
        
        id rect = [[[Contents jsonData] objectForKey:@"play_subtitle"] objectForKey:@"rect"];
        labelSubtitle.frame = CGRectMake(0, 0, bgView.frame.size.width * [[rect objectAtIndex:2] floatValue], bgView.frame.size.height * [[rect objectAtIndex:3] floatValue]);
        labelSubtitle.center = CGPointMake(bgView.frame.size.width * [[rect objectAtIndex:0] floatValue], bgView.frame.size.height * [[rect objectAtIndex:1] floatValue]);
        
        labelSubtitle.numberOfLines = -1;
        labelSubtitle.minimumFontSize = 8;
        labelSubtitle.adjustsFontSizeToFitWidth = YES;
        
        rect = [[[Contents jsonData] objectForKey:@"play_title"] objectForKey:@"rect"];
        labelTitle.frame = CGRectMake(0, 0, bgView.frame.size.width * [[rect objectAtIndex:2] floatValue], bgView.frame.size.height * [[rect objectAtIndex:3] floatValue]);
        labelTitle.center = CGPointMake(bgView.frame.size.width - labelTitle.frame.size.width * 0.5 - 20, 20 + labelTitle.frame.size.height * 0.5);
        
        self.popupInner.frame = CGRectMake(0, 0, popupBt1.frame.size.width * 2 + 20 * 3, self.popupBt1.frame.size.height + 20 * 2);
        popupBt1.frame = CGRectMake(20, 20, popupBt1.frame.size.width, popupBt1.frame.size.height);
        popupBt2.frame = CGRectMake(40 + popupBt1.frame.size.width, 20, popupBt2.frame.size.width, popupBt2.frame.size.height);
        self.popupInner.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height * 0.5);
        
        self.popupInner.layer.cornerRadius = 5;
        self.popupInner.layer.backgroundColor = [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.5].CGColor;
        [popupBt1.titleLabel setFont:FONT_GLOBAL(18)];
        [popupBt2.titleLabel setFont:FONT_GLOBAL(18)];
        popupBt1.layer.cornerRadius = 5;
        popupBt2.layer.cornerRadius = 5;
        popupBt1.layer.backgroundColor = [UIColor colorWithRed:0.36 green:0.44 blue:0.85 alpha:1.0].CGColor;
        popupBt2.layer.backgroundColor = [UIColor colorWithRed:0.6 green:0.6 blue:0.6 alpha:1.0].CGColor;
        
        count = 0;
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    
    self.labelTitle.font = FONT_GLOBAL([[[[Contents jsonData] objectForKey:@"play_title"] objectForKey:@"size"] intValue] * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1));
    self.labelSubtitle.font = FONT_GLOBAL([[[[Contents jsonData] objectForKey:@"play_subtitle"] objectForKey:@"size"] intValue] * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1));
    //[self.labelTitle setTextColor:[UIColor colorWithWhite:0.2 alpha:1.0]];
    [self.labelTitle.layer setShadowColor:[UIColor whiteColor].CGColor];
    [self.labelTitle.layer setShadowOffset:CGSizeMake(0, 0)];
    [self.labelTitle.layer setShadowRadius:2.0];
    [self.labelTitle.layer setShadowOpacity:0.85];
    [self.labelTitle setClipsToBounds:NO];
    
    self.labelSubtitle.textColor = [UIColor whiteColor];
    [self.labelSubtitle.layer setShadowColor:[UIColor blackColor].CGColor];
    [self.labelSubtitle.layer setShadowOffset:CGSizeMake(0, 0)];
    [self.labelSubtitle.layer setShadowRadius:2.0];
    [self.labelSubtitle.layer setShadowOpacity:0.85];
    [self.labelSubtitle setClipsToBounds:NO];
    
    if([[[Contents jsonData] objectForKey:@"play_subtitle_round_bg"] boolValue]) {
//        self.labelSubtitle.layer.backgroundColor = [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.6].CGColor;
//        self.labelSubtitle.layer.cornerRadius = 5;
//        self.labelSubtitle.layer.borderWidth = 0.0;
    }

    //[self customNavigationBarWithTitle:@"절하기" backButtonSelector:@selector(backClick)];
    UIButton *pauseButton = [[UIButton alloc] initWithFrame:CGRectMake(10 * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1), 10 * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1), 30 * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1), 30 * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1))];
    [pauseButton setTitle:@"||" forState:UIControlStateNormal];
    [pauseButton.titleLabel setFont:FONT_GLOBAL(20 * (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 2 : 1))];
    pauseButton.layer.backgroundColor = [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0].CGColor;
    pauseButton.layer.cornerRadius = 5;
    [pauseButton setTitleColor:[UIColor colorWithRed:0.2 green:0.2 blue:0.2 alpha:1.0] forState:UIControlStateNormal];
    [pauseButton addTarget:self action:@selector(pauseClick:) forControlEvents:UIControlEventTouchUpInside];
    [self.view insertSubview:pauseButton belowSubview:viewClosePopUp];
    [pauseButton release];
    
    introDuration = 3;
    playDuration = 10;
    delayDuration = ([GET(KEY_PLAY_SPEED) intValue] - 1) * 1.5;
}


- (void)pauseClick:(id)sender
{
    countAtpause = count;
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformIdentity];

        [self.viewClosePopUp setHidden:NO];
        
        [self.viewClosePopUp setAlpha:0];
        [UIView beginAnimations:NULL context:nil];
        [UIView setAnimationDuration:0.5];
        [self.viewClosePopUp setAlpha:1];
        [UIView commitAnimations];
        
        [NSThread cancelPreviousPerformRequestsWithTarget:self];
        [NSThread cancelPreviousPerformRequestsWithTarget:bgView];
        [[Functions audioPlayerWithRetainObject:KEY_VOICE_TYPE] stop];
    }];
}

- (IBAction)clickClose:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [self.navigationController popViewControllerAnimated:YES];
    }];
}
- (IBAction)clickContinue:(id)sender
{
    self.labelSubtitle.text = @"";
    self.labelTitle.text = @"";
    self.bgView.image = nil;
    self.bgViewForAnimation.image = nil;
    [self.labelSubtitle setTransform:CGAffineTransformIdentity];
    [self.labelTitle setTransform:CGAffineTransformIdentity];
    [self.bgView setTransform:CGAffineTransformIdentity];
    [self.bgViewForAnimation setTransform:CGAffineTransformIdentity];
    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformIdentity];
        
        [UIView animateWithDuration:0.5 delay:0 options:UIViewAnimationCurveEaseOut animations:^(void) {
            [self.viewClosePopUp setAlpha:0.0];
        } completion:^(BOOL finished) {
            [self.viewClosePopUp setHidden:YES];
        }];
        
        [self showDelayViewWithCount:[NSNumber numberWithInt:countAtpause]];
    }];
}

- (void)showDelayViewWithCount:(NSNumber*)currentCount
{
    NSLog(@"showDelayViewWithCount %@", [currentCount description]);
    
    count = [currentCount intValue];
    [record_dict setObject:[NSNumber numberWithInt:count] forKey:@"count"];
    [Functions recordUpdate:record_dict];
    
    if(![self.labelTitle.text isEqualToString:[Contents titleWithCount:[currentCount intValue]+1]]) {
        labelTitle.frame = [[UIScreen mainScreen] bounds];
        CATransition *animation = [CATransition animation];
        animation.duration = 3.0;
        animation.type = kCATransitionFade;
        animation.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
        [self.labelTitle.layer addAnimation:animation forKey:@"changeTextTransition"];
        // Change the text
        self.labelTitle.text = [Contents titleWithCount:[currentCount intValue]+1];
        [self.labelTitle sizeToFit];
        
        labelTitle.center = CGPointMake(bgView.frame.size.width - labelTitle.frame.size.width * 0.5 - 20, 20 + labelTitle.frame.size.height * 0.5);
    }
    
    if ([currentCount intValue]==108) {
        [self clickClose:nil];
        return;
    }
    
    self.bgViewForAnimation.image = [Contents playBgWithNumber:[currentCount intValue]+1];
    self.bgViewForAnimation.alpha = 0;
    [self.bgViewForAnimation setTransform:CGAffineTransformScale(CGAffineTransformIdentity, 1.3, 1.3)];
    [UIView animateWithDuration:3 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        self.bgViewForAnimation.alpha = 1;
        [self.bgViewForAnimation setTransform:CGAffineTransformIdentity];
        [self.labelSubtitle setTransform:CGAffineTransformScale(CGAffineTransformIdentity, 1.3, 1.3)];
        self.labelSubtitle.alpha = 0;
    } completion:^(BOOL finished) {
    }];
    
    [bgView performSelector:@selector(setImage:) withObject:[Contents playBgWithNumber:[currentCount intValue]+1] afterDelay:3];
 
    [Functions audioPlayerWithRetainObject:self
                                   playURL:URL_SOUND_BELL
                                    volume:1
                             numberOfLoops:0];

    [self performSelector:@selector(showTitlePageWithCount:) withObject:[NSNumber numberWithInt:[currentCount intValue]] afterDelay:introDuration];
}

- (void)showTitlePageWithCount:(NSNumber*)currentCount
{
    NSLog(@"showTitlePageWithCount %@", [currentCount description]);
    
    [self.labelSubtitle setTransform:CGAffineTransformScale(CGAffineTransformIdentity, 1.0, 1.0)];
    self.labelSubtitle.alpha = 0;
    
    NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:[Contents subtitleWithCount:[currentCount intValue]+1]];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    paragraphStyle.lineSpacing = 20.0f;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [Contents subtitleWithCount:[currentCount intValue]+1].length)];
    
    self.labelSubtitle.frame = [[UIScreen mainScreen] bounds];
    self.labelSubtitle.attributedText = attributedString;
    [self.labelSubtitle sizeToFit];
    
    labelSubtitle.center = CGPointMake(bgView.frame.size.width * 0.5, bgView.frame.size.height - 20 - self.labelSubtitle.frame.size.height * 0.5);
    
    [self.labelSubtitle setTransform:CGAffineTransformScale(CGAffineTransformIdentity, 1.3, 1.3)];
    
    [UIView animateWithDuration:3 delay:2 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [self.labelSubtitle setTransform:CGAffineTransformIdentity];
        self.labelSubtitle.alpha = 1;
    } completion:^(BOOL finished) {
    }];
    
    [Contents playVoiceWithNumber:[currentCount intValue]+1];

    
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
