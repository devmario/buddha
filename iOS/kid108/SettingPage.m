//
//  SettingPage.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "SettingPage.h"
#import "Contents.h"

@interface SettingPage ()
@end

@implementation SettingPage

@synthesize buttonSpeedUp;
@synthesize buttonSpeedDown;
@synthesize labelSpeed;

@synthesize buttonPlayContinue;
@synthesize buttonPlayRestart;

@synthesize buttonVoiceMan;
@synthesize buttonVoiceGirl;
@synthesize buttonVoiceDubbing;

@synthesize buttonVoiceVolumeUp;
@synthesize buttonVoiceVolumeDown;
@synthesize labelVoiceVolume;

@synthesize buttonBirdBGM;
@synthesize buttonBugBGM;
@synthesize buttonWaterBGM;
@synthesize buttonMusicBGM;

@synthesize buttonBGMVolumeUp;
@synthesize buttonBGMVolumeDown;
@synthesize labelBGMVolume;

@synthesize buttonDeleteRecord;
@synthesize bg;
@synthesize bg2;
@synthesize bg3;

- (void)dealloc
{
    self.buttonSpeedUp=nil;
    self.buttonSpeedDown=nil;
    self.labelSpeed=nil;
    
    self.buttonPlayContinue=nil;
    self.buttonPlayRestart=nil;
    
    self.buttonVoiceMan=nil;
    self.buttonVoiceGirl=nil;
    self.buttonVoiceDubbing=nil;
    
    self.buttonVoiceVolumeUp=nil;
    self.buttonVoiceVolumeDown=nil;
    self.labelVoiceVolume=nil;
    
    self.buttonBirdBGM=nil;
    self.buttonBugBGM=nil;
    self.buttonWaterBGM=nil;
    self.buttonMusicBGM=nil;
    
    self.buttonBGMVolumeUp=nil;
    self.buttonBGMVolumeDown=nil;
    self.labelBGMVolume=nil;
    
    self.buttonDeleteRecord=nil;
    
    [super dealloc];
}


+ (void)setInitialValue
{
    if (GET(KEY_PLAY_SPEED)==nil) {
        SET(@"5", KEY_PLAY_SPEED);
    }
    if (GET(KEY_PLAY_OPTION)==nil) {
        SET(VALUE_PLAY_OPTION_CONTINUE, KEY_PLAY_OPTION);
    }
    if (GET(KEY_VOICE_TYPE)==nil) {
        SET(VALUE_VOICE_TYPE_MAN, KEY_VOICE_TYPE);
    }
    if (GET(KEY_VOICE_VOLUME)==nil) {
        SET(@"5", KEY_VOICE_VOLUME);
    }
    if (GET(KEY_BGM_TYPE)==nil) {
        SET(VALUE_BGM_TYPE_BIRD, KEY_BGM_TYPE);
    }
    if (GET(KEY_BGM_VOLUME)==nil) {
        SET(@"5", KEY_BGM_VOLUME);
    }
}


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.view.frame = [[UIScreen mainScreen] bounds];
        bg.frame = [[UIScreen mainScreen] bounds];
        bg.contentMode = UIViewContentModeScaleAspectFill;
        bg3.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height * 0.5);
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
    }];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [self customNavigationBarWithTitle:@"설정" backButtonSelector:@selector(backClick:)];
    [self displaySettingValue];
}

