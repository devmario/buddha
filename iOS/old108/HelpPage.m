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
@synthesize textViewAppInfo, textViewHowToPlay,help1,help2,help3,help4,help5;

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

- (void)helpIMGshadowSetup:(UIImageView*)imageView {
    imageView.layer.shadowColor = [UIColor darkGrayColor].CGColor;
    imageView.layer.shadowOffset = CGSizeMake(0, 0);
    imageView.layer.shadowOpacity = 1;
    imageView.layer.shadowRadius = 10.0;
    imageView.clipsToBounds = NO;
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
        bg.frame = [[UIScreen mainScreen] bounds];
        
        help1.frame = [[UIScreen mainScreen] bounds];
        help2.frame = [[UIScreen mainScreen] bounds];
        help3.frame = [[UIScreen mainScreen] bounds];
        
        viewHowToPlay.frame = CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width - 40, ([[UIScreen mainScreen] bounds].size.height - menu.frame.size.height) - 40);
        viewHowToPlay.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, [[UIScreen mainScreen] bounds].size.height * 0.5 + menu.frame.size.height * 0.5);
        viewUsage.frame = CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width - 40, ([[UIScreen mainScreen] bounds].size.height - menu.frame.size.height) - 40);
        viewUsage.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, [[UIScreen mainScreen] bounds].size.height * 0.5 + menu.frame.size.height * 0.5);
        self.usageNextButton.center = CGPointMake(viewUsage.frame.size.width - 10 - self.usageNextButton.frame.size.width * 0.5, viewUsage.frame.size.height * 0.5);
        self.usagePrevButton.center = CGPointMake(10 + self.usagePrevButton.frame.size.width * 0.5, viewUsage.frame.size.height * 0.5);
        self.usageNextButton.layer.cornerRadius = 5;
        self.usageNextButton.layer.backgroundColor = [UIColor colorWithWhite:0.5 alpha:1.0].CGColor;
        self.usagePrevButton.layer.cornerRadius = 5;
        self.usagePrevButton.layer.backgroundColor = [UIColor colorWithWhite:0.5 alpha:1.0].CGColor;
        
        viewUsage.layer.backgroundColor = [UIColor colorWithWhite:0.9 alpha:0.7].CGColor;
        viewUsage.layer.cornerRadius = 5;
        viewHowToPlay.layer.backgroundColor = [UIColor colorWithWhite:0.9 alpha:0.7].CGColor;
        viewHowToPlay.layer.cornerRadius = 5;
        
        float s = viewHowToPlay.frame.size.height - 50 - howbt1.frame.size.height;
        if(s > 225)
            s = 225;
        imageViewPlay.frame = CGRectMake(0, 0, s, s);
        imageViewPlay.center = CGPointMake(imageViewPlay.frame.size.width * 0.5 + 20, (viewHowToPlay.frame.size.height - 50 - howbt1.frame.size.height) * 0.5 + 20);
        imageViewPlay.contentMode = UIViewContentModeScaleAspectFill;
        imageViewPlay.clipsToBounds = YES;
        imageViewPlay.layer.cornerRadius = 5;
        
        textViewHowToPlay.frame = CGRectMake(0, 0, viewHowToPlay.frame.size.width - imageViewPlay.frame.size.width - 60, viewHowToPlay.frame.size.height - 40);
        textViewHowToPlay.center = CGPointMake(imageViewPlay.frame.size.width + 40 + textViewHowToPlay.frame.size.width * 0.5, viewHowToPlay.frame.size.height * 0.5);
        
        howbt1.layer.cornerRadius = howbt1.frame.size.height / 2.0;
        howbt2.layer.cornerRadius = howbt2.frame.size.height / 2.0;
        howbt3.layer.cornerRadius = howbt3.frame.size.height / 2.0;
        howbt1.layer.backgroundColor = [UIColor colorWithWhite:0.4 alpha:1.0].CGColor;
        howbt2.layer.backgroundColor = [UIColor colorWithWhite:0.4 alpha:1.0].CGColor;
        howbt3.layer.backgroundColor = [UIColor colorWithWhite:0.4 alpha:1.0].CGColor;
        howbt1.clipsToBounds = YES;
        howbt2.clipsToBounds = YES;
        howbt3.clipsToBounds = YES;
        howbt1.center = CGPointMake(imageViewPlay.frame.origin.x + howbt1.frame.size.width * 0.5, imageViewPlay.frame.origin.y + imageViewPlay.frame.size.height + 10 + howbt1.frame.size.height * 0.5);
        howbt3.center = CGPointMake(imageViewPlay.frame.origin.x + imageViewPlay.frame.size.width - howbt3.frame.size.width * 0.5, howbt1.center.y);
        howbt2.center = CGPointMake(howbt1.center.x + (howbt3.center.x - howbt1.center.x) * 0.5, howbt1.center.y);
        
        help1.frame = CGRectMake(viewUsage.frame.size.width * 0 + 60, 20, viewUsage.frame.size.width - 120, viewUsage.frame.size.height - pageControlUsage.frame.size.height - 20);
        help2.frame = CGRectMake(viewUsage.frame.size.width * 1 + 60, 20, viewUsage.frame.size.width - 120, viewUsage.frame.size.height - pageControlUsage.frame.size.height - 20);
        help3.frame = CGRectMake(viewUsage.frame.size.width * 2 + 60, 20, viewUsage.frame.size.width - 120, viewUsage.frame.size.height - pageControlUsage.frame.size.height - 20);
        help4.frame = CGRectMake(viewUsage.frame.size.width * 3 + 60, 20, viewUsage.frame.size.width - 120, viewUsage.frame.size.height - pageControlUsage.frame.size.height - 20);
        help5.frame = CGRectMake(viewUsage.frame.size.width * 4 + 60, 20, viewUsage.frame.size.width - 120, viewUsage.frame.size.height - pageControlUsage.frame.size.height - 20);
        help1.contentMode = help2.contentMode = help3.contentMode = help4.contentMode = help5.contentMode = UIViewContentModeScaleAspectFit;
        
        [self helpIMGshadowSetup:help1];
        [self helpIMGshadowSetup:help2];
        [self helpIMGshadowSetup:help3];
        [self helpIMGshadowSetup:help4];
        [self helpIMGshadowSetup:help5];
        
        scrollViewUsage.frame = viewUsage.frame;
        scrollViewUsage.center = CGPointMake(viewUsage.frame.size.width * 0.5, viewUsage.frame.size.height * 0.5);
        scrollViewUsage.contentSize = CGSizeMake(viewUsage.frame.size.width * 5, viewUsage.frame.size.height);
        
        bg.contentMode = UIViewContentModeScaleAspectFill;
        pageControlUsage.pageIndicatorTintColor = [UIColor whiteColor];
        pageControlUsage.currentPageIndicatorTintColor = [UIColor blackColor];
        pageControlUsage.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, scrollViewUsage.frame.size.height - pageControlUsage.frame.size.height * 0.5);
        
        menu.frame = CGRectMake([[UIScreen mainScreen] bounds].size.width - menu.frame.size.width, 0, menu.frame.size.width, menu.frame.size.height);
        [menu setBackgroundColor:[UIColor clearColor]];
        
        [self clickAppInfo:nil];
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
        [[Functions audioPlayerWithRetainObject:self] stop];
    }];
}

