/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSDictionary;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface ChatEditItemUser : VKRenderable {
	BOOL _admin;
	id<VKSource> _source;
	NSDictionary* _lastSeen;
	id<VKSource> _inviter;
}
@property(assign, nonatomic) BOOL admin;
@property(retain, nonatomic) id<VKSource> inviter;
@property(retain, nonatomic) NSDictionary* lastSeen;
@property(retain, nonatomic) id<VKSource> source;
-(void).cxx_destruct;
@end
