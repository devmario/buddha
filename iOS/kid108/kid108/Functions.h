//
//  Functions.h
//  Qfeed
//
//  Created by MacBook on 11. 5. 21..
//  Copyright 2011 POSTECH. All rights reserved.
//

#import <Foundation/Foundation.h>
// block
#import <objc/runtime.h>
// AVAudioPlayer
#import <AVFoundation/AVFoundation.h>
// audioServices
#import <AudioToolbox/AudioToolbox.h>
// MPMediaPickerController
#import <MediaPlayer/MediaPlayer.h>
// MFMailComposeViewController
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

#import "Contents.h"


#define kAlertDelegate 999
typedef void (^alertBlock_t)(NSInteger buttonIndex);
#define kLoadingView -44

typedef void (^MediaPickerBlock)(MPMediaItemCollection *mediaItemCollection);


#define STRING_INT(integer) [NSString stringWithFormat:@"%d",integer]
#define GET(key)            [[NSUserDefaults standardUserDefaults]objectForKey:key]
#define SET(value, key)     {[[NSUserDefaults standardUserDefaults]setObject:value forKey:key]; [[NSUserDefaults standardUserDefaults] synchronize];}
#define REMOVE(key)         {[[NSUserDefaults standardUserDefaults]removeObjectForKey:key]; [[NSUserDefaults standardUserDefaults] synchronize];}
#define RGB(r,g,b)          [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]

#define IMAGE(name)                                                                                                                \
    [UIImage imageWithContentsOfFile: [[NSBundle mainBundle]pathForResource:name ofType:@"png"] ]
#define IMAGE_JPG(name)                                                                                                                \
[UIImage imageWithContentsOfFile: [[NSBundle mainBundle]pathForResource:name ofType:@"jpg"] ]
// - - - - - - - - - -
// font
//
#define FONT(fontSize)              [UIFont fontWithName:@"helvetica" size:fontSize]
#define BOLDFONT(fontSize)          [UIFont boldSystemFontOfSize:fontSize]
// - - - - - - - - - -
// custom font
#define FONT_GLOBAL(fontSize)    [UIFont fontWithName:[[Contents jsonData] objectForKey:@"font"] size:fontSize]
//
// - - - - - - - - - -

#define URL(path)           [NSString stringWithFormat:@"http://exight.co.kr/issues%@",path]
#define URL_DOMAIN          @"http://exight.co.kr/issues"
#define LOCAL_PATH(path)    [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0] stringByAppendingPathComponent:path]
//#define MEDIA_PATH(path) [NSString stringWithFormat:@"http://115.68.7.233%@",path]


#define kBackButton -998
#define kProgress -997



@interface Functions : NSObject <MPMediaPickerControllerDelegate>//<MFMailComposeViewControllerDelegate>


// alertView with delegate
+ (void)alertTitle:(NSString *)title message:(NSString *)message buttons:(NSArray *)buttons delegate:(alertBlock_t)delegate;
// alertView
+ (Functions *)returnObject;
+ (void)showMessageTitle:(NSString *)messageTitle message:(NSString *)message;
+ (void)showNetwordErrorMessage;
// detect
+ (BOOL)doesAlertViewExist;
+ (BOOL)doesAlertViewExistTitle:(NSString *)title;

+ (NSMutableArray*)recordGet;
+ (void)recordUpdate:(NSMutableDictionary*)element;
+ (int)recordCount;
+ (NSMutableDictionary*)recordNew;
+ (void)recordRemoveAll;

// use plist for save
+ (void)saveArrayToPlist:(NSMutableArray *)array forKey:(NSString *)key;
+ (NSMutableArray *)loadArrayFromPlistForKey:(NSString *)key;
+ (void)removeAllDataForKey:(NSString *)key;

+ (void)removeAll;


+ (NSString *)convertSecondToHHmmssFormat:(NSInteger)totalSecond;

+ (UIImage *)levelImageWithLevel:(NSString *)userLevel;

+ (NSString *)loadStringWithFileName:(NSString *)fileName;


