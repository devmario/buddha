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

@synthesize buttonVoiceMan1;
@synthesize buttonVoiceGirl1;
@synthesize buttonVoiceMan2;
@synthesize buttonVoiceGirl2;

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
    
    self.buttonVoiceMan1=nil;
    self.buttonVoiceGirl1=nil;
    self.buttonVoiceMan2=nil;
    self.buttonVoiceGirl2=nil;
    
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
    
    
    [voiceButton release];
    
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
        SET(VALUE_VOICE_TYPE_MAN1, KEY_VOICE_TYPE);
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

- (void)clickBT:(UIButton*)bt {
    id key = [[voiceButton allKeysForObject:bt] firstObject];
    NSLog(@"click %@", key);
    
    //setup
    SET(key, KEY_VOICE_TYPE);
    
    //update
    
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [bt setTransform:CGAffineTransformScale([bt transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [bt setTransform:CGAffineTransformMakeScale(1, 1)];
    }];
    
}


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.view.frame = [[UIScreen mainScreen] bounds];
        bg.frame = [[UIScreen mainScreen] bounds];
        bg.contentMode = UIViewContentModeScaleAspectFill;
        bg3.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height * 0.5);
        self.ab.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height * 0.5);
        self.ab.backgroundColor = [UIColor clearColor];
        self.cell1.layer.cornerRadius = 5;
        self.cell2.layer.cornerRadius = 5;
        self.cell3.layer.cornerRadius = 5;
        self.cell4.layer.cornerRadius = 5;
        self.cell5.layer.cornerRadius = 5;
        // Custom initialization
        
    }
    return self;
}


-(BOOL)prefersStatusBarHidden
{
    return YES;
}

- (void)backClick:(id)sender
{
    [Functions audioPlayerWithRetainObject:self playURL:URL_SOUND_CLICK volume:0.3 numberOfLoops:0];
    
    [UIView animateWithDuration:0.1 delay:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
        [(UIButton *)sender setTransform:CGAffineTransformScale([(UIButton *)sender transform], 1.1, 1.1)];
    } completion:^(BOOL finished) {
        [(UIButton *)sender setTransform:CGAffineTransformMakeScale(1, 1)];
        
        [self.navigationController popViewControllerAnimated:YES];
    }];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [self customNavigationBarWithTitle:@"설정" backButtonSelector:@selector(backClick:)];
    [self displaySettingValue];
    
    
    buttonBirdBGM.contentMode = UIViewContentModeScaleAspectFit;
    buttonBirdBGM.imageEdgeInsets = UIEdgeInsetsMake(10, 10, 10, 10);
}

- (void)displaySettingValue
{
    self.labelSpeed.text = [NSString stringWithFormat:@"%d", 6 - [GET(KEY_PLAY_SPEED) intValue]];
    
    if ([GET(KEY_PLAY_OPTION) isEqualToString:VALUE_PLAY_OPTION_CONTINUE]) {
        [self clickPlayOption:self.buttonPlayContinue];
    } else {
        [self clickPlayOption:self.buttonPlayRestart];
    }
    
    if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_MAN1]) {
        [self clickVoiceType:self.buttonVoiceMan1];
    } else if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_GIRL1]) {
        [self clickVoiceType:self.buttonVoiceGirl1];
    } if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_MAN2]) {
        [self clickVoiceType:self.buttonVoiceMan2];
    } else if ([GET(KEY_VOICE_TYPE) isEqualToString:VALUE_VOICE_TYPE_GIRL2]) {
        [self clickVoiceType:self.buttonVoiceGirl2];
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

        int delaySecond = [GET(KEY_PLAY_SPEED) intValue];
        
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
        
        SET(STRING_INT(delaySecond), KEY_PLAY_SPEED);
        self.labelSpeed.text = [NSString stringWithFormat:@"%d", (6 - delaySecond)];
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

        if (sender==self.buttonVoiceMan1)
        {
            [self.buttonVoiceMan1 setSelected:YES];
            [self.buttonVoiceGirl1 setSelected:NO];
            [self.buttonVoiceMan2 setSelected:NO];
            [self.buttonVoiceGirl2 setSelected:NO];
            SET(VALUE_VOICE_TYPE_MAN1, KEY_VOICE_TYPE);
        }
        else if (sender==self.buttonVoiceMan2)
        {
            [self.buttonVoiceMan1 setSelected:NO];
            [self.buttonVoiceGirl1 setSelected:NO];
            [self.buttonVoiceMan2 setSelected:YES];
            [self.buttonVoiceGirl2 setSelected:NO];
            SET(VALUE_VOICE_TYPE_MAN2, KEY_VOICE_TYPE);
        }else if (sender==self.buttonVoiceGirl1)
        {
            [self.buttonVoiceMan1 setSelected:NO];
            [self.buttonVoiceGirl1 setSelected:YES];
            [self.buttonVoiceMan2 setSelected:NO];
            [self.buttonVoiceGirl2 setSelected:NO];
            SET(VALUE_VOICE_TYPE_GIRL1, KEY_VOICE_TYPE);
        }else if (sender==self.buttonVoiceGirl2)
        {
            [self.buttonVoiceMan1 setSelected:NO];
            [self.buttonVoiceGirl1 setSelected:NO];
            [self.buttonVoiceMan2 setSelected:NO];
            [self.buttonVoiceGirl2 setSelected:YES];
            SET(VALUE_VOICE_TYPE_GIRL2, KEY_VOICE_TYPE);
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
 
        
        if(sender!=self.buttonMusicBGM) {
            [self setSelectedWithBGMButton:sender];
        }
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
            
            [Functions presentMediaPickerControllerTo:self title:@"" allowsPickingMultipleItems:NO delegate:^(MPMediaItemCollection *mediaItemCollection) {
                
                [self.buttonBirdBGM setSelected:NO];
                [self.buttonBugBGM setSelected:NO];
                [self.buttonWaterBGM setSelected:NO];
                [self.buttonMusicBGM setSelected:YES];
                
                SET(VALUE_BGM_TYPE_MUSIC, KEY_BGM_TYPE);
                MPMediaItem *item = [mediaItemCollection.items lastObject];
                NSURL *url = [item valueForProperty:MPMediaItemPropertyAssetURL];
                NSString *urlString = [NSString stringWithFormat:@"%@",url];
                SET(urlString, KEY_URL_BGM_TYPE_MUSIC);
                
                [Contents playBGMWithType:GET(KEY_BGM_TYPE)];
            }];
            return;
        }
        
        if(sender!=self.buttonMusicBGM) {
            [Contents playBGMWithType:GET(KEY_BGM_TYPE)];
        }
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
        
        [Contents setVolumeBGMvolume:1*(BGMVolume/VALUE_BGM_VOLUME_MAX)];
        
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
                [Functions recordRemoveAll];
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
