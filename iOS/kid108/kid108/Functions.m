//
//  Functions.m
//  Qfeed
//
//  Created by MacBook on 11. 5. 21..
//  Copyright 2011 POSTECH. All rights reserved.
//

#import "Functions.h"
#import "AppDelegate.h"
//
#import "Contents.h"


@implementation Functions


static Functions *object;
// alertView
static char blockKey;
// audioPlayer
static char audioPlayerKey;
// audioServices
SystemSoundID soundID;
// MediaPickerController block
static char mediaPickerDelegateKey;
// AVPlayer block
static char avPlayerKey;

+ (Functions *)returnObject
{
	@synchronized([Functions class])
	{
		if (object==nil) {
			object = [[Functions alloc]init];
		}
		return object;
	}
	return nil;
}


+ (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    // alert with delegate
    if (alertView.tag==kAlertDelegate)
    {
        alertBlock_t delegateBlock_ = objc_getAssociatedObject(alertView, &blockKey);
        delegateBlock_(buttonIndex);
    }
}
+ (void)alertTitle:(NSString *)title message:(NSString *)message buttons:(NSArray *)buttons delegate:(alertBlock_t)delegate
{
    UIAlertView *alert = [[UIAlertView alloc]initWithTitle:title 
                                                   message:message 
                                                  delegate:[self class] 
                                         cancelButtonTitle:nil 
                                         otherButtonTitles:nil];
    for (int i=0; i<[buttons count]; i++) 
    {
        [alert addButtonWithTitle: [buttons objectAtIndex:i] ];
    }
    if (buttons==nil) {
        [alert addButtonWithTitle: @"확인" ];
    }
    [alert setTag:kAlertDelegate];
	[alert performSelectorOnMainThread:@selector(show) withObject:nil waitUntilDone:NO];

    objc_setAssociatedObject(alert, &blockKey, delegate, OBJC_ASSOCIATION_COPY);
    
    [alert performSelectorOnMainThread:@selector(release) withObject:nil waitUntilDone:NO];
}

+ (void)showMessageTitle:(NSString *)messageTitle message:(NSString *)message
{
	UIAlertView *alert = [[UIAlertView alloc]initWithTitle:messageTitle message:message delegate:self cancelButtonTitle:@"확인" otherButtonTitles:nil];
	[alert performSelectorOnMainThread:@selector(show) withObject:nil waitUntilDone:NO];
    [alert performSelectorOnMainThread:@selector(release) withObject:nil waitUntilDone:NO];
}
+ (void)showNetwordErrorMessage
{
    NSString *alertTitle = @"네트워크 오류";
    if ([Functions doesAlertViewExistTitle:alertTitle]==NO) {
        [Functions showMessageTitle:alertTitle message:@"네트워크 연결 상태 혹은 서버에 문제가 있습니다. 문제가 해결된 후에 다시 시도해 주세요"];
    }
}
+ (void)showAlertWithArray:(NSMutableArray *)alertArray
{
    NSString *title = [[alertArray objectAtIndex:0]objectForKey:@"title"];
    NSString *message = [[alertArray objectAtIndex:0]objectForKey:@"message"];
    
	UIAlertView *alert = [[UIAlertView alloc]initWithTitle:title message:message delegate:nil cancelButtonTitle:@"확인" otherButtonTitles:nil];
	[alert show];
	[alert release];
}


+ (BOOL)doesAlertViewExistTitle:(NSString *)title
{
    for (UIWindow *window in [UIApplication sharedApplication].windows) {
        NSArray *subviews = window.subviews;
        if ([subviews count] > 0) {
            id subview = [subviews objectAtIndex:0];
            if ([subview isKindOfClass:[UIAlertView class]] || [subview isKindOfClass:[UIActionSheet class]]) {
                [[subview title] isEqualToString:title];
                return YES;
            }
        }
    }
    return NO;
}
+ (BOOL)doesAlertViewExist 
{
    for (UIWindow *window in [UIApplication sharedApplication].windows) {
        for (UIView *view in window.subviews) {
            BOOL alert = [view isKindOfClass:[UIAlertView class]];
            BOOL action = [view isKindOfClass:[UIActionSheet class]];
            if (alert || action)
                return YES;
        }
    }
    return NO;
}





+ (void)saveImageToPlist:(UIImage *)image forKey:(NSString *)key
{
    NSData *_dataForSave = [NSKeyedArchiver archivedDataWithRootObject:image];
    [[NSUserDefaults standardUserDefaults]setObject:_dataForSave forKey:key];
    [[NSUserDefaults standardUserDefaults]synchronize];
}
+ (UIImage *)loadImageFromPlistForKey:(NSString *)key
{
    NSData *_savedData = [[NSUserDefaults standardUserDefaults]objectForKey:key];
    UIImage *image = [NSKeyedUnarchiver unarchiveObjectWithData:_savedData];
    
    return image;
}

