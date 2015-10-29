//
//  RecordPage.h
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 1..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "TableViewDelegate.h"

@interface RecordPage : UIViewController
{
    TableViewDelegate *table;
}

@property (nonatomic, retain) IBOutlet UIImageView *bg;

@end
