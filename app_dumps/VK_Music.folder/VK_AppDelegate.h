/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"
#import "UIApplicationDelegate.h"

@class VK_Log, UIWindow, NSString;

__attribute__((visibility("hidden")))
@interface VK_AppDelegate : XXUnknownSuperclass <UIApplicationDelegate> {
	UIWindow* _window;
	VK_Log* _log;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIWindow* window;
@property(retain, nonatomic) VK_Log* log;
-(void).cxx_destruct;
-(void)notifyStatusBarTouched;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)registerUserNotification;
-(void)application:(id)application didRegisterUserNotificationSettings:(id)settings;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)initLog;
-(void)setupAppearance;
-(void)setupSingletones;
-(void)setup;
-(id)applicationDocumentsDirectory;
-(void)remoteControlReceivedWithEvent:(id)event;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
@end
