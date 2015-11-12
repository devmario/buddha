//
//  Contents.m
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 2..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "Contents.h"

@implementation Contents

static bool _initedContent = false;
static NSMutableDictionary* _dataContents = nil;

+ (void)_initData {
    if(_initedContent) {
        return;
    } else {
        _initedContent = true;
        NSString *filePath = [[NSBundle mainBundle] pathForResource:@"data" ofType:@"json"];
        NSData *data = [NSData dataWithContentsOfFile:filePath];
        _dataContents = [[NSMutableDictionary alloc] initWithDictionary:[NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil]];
        _dataContents = [_dataContents objectForKey:[_dataContents objectForKey:@"name"]];
        
        //version conflict fix
        if(![[_dataContents objectForKey:@"voice"] containsObject:GET(KEY_VOICE_TYPE)]) {
            SET([[_dataContents objectForKey:@"voice"] firstObject], KEY_VOICE_TYPE);
        }
    }
}

+ (NSMutableDictionary*)jsonData {
    [Contents _initData];
    return _dataContents;
}

+ (UIImage *)playBgWithNumber:(int)number
{
    NSString *fileName = nil;
    if (number<10) {
        fileName = [NSString stringWithFormat:@"00%d",number];
    } else if (number<100) {
        fileName = [NSString stringWithFormat:@"0%d",number];
    } else if (number<1000) {
        fileName = [NSString stringWithFormat:@"%d",number];
    }
    UIImage *imageForReturn = IMAGE_JPG(fileName);
    return imageForReturn;
}

+ (NSString *)titleWithCount:(int)count
{
    if(count < 1 || count > 108)
        return @"";
    return [[[[Contents jsonData] objectForKey:@"scene"] objectAtIndex:count - 1] objectForKey:@"title"];
}

+ (NSString *)subtitleWithCount:(int)count
{
    if(count < 1 || count > 108)
        return @"";
    return [[[[Contents jsonData] objectForKey:@"scene"] objectAtIndex:count - 1] objectForKey:@"sub_title"];
}


+ (NSString*)info {
    return [[Contents jsonData] objectForKey:@"info"];
}

+ (NSString *)sequenceText:(int)number
{
    NSArray* desc = [[[Contents jsonData] objectForKey:@"how_to"] objectForKey:@"desc"];
    if(number >= 0 && number < [desc count])
        return [desc objectAtIndex:number];
    return @"";
}

+ (NSArray*)sequence {
    return [[[Contents jsonData] objectForKey:@"how_to"] objectForKey:@"seq"];
}

+ (NSURL *)sequenceVoiceUrl:(int)number
{
    NSString *fileName = [NSString stringWithFormat:@"how%d",number+1];
    NSURL *urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:fileName ofType:@"mp3"]];
    return urlForReturn;
}


+ (NSURL *)appInfoVoiceUrl
{
    NSString *fileName = @"appInfo";
    NSURL *urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:fileName ofType:@"mp3"]];
    return urlForReturn;
}



+ (NSURL *)URLWithBGMType:(NSString *)type
{
    NSURL *urlForReturn = nil;
    
    if ([type isEqualToString:VALUE_BGM_TYPE_BIRD]) {
        urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"birdBgm" ofType:@"mp3"]];
    } else if ([type isEqualToString:VALUE_BGM_TYPE_BUG]) {
        urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"bugBgm" ofType:@"mp3"]];
    } else if ([type isEqualToString:VALUE_BGM_TYPE_WATER]) {
        urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"waterBgm" ofType:@"mp3"]];
    } else if ([type isEqualToString:VALUE_BGM_TYPE_MUSIC]) {
        NSURL *url = [NSURL URLWithString:GET(KEY_URL_BGM_TYPE_MUSIC)];
        AVURLAsset *songAsset = [AVURLAsset URLAssetWithURL:url options:nil];
        urlForReturn = songAsset.URL;
    }
    
    return urlForReturn;
}

+ (NSURL *)voiceURLWithNumber:(int)number
{
    NSURL *urlForReturn = nil;

    NSString *fileName = nil;
    NSString *type = GET(KEY_VOICE_TYPE);
    fileName = [NSString stringWithFormat:@"%@00%d", type, number];

    int length = [fileName length];
    if (length==5) {
        fileName = [fileName stringByReplacingCharactersInRange:NSMakeRange(1, 1) withString:@""];
    } else if (length==6) {
        fileName = [fileName stringByReplacingCharactersInRange:NSMakeRange(1, 2) withString:@""];
    }
    
    id ft = [[Contents jsonData] objectForKey:@"voiceftype"];
    NSLog(@"%@ %@", fileName, ft);
    urlForReturn = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:fileName ofType:ft]];
    return urlForReturn;
}


+ (void)playVoiceWithNumber:(int)number
{
    [Functions audioPlayerWithRetainObject:KEY_VOICE_TYPE
                                   playURL:[Contents voiceURLWithNumber:number]
                              fileTypeHint:AVFileTypeMPEGLayer3
                                    volume:1*([GET(KEY_VOICE_VOLUME) intValue]/VALUE_VOICE_VOLUME_MAX)
                             numberOfLoops:0 ];
}

+ (void)playBGMWithType:(NSString *)type
{
    if ([type isEqualToString:VALUE_BGM_TYPE_MUSIC])
    {
        [[Functions audioPlayerWithRetainObject:KEY_BGM_TYPE] stop];
        [Functions avPlayerWithRetainObject:nil
                                    playURL:[Contents URLWithBGMType:type]
                                    repeats:YES];
    }
    else
    {
        [Functions avPlayerWithRetainObject:nil playURL:nil repeats:NO];
        [Functions audioPlayerWithRetainObject:KEY_BGM_TYPE
                                       playURL:[Contents URLWithBGMType:type]
                                        volume:1*([GET(KEY_BGM_VOLUME) intValue]/VALUE_BGM_VOLUME_MAX)
                                 numberOfLoops:-1 ];
    }
}

+ (void)setVolumeBGMvolume:(float)volume {
    [[Functions audioPlayerWithRetainObject:KEY_BGM_TYPE] setVolume:volume];
    [[Functions avPlayerWithRetainObject:nil] setVolume:volume];
}

@end
