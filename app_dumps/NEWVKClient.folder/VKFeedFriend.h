/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKFeed.h"

@class VKList;

__attribute__((visibility("hidden")))
@interface VKFeedFriend : VKFeed {
	VKList* _friends;
}
@property(retain, nonatomic) VKList* friends;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end
