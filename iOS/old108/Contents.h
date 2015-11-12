//
//  Contents.h
//  108adult
//
//  Created by Haetaek Lee on 12. 10. 2..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import <Foundation/Foundation.h>


// - - - - - - - - - - - - - - - - - - - -
// 설정값
//
// 절하기
#define KEY_TODAY                   @"today"
#define KEY_TODAY_COUNT             @"todayCount"

// 기록보기
#define KEY_RECORD_DATA             @"recordData"
#define KEY_RECORD_DATA_DATE        @"recordDataDate"
#define KEY_RECORD_DATA_COUNT       @"recordDataCount"
// 설정
#define KEY_PLAY_SPEED              @"playSpeed"
#define KEY_PLAY_DURATION           @"playDuration"

#define KEY_PLAY_OPTION             @"playOption"
#define VALUE_PLAY_OPTION_CONTINUE  @"playOptionContinue"
#define VALUE_PLAY_OPTION_RESTART   @"playOptionRestart"

#define KEY_VOICE_TYPE              @"voiceType"
#define VALUE_VOICE_TYPE_MAN        @"b"
#define VALUE_VOICE_TYPE_GIRL       @"g"
#define VALUE_VOICE_TYPE_DUBBING    @"a"

#define KEY_VOICE_VOLUME            @"voiceVolume"
#define VALUE_VOICE_VOLUME_MAX      10.0

#define KEY_BGM_TYPE                @"BGMType"
#define VALUE_BGM_TYPE_BIRD         @"BGMTypeBird"
#define VALUE_BGM_TYPE_BUG          @"BGMTypeBug"
#define VALUE_BGM_TYPE_WATER        @"BGMTypeWater"
#define VALUE_BGM_TYPE_MUSIC        @"BGMTypeMusic"
#define KEY_URL_BGM_TYPE_MUSIC      @"URLBGMTypeMusic"

#define KEY_BGM_VOLUME              @"BGMVolume"
#define VALUE_BGM_VOLUME_MAX        10.0
//
// - - - - - - - - - - - - - - - - - - - -
#define URL_SOUND_BELL      [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"bell0" ofType:@"mp3"]]
#define URL_SOUND_CLICK     [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"click" ofType:@"mp3"]]



@interface Contents : NSObject

+ (UIImage *)playBgWithNumber:(int)number;
+ (NSString *)titleWithCount:(int)count;
+ (NSString *)subtitleWithCount:(int)count;

+ (NSMutableDictionary*)jsonData;

+ (NSString *)sequenceText:(int)number;
+ (NSURL *)sequenceVoiceUrl:(int)number;
+ (NSArray*)sequence;

+ (NSString*)info;

+ (NSURL *)appInfoVoiceUrl;

+ (NSURL *)URLWithBGMType:(NSString *)type;
+ (NSURL *)voiceURLWithNumber:(int)number;

+ (void)playVoiceWithNumber:(int)number;
+ (void)playBGMWithType:(NSString *)type;
+ (void)setVolumeBGMvolume:(float)volume;

@end
