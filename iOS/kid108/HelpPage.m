//
//  HelpPage.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "HelpPage.h"
#import "Contents.h"

@interface HelpPage ()
@end

@implementation HelpPage

@synthesize viewAppInfo, viewHowToPlay, viewUsage, buttonAppInfo, buttonHowToPlay, buttonUsage, scrollViewUsage, pageControlUsage,bg,menu,howbt1,howbt2,howbt3,imageViewPlay;
@synthesize textViewAppInfo, textViewHowToPlay,help1,help2,help3;

- (void)dealloc
{
    [arraySequence release];
    
    self.viewAppInfo = nil;
    self.viewHowToPlay = nil;
    self.viewUsage = nil;
    
    self.buttonAppInfo = nil;
    self.buttonHowToPlay = nil;
    self.buttonUsage = nil;
    
    self.textViewAppInfo = nil;
    self.textViewHowToPlay = nil;
    
    [super dealloc];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.view.frame = [[UIScreen mainScreen] bounds];
        bg.frame = [[UIScreen mainScreen] bounds];
        
        help1.frame = [[UIScreen mainScreen] bounds];
        help2.frame = [[UIScreen mainScreen] bounds];
        help3.frame = [[UIScreen mainScreen] bounds];
        
        viewHowToPlay.frame = CGRectMake(0, menu.frame.size.height, [[UIScreen mainScreen] bounds].size.width, [[UIScreen mainScreen] bounds].size.height - menu.frame.size.height);
        
        imageViewPlay.frame = CGRectMake(0, 0, viewHowToPlay.frame.size.height - 60, viewHowToPlay.frame.size.height - 60);
        imageViewPlay.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5 - imageViewPlay.frame.size.width * 0.5 - 10, viewHowToPlay.frame.size.height - imageViewPlay.frame.size.height * 0.5 - 45);
        imageViewPlay.contentMode = UIViewContentModeScaleAspectFit;
        textViewHowToPlay.frame = imageViewPlay.frame;
        textViewHowToPlay.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5 + textViewHowToPlay.frame.size.width * 0.5 + 10, viewHowToPlay.frame.size.height - textViewHowToPlay.frame.size.height * 0.5 - 45);
        
        howbt1.center = CGPointMake(imageViewPlay.frame.origin.x + howbt1.frame.size.width * 0.5, viewHowToPlay.frame.size.height - howbt1.frame.size.height * 0.5 - 8);
        howbt3.center = CGPointMake(imageViewPlay.frame.origin.x + imageViewPlay.frame.size.width - howbt3.frame.size.width * 0.5, viewHowToPlay.frame.size.height - howbt3.frame.size.height * 0.5 - 8);
        howbt2.center = CGPointMake(howbt1.center.x + (howbt3.center.x - howbt1.center.x) * 0.5,howbt3.center.y);
        
        help1.frame = CGRectMake(0, 0, help1.frame.size.width, help1.frame.size.height);
        help2.frame = CGRectMake(help1.frame.size.width, 0, help1.frame.size.width, help1.frame.size.height);
        help3.frame = CGRectMake(help1.frame.size.width + help2.frame.size.width, 0, help1.frame.size.width, help1.frame.size.height);
        help1.contentMode = help2.contentMode = help3.contentMode = UIViewContentModeScaleAspectFit;
        scrollViewUsage.frame = [[UIScreen mainScreen] bounds];
        scrollViewUsage.contentSize = CGSizeMake([[UIScreen mainScreen] bounds].size.width * 3, [[UIScreen mainScreen] bounds].size.height);
        
        bg.contentMode = UIViewContentModeScaleAspectFill;
        pageControlUsage.pageIndicatorTintColor = [UIColor whiteColor];
        pageControlUsage.currentPageIndicatorTintColor = [UIColor blackColor];
        pageControlUsage.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, pageControlUsage.center.y);
        textViewAppInfo.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, [[UIScreen mainScreen] bounds].size.height * 0.5 + menu.frame.size.height * 0.5);
        menu.frame = CGRectMake([[UIScreen mainScreen] bounds].size.width - menu.frame.size.width, 0, menu.frame.size.width, menu.frame.size.height);
        [menu setBackgroundColor:[UIColor clearColor]];
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
        [[Functions audioPlayerWithRetainObject:self] stop];
    }];
}