+ (void)saveArrayToPlist:(NSMutableArray *)array forKey:(NSString *)key
{
    NSData *_dataForSave = [NSKeyedArchiver archivedDataWithRootObject:array];
    [[NSUserDefaults standardUserDefaults]setObject:_dataForSave forKey:key];
    [[NSUserDefaults standardUserDefaults]synchronize];
}
+ (NSMutableArray *)loadArrayFromPlistForKey:(NSString *)key
{
    NSData *_savedData = [[NSUserDefaults standardUserDefaults]objectForKey:key];
    NSMutableArray *array = [NSKeyedUnarchiver unarchiveObjectWithData:_savedData];
    
    return [NSMutableArray arrayWithArray:array];
}
+ (void)removeAllDataForKey:(NSString *)key
{
    NSData *_savedData = [[NSUserDefaults standardUserDefaults]objectForKey:key];
    NSMutableArray *array = [NSKeyedUnarchiver unarchiveObjectWithData:_savedData];
    
    [array removeAllObjects];
    [Functions saveArrayToPlist:array forKey:key];
}

+ (void)removeAll
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    NSArray *keys = [[defaults dictionaryRepresentation] allKeys];
    for(NSString *key in keys) {
//        if([key hasPrefix:nil]) {
        [defaults removeObjectForKey:key];
//        }
    }
    [defaults synchronize];
}





