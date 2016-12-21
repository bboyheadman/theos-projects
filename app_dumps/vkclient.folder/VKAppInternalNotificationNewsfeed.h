/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAppInternalNotification.h"

@class VKAppInternalNotificationButton, NSString, NSArray, VKRemoteImageAssetGroup;

__attribute__((visibility("hidden")))
@interface VKAppInternalNotificationNewsfeed : VKAppInternalNotification {
	int _subtype;
	NSString* _title;
	NSString* _message;
	NSString* _users_description;
	NSArray* _sources;
	VKAppInternalNotificationButton* _button;
	VKRemoteImageAssetGroup* _photo;
}
@property(retain, nonatomic) VKRemoteImageAssetGroup* photo;
@property(retain, nonatomic) VKAppInternalNotificationButton* button;
@property(copy, nonatomic) NSArray* sources;
@property(copy, nonatomic) NSString* users_description;
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) int subtype;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

