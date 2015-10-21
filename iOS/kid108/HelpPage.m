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

@synthesize viewAppInfo, viewHowToPlay, viewUsage, buttonAppInfo, buttonHowToPlay, buttonUsage, scrollViewUsage, pageControlUsage;
@synthesize textViewAppInfo, textViewHowToPlay;

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
    self.imageViewPlay.image = [UIImage imageNamed:@"kid00.jpg"];
    self.textViewPlayInfo.text = [Contents sequenceText:currentSequence];
    [Functions audioPlayerWithRetainObject:self
                                   playURL:[Contents sequenceVoiceUrl:currentSequence]
                                    volume:1
                             numberOfLoops:0];
}

- (IBAction)clickPrev:(id)sender
{
    if ([self.imageViewPlay isAnimating]==YES)
        return;

    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        if (currentSequence<=0)
            return;
        
        [self playImageFrom:[arraySequence objectAtIndex:currentSequence]
                         to:[arraySequence objectAtIndex:currentSequence-1]];
        currentSequence--;
        self.textViewPlayInfo.text = [Contents sequenceText:currentSequence];
        [Functions audioPlayerWithRetainObject:self
                                       playURL:[Contents sequenceVoiceUrl:currentSequence]
                                        volume:1
                                 numberOfLoops:0];
    }];
}
- (IBAction)clickPlay:(id)sender
{
    if ([self.imageViewPlay isAnimating]==YES)
        return;

    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        currentSequence = 0;
        [self playImageFrom:[arraySequence objectAtIndex:0]
                         to:[arraySequence lastObject]];
        self.textViewPlayInfo.text = nil;
    }];
}
- (IBAction)clickNext:(id)sender
{
    if ([self.imageViewPlay isAnimating]==YES)
        return;
    
    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        if (currentSequence>6)
            return;
        
        [self playImageFrom:[arraySequence objectAtIndex:currentSequence]
                         to:[arraySequence objectAtIndex:currentSequence+1]];
        currentSequence++;
        self.textViewPlayInfo.text = [Contents sequenceText:currentSequence];
        [Functions audioPlayerWithRetainObject:self
                                       playURL:[Contents sequenceVoiceUrl:currentSequence]
                                        volume:1
                                 numberOfLoops:0];
    }];
}


- (void)playImageFrom:(NSString *)fromNumber to:(NSString *)toNumber
{
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
    
    id block = [[^{
        [self.imageViewPlay stopAnimating];
        self.imageViewPlay.image = [imageArray lastObject];
    } copy] autorelease];
    [block performSelector:@selector(invoke) withObject:nil afterDelay:self.imageViewPlay.animationDuration];
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
