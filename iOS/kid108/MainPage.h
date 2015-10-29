//
//  MainPage.h
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainPage : UIViewController {
    IBOutlet UIImageView *img;
    IBOutlet UIButton *bt1;
    IBOutlet UIButton *bt2;
    IBOutlet UIButton *bt3;
    IBOutlet UIButton *bt4;
}

+ (MainPage*)getMain;
- (IBAction)clickHelpButton:(id)sender;
- (IBAction)clickSettingButton:(id)sender;
- (IBAction)clickRecordButton:(id)sender;
- (IBAction)clickPalyButton:(id)sender;

@end
