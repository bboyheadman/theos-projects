/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5.h"
#import "vkclient-Structs.h"


__attribute__((visibility("hidden")))
@interface InternalAppNotificationComponent : Component5 {
}
+(id)componentByAddingCloseButtonComponent:(id)component toComponent:(id)component2;
+(id)closeButtonComponentWithBackground:(BOOL)background styleSheet:(id)sheet handler:(id)handler;
+(id)usersComponentDetailedWithSources:(id)sources message:(id)message;
+(id)usersComponentCompactWithSources:(id)sources message:(id)message;
+(id)avatarsComponentForSources:(id)sources;
+(id)notificationNewsfeedBannerTextComponent:(id)component;
+(id)notificationNewsfeedApplicationTextComponent:(id)component;
+(id)notificationNewsfeedInfoTextComponent:(id)component;
+(id)messageStyle:(id)style;
+(id)notificationNewsfeedBannerTextTitleStyle:(id)style;
+(id)notificationNewsfeedApplicationTextTitleStyle:(id)style;
+(id)notificationNewsfeedInfoTextTitleStyle:(id)style;
+(id)cellButton:(id)button withHandler:(id)handler;
+(id)secondaryButton:(id)button withHandler:(id)handler;
+(id)primaryButton:(id)button withHandler:(id)handler;
+(id)buttonComponent:(id)component withHandler:(id)handler;
+(id)notificationNewsfeedBanner:(id)banner;
+(id)notificationNewsfeedApplication:(id)application;
+(id)notificationNewsfeedInfo:(id)info;
+(id)notificationNewsfeed:(id)newsfeed;
+(id)notification:(id)notification;
@end