- (void)viewDidLoad
{
    
    [super viewDidLoad];
    
    // Do any additional setup after loading the view from its nib.
    
    [self clickAppInfo:nil];
    [self customNavigationBarWithTitle:@"도움말" backButtonSelector:@selector(backClick:)];

    [self.textViewAppInfo setFont:FONT_NanumPen(26)];
    [self.textViewHowToPlay setFont:FONT_NanumPen(23)];
    
    // scrollview setting
    [self.scrollViewUsage setContentSize:CGSizeMake(480*3, 320)];
}
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    CGFloat pageWidth = scrollView.frame.size.width;
    self.pageControlUsage.currentPage = floor((scrollView.contentOffset.x - pageWidth/3) / pageWidth) + 1;
}


- (IBAction)clickAppInfo:(id)sender
{
    if (sender)
        [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        [self.buttonAppInfo setSelected:YES];
        [self.buttonHowToPlay setSelected:NO];
        [self.buttonUsage setSelected:NO];
        
        [self.viewAppInfo setHidden:NO];
        [self.viewHowToPlay setHidden:YES];
        [self.viewUsage setHidden:YES];
        
        [Functions audioPlayerWithRetainObject:self
                                       playURL:[Contents appInfoVoiceUrl]
                                        volume:1
                                 numberOfLoops:0];
    }];
}
- (IBAction)clickHowToPlay:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.buttonAppInfo setSelected:NO];
        [self.buttonHowToPlay setSelected:YES];
        [self.buttonUsage setSelected:NO];
        
        [self.viewAppInfo setHidden:YES];
        [self.viewHowToPlay setHidden:NO];
        [self.viewUsage setHidden:YES];
        
        [self preparePlay];
    }];
}
- (IBAction)clickUsage:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.buttonAppInfo setSelected:NO];
        [self.buttonHowToPlay setSelected:NO];
        [self.buttonUsage setSelected:YES];
        
        [self.viewAppInfo setHidden:YES];
        [self.viewHowToPlay setHidden:YES];
        [self.viewUsage setHidden:NO];
    }];
}





// - - - - - - - - - - - - - - - - -
// how to play view
//
// sequence 0, 19, 29, 37, 41, 46, 55, 67

#define MAX_HOW_TO_SEQUENCE 7

- (void)setupDisable {
    if([self.textViewPlayInfo.text isEqualToString:@""]) {
        self.buttonPrevImage.alpha = 1.0;
        self.buttonNextImage.alpha = 1.0;
        self.buttonPlay.alpha = 0.5;
    } else {
        self.buttonPrevImage.alpha = 1.0;
        self.buttonNextImage.alpha = 1.0;
        self.buttonPlay.alpha = 1.0;
        if(currentSequence == 0)
            self.buttonPrevImage.alpha = 0.5;
        if(currentSequence == MAX_HOW_TO_SEQUENCE)
            self.buttonNextImage.alpha = 0.5;
    }
}

- (void)updatePlayInfoText {
    self.textViewPlayInfo.text = [Contents sequenceText:currentSequence];
    
    [textViewHowToPlay flashScrollIndicators];
    [self.textViewPlayInfo flashScrollIndicators];
}

- (void)preparePlay
{
    currentSequence = 0;
    arraySequence = @[@"0",@"15",@"27",@"35",@"40",@"44",@"51",@"59"];
    [arraySequence retain];
    /*
    NSMutableArray *imageArray = [NSMutableArray array];
    for (int i=0; i<68; i++) {
        NSString *imageFileName = nil;
        if (i<10) {
            imageFileName = [NSString stringWithFormat:@"kid0%d.jpg",i];
        } else {
            imageFileName = [NSString stringWithFormat:@"kid%d.jpg",i];
        }
        [imageArray addObject: [UIImage imageNamed:imageFileName] ];
    }
     */
    [self imagePlay];
    [self updatePlayInfoText];
    [Functions audioPlayerWithRetainObject:self
                                   playURL:[Contents sequenceVoiceUrl:currentSequence]
                                    volume:1
                             numberOfLoops:0];
    [self setupDisable];
}