- (void)displaySettingValue
{
    self.labelSpeed.text = GET(KEY_PLAY_SPEED);
    
    if ([GET(KEY_PLAY_OPTION) isEqualToString:VALUE_PLAY_OPTION_CONTINUE]) {
        [self clickPlayOption:self.buttonPlayContinue];
    } else {
        [self clickPlayOption:self.buttonPlayRestart];
    }
    
    if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_MAN]) {
        [self clickVoiceType:self.buttonVoiceMan];
    } else if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_GIRL]) {
        [self clickVoiceType:self.buttonVoiceGirl];
    } else if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_DUBBING]){
        [self clickVoiceType:self.buttonVoiceDubbing];
    }
    
    self.labelVoiceVolume.text = GET(KEY_VOICE_VOLUME);
    
    if ([GET(KEY_BGM_TYPE) isEqualToString:VALUE_BGM_TYPE_BIRD]) {
        [self setSelectedWithBGMButton:self.buttonBirdBGM];
    } else if ([GET(KEY_BGM_TYPE) isEqualToString:VALUE_BGM_TYPE_BUG]) {
        [self setSelectedWithBGMButton:self.buttonBugBGM];
    } else if ([GET(KEY_BGM_TYPE) isEqualToString:VALUE_BGM_TYPE_WATER]){
        [self setSelectedWithBGMButton:self.buttonWaterBGM];
    } else if ([GET(KEY_BGM_TYPE) isEqualToString:VALUE_BGM_TYPE_MUSIC]){
        [self setSelectedWithBGMButton:self.buttonMusicBGM];
    }
    
    self.labelBGMVolume.text = GET(KEY_BGM_VOLUME);
}


- (IBAction)clickPlaySpeed:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        int delaySecond = [self.labelSpeed.text intValue];
        
        if (sender==self.buttonSpeedUp) {
            delaySecond--;
        } else {
            delaySecond++;
        }
        
        if (delaySecond>5) {
            delaySecond = 5;
        }
        if (delaySecond<=1) {
            delaySecond = 1;
        }
        
        self.labelSpeed.text = STRING_INT(delaySecond);
        SET(self.labelSpeed.text, KEY_PLAY_SPEED);
    }];
}

- (IBAction)clickPlayOption:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        if (sender==self.buttonPlayContinue)
        {
            [self.buttonPlayContinue setSelected:YES];
            [self.buttonPlayRestart setSelected:NO];
            SET(VALUE_PLAY_OPTION_CONTINUE, KEY_PLAY_OPTION);
        }
        else
        {
            [self.buttonPlayContinue setSelected:NO];
            [self.buttonPlayRestart setSelected:YES];
            SET(VALUE_PLAY_OPTION_RESTART, KEY_PLAY_OPTION);
        }
    }];
}

- (IBAction)clickVoiceType:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        if (sender==self.buttonVoiceMan)
        {
            [self.buttonVoiceMan setSelected:YES];
            [self.buttonVoiceGirl setSelected:NO];
            [self.buttonVoiceDubbing setSelected:NO];
            SET(VALUE_VOICE_TYPE_MAN, KEY_VOICE_TYPE);
        }
        else if (sender==self.buttonVoiceGirl)
        {
            [self.buttonVoiceMan setSelected:NO];
            [self.buttonVoiceGirl setSelected:YES];
            [self.buttonVoiceDubbing setSelected:NO];
            SET(VALUE_VOICE_TYPE_GIRL, KEY_VOICE_TYPE);
        }
        else if (sender==self.buttonVoiceDubbing)
        {
            [self.buttonVoiceMan setSelected:NO];
            [self.buttonVoiceGirl setSelected:NO];
            [self.buttonVoiceDubbing setSelected:YES];
            SET(VALUE_VOICE_TYPE_DUBBING, KEY_VOICE_TYPE);
        }
    }];
}

- (IBAction)clickVoiceVolume:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];

        int voiceVolume = [self.labelVoiceVolume.text intValue];
    
        if (sender==self.buttonVoiceVolumeDown) {
            voiceVolume--;
        } else {
            voiceVolume++;
        }
        
        if (voiceVolume>VALUE_VOICE_VOLUME_MAX) {
            voiceVolume = VALUE_VOICE_VOLUME_MAX;
        }
        if (voiceVolume<=0) {
            voiceVolume = 0;
        }
        
        //[[Functions audioPlayerWithRetainObject:self.navigationController] setVolume:1*(voiceVolume/5.0)];
        self.labelVoiceVolume.text = STRING_INT(voiceVolume);
        SET(self.labelVoiceVolume.text, KEY_VOICE_VOLUME);
    }];
}