- (IBAction)clickUsagePrev:(id)sender {
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    
    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        //
        if(pageControlUsage.currentPage > 0) {
            [scrollViewUsage scrollRectToVisible:CGRectMake(scrollViewUsage.frame.size.width * (pageControlUsage.currentPage - 1), 0, scrollViewUsage.frame.size.width, scrollViewUsage.frame.size.height) animated:YES];
        }
    }];
}

- (void)updateUsageButtonStatus  {
    [self.usagePrevButton setEnabled:pageControlUsage.currentPage > 0];
    [self.usageNextButton setEnabled:pageControlUsage.currentPage < pageControlUsage.numberOfPages - 1];
    [self.usagePrevButton setAlpha:pageControlUsage.currentPage > 0 ? 1.0 : 0.5];
    [self.usageNextButton setAlpha:pageControlUsage.currentPage < pageControlUsage.numberOfPages - 1 ? 1.0 : 0.5];
}

- (IBAction)clickUsageNext:(id)sender; {
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    
    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        //
        if(pageControlUsage.currentPage < pageControlUsage.numberOfPages - 1) {
            [scrollViewUsage scrollRectToVisible:CGRectMake(scrollViewUsage.frame.size.width * (pageControlUsage.currentPage + 1), 0, scrollViewUsage.frame.size.width, scrollViewUsage.frame.size.height) animated:YES];
        }
    }];
}

