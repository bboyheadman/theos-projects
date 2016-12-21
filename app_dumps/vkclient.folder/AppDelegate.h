/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIApplicationDelegate.h"
#import "MainControllerDelegate.h"

@class UIWindow, VKMMainController, NSData, VKCountersUpdater, NSURL, NSString, LandingPageController;

__attribute__((visibility("hidden")))
@interface AppDelegate : XXUnknownSuperclass <UIApplicationDelegate, MainControllerDelegate> {
	int applicationPushNotifications;
	UIWindow* _mainWindow;
	VKMMainController* _main;
	NSData* _apnsToken;
	VKCountersUpdater* _counter;
	NSURL* _pendingURL;
	NSString* _pendingBundle;
	LandingPageController* _landing;
}
@property(retain, nonatomic) UIWindow* window;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKMMainController* main;
@property(retain, nonatomic) UIWindow* mainWindow;
@property(retain, nonatomic) LandingPageController* landing;
@property(retain, nonatomic) NSString* pendingBundle;
@property(retain, nonatomic) NSURL* pendingURL;
@property(retain, nonatomic) VKCountersUpdater* counter;
@property(retain, nonatomic) NSData* apnsToken;
-(void)remoteControlReceivedWithEvent:(id)event;
-(void)mainControllerLogout;
-(void)login:(id)login startup:(BOOL)startup;
-(BOOL)interceptURL:(id)url;
-(void)application:(id)application handleActionWithIdentifier:(id)identifier forRemoteNotification:(id)remoteNotification withResponseInfo:(id)responseInfo completionHandler:(id)handler;
-(void)application:(id)application handleActionWithIdentifier:(id)identifier forRemoteNotification:(id)remoteNotification completionHandler:(id)handler;
-(void)application:(id)application didReceiveLocalNotification:(id)notification;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)application:(id)application didRegisterUserNotificationSettings:(id)settings;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)handlePendingURL;
-(void)application:(id)application performActionForShortcutItem:(id)shortcutItem completionHandler:(id)handler;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)dealloc;
@end