/* 문자열을 날짜로 변환 */
+ (NSDate *)convertStringToDate:(NSString *)dateString
{
	NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
	[dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
	NSDate *dateFromString = [dateFormatter dateFromString:dateString];
	[dateFormatter release];
	
	return dateFromString;
}
/* dateWithTimeInterval을 바로 쓰면 DateStyle이 바뀌어서 다른 시간이 나옴 */
+ (NSString *)dateStringWithTimeInterval:(int)timeIntervalSince1970
{
	NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
	[dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
	NSString *dateFromString = [dateFormatter stringFromDate:[NSDate dateWithTimeIntervalSince1970:timeIntervalSince1970]];
	[dateFormatter release];

	return dateFromString;
}
/* 날짜문자열을 1970년부터 몇초가 경과했는지로 반환 */
+ (int)timeIntervalSince1970Of:(NSString *)dateString
{
	NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
	[dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
	NSDate *dateFromString = [dateFormatter dateFromString:dateString];
	[dateFormatter release];

	return [dateFromString timeIntervalSince1970];
}
/* timeinterval을 경과한 시간을 나타내는 문자열로 변환 */
+ (NSString *)convertTimeIntervalToString:(int)timeInterval
{
	NSString *intervalString = @"";
	int totalSec = timeInterval;

	int min = 0;
	int hour = 0;
	int day = 0;
	if (totalSec >= 60*60*24) {
		day = totalSec/(60*60*24);
		totalSec -= (60*60*24)*day;
		intervalString = [intervalString stringByAppendingFormat:@"%d일 ",day];
	}
	if (totalSec >= 60*60) {
		hour  = totalSec/(60*60);
		totalSec -= (60*60)*hour;
		intervalString = [intervalString stringByAppendingFormat:@"%d시간 ",hour];
	}
	if (totalSec >= 60) {
		min = totalSec/60;
		totalSec -= 60*min;
		intervalString = [intervalString stringByAppendingFormat:@"%d분 ",min];
	}
	intervalString = [intervalString stringByAppendingFormat:@"%d초",totalSec];
	
	return intervalString;
}




+ (NSString *)returnCurrentTimeString
{
	NSString *currentTimeString=nil;
	NSDateFormatter *dateFormetter = [[NSDateFormatter alloc]init];
	[dateFormetter setDateFormat:NSLocalizedString(@"yyyy-MM-dd HH:mm:ss",nil)];
	currentTimeString = [dateFormetter stringFromDate:[NSDate dateWithTimeIntervalSinceNow:0]];
	[dateFormetter release];
	
	return currentTimeString;
}




+ (NSString *)convertSecondToHHmmssFormat:(NSInteger)totalSecond
{
    NSString *hourString = @"00";
    NSString *minuteString = @"00";
    NSString *secondString = @"00";
    int hour = 0;
    int minute = 0;
    int second = 0;
    
    if (totalSecond>=60*60)
    {
        hour = totalSecond/(60*60);
        totalSecond -= hour*(60*60);
        if (hour<10) {
            hourString = [NSString stringWithFormat:@"0%d",hour];
        } else {
            hourString = [NSString stringWithFormat:@"%d",hour];
        }
    }

    if (totalSecond>=60)
    {
        minute = totalSecond/60;
        totalSecond -= minute*60;
        if (minute<10) {
            minuteString = [NSString stringWithFormat:@"0%d",minute];
        } else {
            minuteString = [NSString stringWithFormat:@"%d",minute];
        }
    }
    
    if (1)
    {
        second = totalSecond;
        if (second<10) {
            secondString = [NSString stringWithFormat:@"0%d",second];
        } else {
            secondString = [NSString stringWithFormat:@"%d",second];
        }
    }
    
    return [NSString stringWithFormat:@"-%@:%@:%@", hourString, minuteString, secondString];
}




+ (UIImage *)levelImageWithLevel:(NSString *)userLevel
{
    int level = [userLevel intValue];
    NSString *fileName = [NSString stringWithFormat:@"mypage-level-%d",level];
    UIImage *image = IMAGE(fileName);
    return image;
}

+ (NSString *)loadStringWithFileName:(NSString *)fileName
{
    NSString *filePath = [[NSBundle mainBundle] pathForResource:fileName ofType:@"txt"];
    if (filePath) {
        return [[[NSString alloc]initWithContentsOfFile:filePath encoding:NSUTF16StringEncoding error:nil]autorelease];
    }
    return nil;
}


+ (AVAudioPlayer *)audioPlayerWithRetainObject:(id)retainObject
{
    if (retainObject==nil) {
        retainObject = [[UIApplication sharedApplication]delegate];
    }
    AVAudioPlayer *audioPlayer = objc_getAssociatedObject(retainObject, &audioPlayerKey);
    return audioPlayer;
}
+ (void)audioPlayerWithRetainObject:(id)retainObject playURL:(NSURL *)url volume:(CGFloat)volume numberOfLoops:(NSInteger)numberOfLoops
{
    if (retainObject==nil) {
        retainObject = [[UIApplication sharedApplication]delegate];
    }
    
    AVAudioPlayer *audioPlayer = objc_getAssociatedObject(retainObject, &audioPlayerKey);
    if (audioPlayer) {
        [audioPlayer stop];
        [audioPlayer release], audioPlayer=nil;
    }
    NSError *error;
    audioPlayer = [[AVAudioPlayer alloc]initWithContentsOfURL:url error:&error];
    [audioPlayer setNumberOfLoops:numberOfLoops];
    [audioPlayer setVolume:volume];
    [audioPlayer prepareToPlay];
    [audioPlayer play];
    
    objc_setAssociatedObject(retainObject, &audioPlayerKey, audioPlayer, OBJC_ASSOCIATION_RETAIN);
}

+ (void)playAudioServicesWithUrl:(NSURL *)url
{
    //id retainObject = [[UIApplication sharedApplication]delegate];

    //SystemSoundID soundID = nil;//objc_getAssociatedObject(retainObject, &audioServicesKey);

    AudioServicesCreateSystemSoundID((CFURLRef)url, &soundID);
    
    /* Play */
    AudioServicesPlaySystemSound(soundID);
    
    /* Dispose */
    AudioServicesDisposeSystemSoundID(soundID);
}

+ (AVPlayer *)avPlayerWithRetainObject:(id)retainObject {
    if (retainObject==nil) {
        retainObject = [[UIApplication sharedApplication]delegate];
    }
    
    AVPlayer *avPlayer = objc_getAssociatedObject(retainObject, &avPlayerKey);
    return avPlayer;
}

+ (AVPlayer *)avPlayerWithRetainObject:(id)retainObject
                         playURL:(NSURL *)url
                         repeats:(BOOL)repeats
{
    if (retainObject==nil) {
        retainObject = [[UIApplication sharedApplication]delegate];
    }
    
    AVPlayer *avPlayer = objc_getAssociatedObject(retainObject, &avPlayerKey);
    if (avPlayer) {
        [avPlayer pause];
        [avPlayer release], avPlayer=nil;
    }
    avPlayer = [[AVPlayer alloc]initWithURL:url];
    [avPlayer play];

    if (repeats) {
        [[NSNotificationCenter defaultCenter] addObserver:[self class]
                                                 selector:@selector(playerItemDidReachEnd:)
                                                     name:AVPlayerItemDidPlayToEndTimeNotification
                                                   object:[avPlayer currentItem]];
    } else {
        [[NSNotificationCenter defaultCenter] removeObserver:[self class]
                                                        name:AVPlayerItemDidPlayToEndTimeNotification
                                                      object:[avPlayer currentItem]];
    }
    
    objc_setAssociatedObject(retainObject, &avPlayerKey, avPlayer, OBJC_ASSOCIATION_RETAIN);

    return avPlayer;
}
+ (void)playerItemDidReachEnd:(NSNotification *)notification
{
    [Functions avPlayerWithRetainObject:nil
                                playURL:[Contents URLWithBGMType:VALUE_BGM_TYPE_MUSIC]
                                repeats:YES];

    
    //AVPlayerItem *playItem = [notification object];
    //[playItem seekToTime:kCMTimeZero];
}


+ (MPMediaPickerController *)presentMediaPickerControllerTo:(UIViewController *)superViewController title:(NSString *)title allowsPickingMultipleItems:(BOOL)allowsPickingMultipleItems delegate:(MediaPickerBlock)delegateBlock;
{
    MPMediaPickerController *picker = [[MPMediaPickerController alloc] initWithMediaTypes:MPMediaTypeAnyAudio];
    [picker setDelegate:(id<MPMediaPickerControllerDelegate>)[self class]];
    [picker setAllowsPickingMultipleItems:allowsPickingMultipleItems];
    picker.prompt = title;
    [superViewController presentModalViewController:picker animated:YES];

    objc_setAssociatedObject(picker, &mediaPickerDelegateKey, delegateBlock, OBJC_ASSOCIATION_COPY);
    return [picker autorelease];
}
+ (void)mediaPicker:(MPMediaPickerController *)mediaPicker didPickMediaItems:(MPMediaItemCollection *)mediaItemCollection
{
    MediaPickerBlock mediaPickerBlock = objc_getAssociatedObject(mediaPicker, &mediaPickerDelegateKey);
    mediaPickerBlock(mediaItemCollection);

    [mediaPicker dismissModalViewControllerAnimated:YES];
}
+ (void)mediaPickerDidCancel:(MPMediaPickerController *)mediaPicker
{
	[mediaPicker dismissModalViewControllerAnimated:YES];
}



+ (UIImage*)resizedImage:(UIImage*)inImage
{
	CGRect thumbRect = CGRectZero;
	if (inImage.size.width > inImage.size.height) {
		thumbRect = CGRectMake(0, 0, inImage.size.width*(480/inImage.size.height), 480);
	} else if (inImage.size.width < inImage.size.height) {
		thumbRect = CGRectMake(0, 0, 320, inImage.size.height*(320/inImage.size.width));
	}
	// Creates a bitmap-based graphics context and makes it the current context.
	UIGraphicsBeginImageContext(thumbRect.size);
	[inImage drawInRect:thumbRect];
	UIImage *outImage = UIGraphicsGetImageFromCurrentImageContext();
	UIGraphicsEndImageContext();
	return outImage;
}
+ (NSString *)uploadImageWithMakeThumbnail:(UIImage *)image withFileName:(NSString *)filename toFolder:(NSString *)folderName
{   
	CGRect thumbRect = CGRectZero;
	if (image.size.width >= image.size.height) {
		thumbRect = CGRectMake(0, 0, image.size.width*(300/image.size.height), 300);
	} else if (image.size.width < image.size.height) {
		thumbRect = CGRectMake(0, 0, 240, image.size.height*(240/image.size.width));
	}
	// Creates a bitmap-based graphics context and makes it the current context.
	UIGraphicsBeginImageContext(thumbRect.size);
	[image drawInRect:thumbRect];  
	UIImage *outImage = UIGraphicsGetImageFromCurrentImageContext();
	UIGraphicsEndImageContext();
    
    [Functions uploadImage:outImage withFileName:[NSString stringWithFormat:@"%@t",filename] toFolder:folderName];
    
    return [Functions uploadImage:image withFileName:filename toFolder:folderName];
}
+ (NSString *)uploadImage:(UIImage *)image withFileName:(NSString *)filename
{
    return [Functions uploadImage:image withFileName:filename toFolder:@""];
}
+ (NSString *)uploadImage:(UIImage *)image withFileName:(NSString *)filename toFolder:(NSString *)folderName
{   
    [[UIApplication sharedApplication]setNetworkActivityIndicatorVisible:YES];
    
    
	if (image.size.width > 480 || image.size.height > 480) {
		image = [Functions resizedImage:image];
	}

	filename = [filename stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
	
	NSData *imageData = UIImageJPEGRepresentation(image, 90);
	NSString *urlString = [NSString stringWithFormat:@"http://exight.co.kr/qfeed/uploadImage.php?type=%@",folderName]; //이미지전송을 위한 PHP경로
	
	NSMutableURLRequest *request = [[[NSMutableURLRequest alloc] init] autorelease];
	[request setURL:[NSURL URLWithString:urlString]];
	[request setHTTPMethod:@"POST"];
	
	
//	NSString *boundary = [NSString stringWithString:@"---------------------------14737809831466499882746641449"];	
	NSString *boundary = @"0xKhTmLbOuNdArY";  // important!!!
	NSString *contentType = [NSString stringWithFormat:@"multipart/form-data; boundary=%@",boundary];
	[request addValue:contentType forHTTPHeaderField: @"Content-Type"];
	
	
	NSMutableData *body = [NSMutableData data];
	[body appendData:[[NSString stringWithFormat:@"\r\n--%@\r\n",boundary] dataUsingEncoding:NSUTF8StringEncoding]];
	[body appendData:[[NSString stringWithFormat:@"Content-Disposition: form-data; name=\"userfile\"; filename=\"%@.jpg\"\r\n",filename] dataUsingEncoding:NSUTF8StringEncoding]];
	[body appendData:[@"Content-Type: application/octet-stream\r\n\r\n" dataUsingEncoding:NSUTF8StringEncoding]];
	[body appendData:[NSData dataWithData:imageData]];
	[body appendData:[[NSString stringWithFormat:@"\r\n--%@--\r\n",boundary] dataUsingEncoding:NSUTF8StringEncoding]];
	[request setHTTPBody:body];
	
	
	NSData *returnData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
	NSString *returnString = [[NSString alloc] initWithData:returnData encoding:NSUTF8StringEncoding];

    
    [[UIApplication sharedApplication]setNetworkActivityIndicatorVisible:NO];
    return [returnString autorelease];
}

+ (void)startLoadingAnimationTo:(CGPoint)center with:(id)superView
{
	UIActivityIndicatorView *loading = (UIActivityIndicatorView *)[superView viewWithTag:kLoadingView];
	if (loading==nil) {
		loading = [[UIActivityIndicatorView alloc]initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
		[loading setCenter:center];
		[loading setTag:kLoadingView];
		[superView addSubview:loading];
		[loading release];
	}
	[loading startAnimating];
}
+ (void)stopLoadingAnimationTo:(id)superView
{
	UIActivityIndicatorView *loading = (UIActivityIndicatorView *)[superView viewWithTag:kLoadingView];
	[loading stopAnimating];
}


/* 메세지 배열을 날짜 오름차순으로 정렬 - 가장 최신 메세지가 마지막에 오도록 */
+ (void)sortArray:(NSMutableArray *)unsortedDatesArray
{
    //	NSArray *sortedArray = [unsortedDatesArray sortedArrayUsing:@selector(compare)];	
	
	[unsortedDatesArray sortUsingComparator:^NSComparisonResult(id obj1, id obj2) {	
		// NSString으로 된 키로 정렬
        //		NSDate *date1 = [Functions convertStringToDate: [(NSMutableDictionary *)obj1 objectForKey:@"date"] ];
        //		NSDate *date2 = [Functions convertStringToDate: [(NSMutableDictionary *)obj2 objectForKey:@"date"] ];
		// NSDate로 된 키로 정렬
        //		NSDate *date1 = [(NSMutableDictionary *)obj1 objectForKey:@"date"];
        //		NSDate *date2 = [(NSMutableDictionary *)obj2 objectForKey:@"date"];
        //		if (date1==nil) return NSOrderedDescending; // 왼쪽게 더 오래된 거
        //		if (date2==nil) return NSOrderedAscending;
		NSNumber *date1 = [(NSMutableDictionary *)obj1 objectForKey:@"timeInterval"];
		NSNumber *date2 = [(NSMutableDictionary *)obj2 objectForKey:@"timeInterval"];
		return [date1 compare:date2];
	} ];
}



@end





@implementation NSString (NSStringCategory)

/* 문자열을 날짜로 변환 */
- (NSDate *)dateWithDateFormat:(NSString *)dateFormat
{   // dateFormat 형식의 길이와 string의 길이 형식이 일치해야함
	NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    if (dateFormat==nil) {
        [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    } else {
        [dateFormatter setDateFormat:dateFormat];
    }
	NSDate *dateFromString = [dateFormatter dateFromString:self];
	[dateFormatter release];
	
	return dateFromString;
}

@end


@implementation NSDate (NSDateCategory)

- (NSString *)stringWithDateFormat:(NSString *)dateFormat
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    if (dateFormat==nil) {
        [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    } else {
        [dateFormatter setDateFormat:dateFormat];
    }
	NSString *stringFromDate = [dateFormatter stringFromDate:self];
	[dateFormatter release];
	
	return stringFromDate;
}

@end
