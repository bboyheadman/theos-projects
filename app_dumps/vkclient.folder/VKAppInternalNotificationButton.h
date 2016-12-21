/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSString;
@protocol VKRemoteAction;

__attribute__((visibility("hidden")))
@interface VKAppInternalNotificationButton : VKRenderable {
	NSString* _title;
	int _type;
	id<VKRemoteAction> _action;
}
@property(retain, nonatomic) id<VKRemoteAction> action;
@property(assign, nonatomic) int type;
@property(copy, nonatomic) NSString* title;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