// - - - - - - - - - - - - - - - - - - - -
//
// play by AVAudioPlayer
+ (AVAudioPlayer *)audioPlayerWithRetainObject:(id)retainObject;
+ (void)audioPlayerWithRetainObject:(id)retainObject
                            playURL:(NSURL *)url
                             volume:(CGFloat)volume
                      numberOfLoops:(NSInteger)numberOfLoops;
// play by AudioServices
+ (void)playAudioServicesWithUrl:(NSURL *)url;

+ (AVPlayer *)avPlayerWithRetainObject:(id)retainObject;

// play by AVPlayer
+ (AVPlayer *)avPlayerWithRetainObject:(id)retainObject
                               playURL:(NSURL *)url
                               repeats:(BOOL)repeats;
//
// - - - - - - - - - - - - - - - - - - - -


+ (MPMediaPickerController *)presentMediaPickerControllerTo:(UIViewController *)superViewController
                                                      title:(NSString *)title
                                 allowsPickingMultipleItems:(BOOL)allowsPickingMultipleItems
                                                   delegate:(MediaPickerBlock)delegateBlock;



// loading
+ (void)startLoadingAnimationTo:(CGPoint)center with:(id)superView;
+ (void)stopLoadingAnimationTo:(id)superView;

//
+ (void)saveImageToPlist:(UIImage *)image forKey:(NSString *)key;
+ (UIImage *)loadImageFromPlistForKey:(NSString *)key;


+ (NSString *)dateStringWithTimeInterval:(int)timeIntervalSince1970;
+ (NSDate *)convertStringToDate:(NSString *)dateString;
+ (NSString *)convertTimeIntervalToString:(int)timeInterval;
+ (int)timeIntervalSince1970Of:(NSString *)dateString;
+ (void)sortArray:(NSMutableArray *)unsortedDatesArray;

+ (NSString *)uploadImage:(UIImage *)image withFileName:(NSString *)filename;
+ (NSString *)uploadImage:(UIImage *)image withFileName:(NSString *)filename toFolder:(NSString *)folderName;
//+ (NSString *)uploadImageWithMakeThumbnail:(UIImage *)image withFileName:(NSString *)filename;
+ (NSString *)uploadImageWithMakeThumbnail:(UIImage *)image withFileName:(NSString *)filename toFolder:(NSString *)folderName;

+ (NSString *)returnCurrentTimeString;

@end



@interface NSString (NSStringCategory)
- (NSDate *)dateWithDateFormat:(NSString *)dateFormat;
@end

@interface NSDate (NSDateCategory)
- (NSString *)stringWithDateFormat:(NSString *)dateFormat;
@end


@interface UIView (UIViewCategory)
- (UIViewController *)viewController;
- (void)setX:(CGFloat)originX;
- (void)setY:(CGFloat)originY;
- (void)setWidth:(CGFloat)sizeWidth;
- (void)setHeight:(CGFloat)sizeHeight;
@end

@implementation UIView (UIViewCategory)
- (UIViewController *)viewController;
{
    id nextResponder = [self nextResponder];
    if ([nextResponder isKindOfClass:[UIViewController class]]) {
        return nextResponder;
    } else {
        return nil;
    }
}
- (void)setX:(CGFloat)originX
{
    CGRect adjustRect = self.frame;
    adjustRect.origin.x = originX;
    self.frame = adjustRect;
}
- (void)setY:(CGFloat)originY;
{
    CGRect adjustRect = self.frame;
    adjustRect.origin.y = originY;
    self.frame = adjustRect;
}
- (void)setWidth:(CGFloat)sizeWidth;
{
    CGRect adjustRect = self.frame;
    adjustRect.size.width = sizeWidth;
    self.frame = adjustRect;
}
- (void)setHeight:(CGFloat)sizeHeight;
{
    CGRect adjustRect = self.frame;
    adjustRect.size.height = sizeHeight;
    self.frame = adjustRect;
}
@end



@interface UINavigationController (UINavigationControllerCategory)
- (UIViewController *)pushViewControllerClass:(NSString *)className;
@end

@implementation UINavigationController (UINavigationControllerCategory)
- (UIViewController *)pushViewControllerClass:(NSString *)className
{
    UIViewController *viewController = [[NSClassFromString(className) alloc]init];
    //    viewController.hidesBottomBarWhenPushed = YES;
    [self pushViewController:viewController animated:YES];    
    return [viewController autorelease];
}
@end



