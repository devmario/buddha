//
//  AppDelegate.m
//  kid108
//
//  Created by Haetaek Lee on 12. 10. 24..
//  Copyright (c) 2012년 3dpaper. All rights reserved.
//

#import "AppDelegate.h"
#import "MainPage.h"
#import "SettingPage.h"
#import "Contents.h"

@implementation AppDelegate

- (void)dealloc
{
    [_window release];
    [super dealloc];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]] autorelease];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    [UIApplication sharedApplication].idleTimerDisabled = YES;
    [[UIApplication sharedApplication]setStatusBarHidden:YES];
    UINavigationController *navigationController = [[UINavigationController alloc]initWithRootViewController:
                                                    [[[MainPage alloc] init] autorelease] ];
    self.window.rootViewController = navigationController;
    [navigationController setNavigationBarHidden:YES];
    [navigationController release];
    [SettingPage setInitialValue];
    [Contents playBGMWithType:GET(KEY_BGM_TYPE)];
    [Contents setVolumeBGMvolume:1*(([GET(KEY_BGM_VOLUME) floatValue])/VALUE_BGM_VOLUME_MAX)];
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