- (void)viewDidLoad
{
    
    [super viewDidLoad];
    
    // Do any additional setup after loading the view from its nib.
    
    [self customNavigationBarWithTitle:@"도움말" backButtonSelector:@selector(backClick:)];

    
    
    
    
    
}
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    CGFloat pageWidth = scrollView.frame.size.width;
    self.pageControlUsage.currentPage = floor((scrollView.contentOffset.x - pageWidth/3) / pageWidth) + 1;
    [self updateUsageButtonStatus];
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
        
        textViewAppInfo.frame = CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width - 40, ([[UIScreen mainScreen] bounds].size.height - menu.frame.size.height) - 40);
        textViewAppInfo.center = CGPointMake([[UIScreen mainScreen] bounds].size.width * 0.5, [[UIScreen mainScreen] bounds].size.height * 0.5 + menu.frame.size.height * 0.5);
        
        [Functions audioPlayerWithRetainObject:self
                                       playURL:[Contents appInfoVoiceUrl]
                                        volume:1
                                 numberOfLoops:0];
        
        self.textViewAppInfo.layer.backgroundColor = [UIColor colorWithWhite:0.9 alpha:0.7].CGColor;
        self.textViewAppInfo.layer.cornerRadius = 5;
        
        UIFont *font = FONT_GLOBAL(16);
        NSDictionary *attrsDictionary = [NSDictionary dictionaryWithObject:font forKey:NSFontAttributeName];
        NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:[Contents info] attributes:attrsDictionary];
        NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
        paragraphStyle.lineSpacing = 20.0f;
        paragraphStyle.alignment = NSTextAlignmentCenter;
        paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
        [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [Contents info].length)];
        
        textViewAppInfo.attributedText = attributedString;
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
        pageControlUsage.currentPage = 0;
        [scrollViewUsage scrollRectToVisible:CGRectMake(0, 0, scrollViewUsage.frame.size.width, scrollViewUsage.frame.size.height) animated:NO];
        [scrollViewUsage setShowsHorizontalScrollIndicator:NO];
        
        [self.buttonAppInfo setSelected:NO];
        [self.buttonHowToPlay setSelected:NO];
        [self.buttonUsage setSelected:YES];
        
        [self.viewAppInfo setHidden:YES];
        [self.viewHowToPlay setHidden:YES];
        [self.viewUsage setHidden:NO];
        
        [self updateUsageButtonStatus];
    }];
}





// - - - - - - - - - - - - - - - - -
// how to play view
//
// sequence 0, 19, 29, 37, 41, 46, 55, 67

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
        if(currentSequence == [[Contents sequence] count] - 2)
            self.buttonNextImage.alpha = 0.5;
    }
}

- (void)updatePlayInfoText {
    NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:[Contents sequenceText:currentSequence]];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    paragraphStyle.lineSpacing = 20.0f;
    paragraphStyle.alignment = NSTextAlignmentLeft;
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    [attributedString addAttribute:NSFontAttributeName value:FONT_GLOBAL(14) range:NSMakeRange(0, [Contents sequenceText:currentSequence].length)];
    [attributedString addAttribute:NSForegroundColorAttributeName value:[UIColor colorWithWhite:0.4 alpha:1.0] range:NSMakeRange(0, [Contents sequenceText:currentSequence].length)];
    [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [Contents sequenceText:currentSequence].length)];
    
    self.textViewPlayInfo.attributedText = attributedString;
    
    self.textViewPlayInfo.layer.cornerRadius = 5;
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [textViewHowToPlay performSelector:@selector(flashScrollIndicators) withObject:nil afterDelay:0];
    });
}

- (void)preparePlay
{
    currentSequence = 0;
    arraySequence = [[Contents sequence] copy];
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
    [self playImageFrom:[arraySequence objectAtIndex:currentSequence]
                     to:[arraySequence objectAtIndex:currentSequence + 1]];
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
        
        if([self.textViewPlayInfo.text isEqualToString:@""]) {
            currentSequence = 0;
        } else {
            currentSequence++;
            if (currentSequence > [[Contents sequence] count] - 2) {
                currentSequence = [[Contents sequence] count] - 2;
            }
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
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [self performSelector:@selector(completeAnimationImage) withObject:nil afterDelay:self.imageViewPlay.animationDuration];
    });
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