@interface UILabel (UILabelCategory)
- (UILabel *)copyWithFrame:(CGRect)rect;
@end

@implementation UILabel (UILabelCategory)
- (UILabel *)copyWithFrame:(CGRect)rect
{
    UILabel *original = self;
    
    UILabel *copyObject = [[UILabel alloc]initWithFrame:rect];
    copyObject.backgroundColor = original.backgroundColor;
    copyObject.font = original.font;
    copyObject.text = original.text;
    copyObject.textAlignment = original.textAlignment;
    copyObject.textColor = original.textColor;
    copyObject.shadowColor = original.shadowColor;
    copyObject.shadowOffset = original.shadowOffset;
    copyObject.lineBreakMode =  original.lineBreakMode;
    copyObject.numberOfLines = original.numberOfLines;
    copyObject.userInteractionEnabled = original.userInteractionEnabled;
    copyObject.highlightedTextColor = original.highlightedTextColor;
    copyObject.minimumFontSize = original.minimumFontSize;
    copyObject.adjustsFontSizeToFitWidth = original.adjustsFontSizeToFitWidth;
    //
    copyObject.alpha = original.alpha;
    copyObject.hidden = original.hidden;
    copyObject.tag = original.tag;
    //
    copyObject.enabled = original.enabled;
    copyObject.baselineAdjustment = original.baselineAdjustment;
    copyObject.highlighted = original.highlighted;
    
    return [copyObject autorelease];    
}
@end






@interface UIViewController (CustomNavigationBar)
//- (void)customNavigationBar;
- (void)customNavigationBarWithSelector:(SEL)selector;
- (void)customNavigationBarWithTitle:(NSString *)title backButtonSelector:(SEL)selector;
@end

@implementation UIViewController (CustomNavigationBar)
- (void)customNavigationBarWithSelector:(SEL)selector
{
}
- (void)customNavigationBarWithTitle:(NSString *)title backButtonSelector:(SEL)selector;
{
    UIImageView *navigationBar = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 480 -350, 42)];
    [navigationBar setUserInteractionEnabled:YES];
    
    UIImageView *navigationBarBg = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 480 -350, 42)];
    [navigationBarBg setImage:IMAGE(@"navigationBarBg")];
    [navigationBar addSubview:navigationBarBg];
    [navigationBarBg release];
    
    if (title)
    {
        UILabel *titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(42, 0, 300 -100, 42)];
        [titleLabel setFont:FONT_GLOBAL(30)];
        [titleLabel setTextColor:[UIColor colorWithWhite:1 alpha:1]];
        [titleLabel setBackgroundColor:[UIColor clearColor]];
        [titleLabel setShadowColor:[UIColor colorWithWhite:0 alpha:0.8]];
        [titleLabel setShadowOffset:CGSizeMake(0,1)];
        [navigationBar addSubview:titleLabel];
        titleLabel.text = title;
        [titleLabel release];
    }
    
    //
    UIButton *backButton = [[UIButton alloc]initWithFrame:CGRectMake(0, 0, 42, 42)];
    [backButton setBackgroundImage:[UIImage imageNamed:@"backButton.png"] forState:UIControlStateNormal];
    [backButton addTarget:self action:selector forControlEvents:UIControlEventTouchUpInside];
    [backButton setAdjustsImageWhenHighlighted:NO];
    [backButton setTag:kBackButton];
    [navigationBar addSubview:backButton];
    [backButton release];
    if ([self respondsToSelector:selector]) {
        [backButton addTarget:self action:selector forControlEvents:UIControlEventTouchUpInside];
    } else {
        [backButton addTarget:self.navigationController action:@selector(popViewControllerAnimated:) forControlEvents:UIControlEventTouchUpInside];
    }
    //
    [self.view addSubview:navigationBar];
    [navigationBar release];
}
@end





@interface UIButton (UIButtonCategory)
- (void)setSelected:(BOOL)isSelected;
@end


@implementation UIButton (UIButtonCategory)
- (void)setSelected:(BOOL)isSelected
{
    if (isSelected==YES) {
        self.alpha = 1;
    } else {
        self.alpha = 0.5;
    }
}
@end