- (void)setSelectedWithBGMButton:(id)sender
{
    if (sender==self.buttonBirdBGM)
    {
        [self.buttonBirdBGM setSelected:YES];
        [self.buttonBugBGM setSelected:NO];
        [self.buttonWaterBGM setSelected:NO];
        [self.buttonMusicBGM setSelected:NO];
    }
    else if (sender==self.buttonBugBGM)
    {
        [self.buttonBirdBGM setSelected:NO];
        [self.buttonBugBGM setSelected:YES];
        [self.buttonWaterBGM setSelected:NO];
        [self.buttonMusicBGM setSelected:NO];
    }
    else if (sender==self.buttonWaterBGM)
    {
        [self.buttonBirdBGM setSelected:NO];
        [self.buttonBugBGM setSelected:NO];
        [self.buttonWaterBGM setSelected:YES];
        [self.buttonMusicBGM setSelected:NO];
    }
    else if (sender==self.buttonMusicBGM)
    {
        [self.buttonBirdBGM setSelected:NO];
        [self.buttonBugBGM setSelected:NO];
        [self.buttonWaterBGM setSelected:NO];
        [self.buttonMusicBGM setSelected:YES];
    }
}
- (IBAction)clickBGMType:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
 
        
        [self setSelectedWithBGMButton:sender];
        if (sender==self.buttonBirdBGM)
        {
            SET(VALUE_BGM_TYPE_BIRD, KEY_BGM_TYPE);
        }
        else if (sender==self.buttonBugBGM)
        {
            SET(VALUE_BGM_TYPE_BUG, KEY_BGM_TYPE);
        }
        else if (sender==self.buttonWaterBGM)
        {
            SET(VALUE_BGM_TYPE_WATER, KEY_BGM_TYPE);
        }
        else if (sender==self.buttonMusicBGM)
        {
            SET(VALUE_BGM_TYPE_MUSIC, KEY_BGM_TYPE);
            
            [Functions presentMediaPickerControllerTo:self title:@"" allowsPickingMultipleItems:NO delegate:^(MPMediaItemCollection *mediaItemCollection) {
                MPMediaItem *item = [mediaItemCollection.items lastObject];
                NSURL *url = [item valueForProperty:MPMediaItemPropertyAssetURL];
                NSString *urlString = [NSString stringWithFormat:@"%@",url];
                SET(urlString, KEY_URL_BGM_TYPE_MUSIC);
                
                [Contents playBGMWithType:GET(KEY_BGM_TYPE)];
            }];
            return;
        }
        
        [Contents playBGMWithType:GET(KEY_BGM_TYPE)];
    }];
}

- (IBAction)clickBGMVolume:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        
        int BGMVolume = [self.labelBGMVolume.text intValue];
        
        if (sender==self.buttonBGMVolumeDown) {
            BGMVolume--;
        } else {
            BGMVolume++;
        }
        
        if (BGMVolume>VALUE_BGM_VOLUME_MAX) {
            BGMVolume = VALUE_BGM_VOLUME_MAX;
        }
        if (BGMVolume<=0) {
            BGMVolume = 0;
        }
        
        [[Functions audioPlayerWithRetainObject:KEY_BGM_TYPE] setVolume:1*(BGMVolume/VALUE_BGM_VOLUME_MAX)];
        self.labelBGMVolume.text = STRING_INT(BGMVolume);
        SET(self.labelBGMVolume.text, KEY_BGM_VOLUME);
    }];
}

- (IBAction)clickDeleteRecord:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];

    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [Functions alertTitle:@"삭제하시겠습니까?" message:nil buttons:@[@"확인",@"취소"] delegate:^(NSInteger buttonIndex) {
            if (buttonIndex==0)
            {
                REMOVE(KEY_RECORD_DATA);
            }
        }];
    }];
}




- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    if (toInterfaceOrientation==UIInterfaceOrientationLandscapeLeft) {
        return YES;
    }
    return NO;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
