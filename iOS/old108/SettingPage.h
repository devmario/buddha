//
//  SettingPage.h
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingPage : UIViewController {
    NSMutableDictionary* voiceButton;
}


+ (void)setInitialValue;


@property (nonatomic, retain) IBOutlet UIButton     *buttonSpeedUp;
@property (nonatomic, retain) IBOutlet UIButton     *buttonSpeedDown;
@property (nonatomic, retain) IBOutlet UILabel      *labelSpeed;
- (IBAction)clickPlaySpeed:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton     *buttonPlayContinue;
@property (nonatomic, retain) IBOutlet UIButton     *buttonPlayRestart;
- (IBAction)clickPlayOption:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton     *buttonVoiceMan;
@property (nonatomic, retain) IBOutlet UIButton     *buttonVoiceGirl;
@property (nonatomic, retain) IBOutlet UIButton     *buttonVoiceDubbing;
- (IBAction)clickVoiceType:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton     *buttonVoiceVolumeUp;
@property (nonatomic, retain) IBOutlet UIButton     *buttonVoiceVolumeDown;
@property (nonatomic, retain) IBOutlet UILabel      *labelVoiceVolume;
- (IBAction)clickVoiceVolume:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton     *buttonBirdBGM;
@property (nonatomic, retain) IBOutlet UIButton     *buttonBugBGM;
@property (nonatomic, retain) IBOutlet UIButton     *buttonWaterBGM;
@property (nonatomic, retain) IBOutlet UIButton     *buttonMusicBGM;
- (IBAction)clickBGMType:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton     *buttonBGMVolumeUp;
@property (nonatomic, retain) IBOutlet UIButton     *buttonBGMVolumeDown;
@property (nonatomic, retain) IBOutlet UILabel      *labelBGMVolume;
- (IBAction)clickBGMVolume:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton     *buttonDeleteRecord;
- (IBAction)clickDeleteRecord:(id)sender;

@property (nonatomic, retain) IBOutlet UIImageView     *bg;
@property (nonatomic, retain) IBOutlet UIImageView     *bg2;
@property (nonatomic, retain) IBOutlet UIView     *bg3;
@property (nonatomic, retain) IBOutlet UIView     *ab;
@property (nonatomic, retain) IBOutlet UIView     *cell1;
@property (nonatomic, retain) IBOutlet UIView     *cell2;
@property (nonatomic, retain) IBOutlet UIView     *cell3;
@property (nonatomic, retain) IBOutlet UIView     *cell4;
@property (nonatomic, retain) IBOutlet UIView     *cell5;
@property (nonatomic, retain) IBOutlet UIView     *cell6;


@end
