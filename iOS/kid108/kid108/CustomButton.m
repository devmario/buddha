//
//  CustomButton.m
//  kid108
//
//  Created by Haetaek Lee on 12. 10. 24..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "CustomButton.h"

@implementation CustomButton

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
    [self.titleLabel setFont: FONT_GLOBAL(21) ];
}

@end