- (void)imagePlay {
    [NSObject cancelPreviousPerformRequestsWithTarget:self selector:@selector(completeAnimationImage) object:nil];
    [self.imageViewPlay stopAnimating];
    if(currentSequence == 0) {
        [self playImageFrom:[arraySequence objectAtIndex:currentSequence]
                         to:[arraySequence objectAtIndex:currentSequence]];
    } else {
        [self playImageFrom:[arraySequence objectAtIndex:currentSequence-1]
                         to:[arraySequence objectAtIndex:currentSequence]];
    }
}

- (void)imageAllPlay {
    [NSObject cancelPreviousPerformRequestsWithTarget:self selector:@selector(completeAnimationImage) object:nil];
    [self.imageViewPlay stopAnimating];
    [self playImageFrom:[arraySequence objectAtIndex:0]
                     to:[arraySequence lastObject]];
}

- (IBAction)clickPrev:(id)sender
{
    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        currentSequence--;
        if(currentSequence < 0) {
            currentSequence = 0;
        }
        
        [self imagePlay];
        
        [self updatePlayInfoText];
        [Functions audioPlayerWithRetainObject:self
                                       playURL:[Contents sequenceVoiceUrl:currentSequence]
                                        volume:1
                                 numberOfLoops:0];
        [self setupDisable];
    }];
}
- (IBAction)clickPlay:(id)sender
{
    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        currentSequence = 0;
        [self imageAllPlay];
        self.textViewPlayInfo.text = @"";
        [self setupDisable];
    }];
}
- (IBAction)clickNext:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        currentSequence++;
        if (currentSequence>MAX_HOW_TO_SEQUENCE) {
            currentSequence = MAX_HOW_TO_SEQUENCE;
            
        }
        
        [self imagePlay];
        [self updatePlayInfoText];
        [Functions audioPlayerWithRetainObject:self
                                       playURL:[Contents sequenceVoiceUrl:currentSequence]
                                        volume:1
                                 numberOfLoops:0];
        [self setupDisable];
    }];
}

- (void)completeAnimationImage {
    [self.imageViewPlay stopAnimating];
    self.imageViewPlay.image = [self.imageViewPlay.animationImages lastObject];
    [self setupDisable];
}


- (void)playImageFrom:(NSString *)fromNumber to:(NSString *)toNumber
{
    [self setupDisable];
    [self.imageViewPlay stopAnimating];
    NSMutableArray *imageArray = [NSMutableArray array];
    
    int startIndex = [fromNumber intValue];
    int endIndex = [toNumber intValue];
    if (endIndex-startIndex>0)
    {
        for (int i=startIndex; i<=endIndex; i++)
        {
            NSString *imageFileName = nil;
            if (i<10) {
                imageFileName = [NSString stringWithFormat:@"kid0%d.jpg",i];
            } else {
                imageFileName = [NSString stringWithFormat:@"kid%d.jpg",i];
            }
            [imageArray addObject: [UIImage imageNamed:imageFileName] ];
        }
    }
    else
    {
        for (int i=startIndex; i>=endIndex; i--)
        {
            NSString *imageFileName = nil;
            if (i<10) {
                imageFileName = [NSString stringWithFormat:@"kid0%d.jpg",i];
            } else {
                imageFileName = [NSString stringWithFormat:@"kid%d.jpg",i];
            }
            [imageArray addObject: [UIImage imageNamed:imageFileName] ];
        }
    }
    
    self.imageViewPlay.animationImages = imageArray;
    self.imageViewPlay.animationRepeatCount = 1;
    self.imageViewPlay.animationDuration = [imageArray count]*0.2;
    
    [self.imageViewPlay startAnimating];
    
    [self performSelector:@selector(completeAnimationImage) withObject:nil afterDelay:self.imageViewPlay.animationDuration];
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
