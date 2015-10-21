//
//  HelpPage.h
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelpPage : UIViewController <UIScrollViewDelegate>
{
    // how to play
    int currentSequence;
    NSArray *arraySequence;
}

@property (nonatomic, retain) IBOutlet UIButton *buttonAppInfo;
@property (nonatomic, retain) IBOutlet UIButton *buttonHowToPlay;
@property (nonatomic, retain) IBOutlet UIButton *buttonUsage;
- (IBAction)clickAppInfo:(id)sender;
- (IBAction)clickHowToPlay:(id)sender;
- (IBAction)clickUsage:(id)sender;

// - - - - - - - - - -
// 하위 뷰들
//
@property (nonatomic, retain) IBOutlet UIView           *viewAppInfo;
@property (nonatomic, retain) IBOutlet UIView           *menu;
@property (nonatomic, retain) IBOutlet UIScrollView     *scrollViewUsage;
@property (nonatomic, retain) IBOutlet UIImageView     *help1;
@property (nonatomic, retain) IBOutlet UIImageView     *help2;
@property (nonatomic, retain) IBOutlet UIImageView     *help3;
@property (nonatomic, retain) IBOutlet UIPageControl    *pageControlUsage;
//
@property (nonatomic, retain) IBOutlet UIView       *viewHowToPlay;
@property (nonatomic, retain) IBOutlet UIImageView  *imageViewPlay;
@property (nonatomic, retain) IBOutlet UILabel   *textViewPlayInfo;
@property (nonatomic, retain) IBOutlet UIButton     *buttonPrevImage;
@property (nonatomic, retain) IBOutlet UIButton     *buttonPlay;
@property (nonatomic, retain) IBOutlet UIButton     *buttonNextImage;
//
@property (nonatomic, retain) IBOutlet UILabel   *textViewHowToPlay;
@property (nonatomic, retain) IBOutlet UILabel   *textViewAppInfo;
@property (nonatomic, retain) IBOutlet UIImageView  *bg;
@property (nonatomic, retain) IBOutlet UIButton  *howbt1;
@property (nonatomic, retain) IBOutlet UIButton  *howbt2;
@property (nonatomic, retain) IBOutlet UIButton  *howbt3;

- (IBAction)clickPrev:(id)sender;
- (IBAction)clickPlay:(id)sender;
- (IBAction)clickNext:(id)sender;
//
@property (nonatomic, retain) IBOutlet UIView *viewUsage;


@end
