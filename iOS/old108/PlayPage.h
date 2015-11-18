//
//  PlayPage.h
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayPage : UIViewController
{
    int introDuration;
    int delayDuration;
    int playDuration;
    int countAtpause;
    int count;
    NSMutableDictionary* record_dict;
}

@property (nonatomic, retain) IBOutlet UIImageView  *bgView;
@property (nonatomic, retain) IBOutlet UIImageView  *bgViewForAnimation;
@property (nonatomic, retain) IBOutlet UIImageView  *viewClosePopupImage;
@property (nonatomic, retain) IBOutlet UIButton  *popupBt1;
@property (nonatomic, retain) IBOutlet UIButton  *popupBt2;
@property (nonatomic, retain) IBOutlet UIView   *popupInner;
//
@property (nonatomic, retain) IBOutlet UIView   *viewClosePopUp;
- (IBAction)clickClose:(id)sender;
- (IBAction)clickContinue:(id)sender;

//
@property (nonatomic, retain) IBOutlet UIView   *viewPlaying;
@property (nonatomic, retain) IBOutlet UILabel  *labelTitle;
@property (nonatomic, retain) IBOutlet UILabel  *labelSubtitle;

- (id)initWithRecord:(NSMutableDictionary*)record;
- (id)initWithNewPosition:(int)position;

@end
