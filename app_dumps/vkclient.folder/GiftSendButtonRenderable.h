/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSNumber, GiftsStatContext;

__attribute__((visibility("hidden")))
@interface GiftSendButtonRenderable : VKRenderable {
	NSNumber* _owner_id;
	GiftsStatContext* _stats_context;
}
@property(retain, nonatomic) GiftsStatContext* stats_context;
@property(retain, nonatomic) NSNumber* owner_id;
-(Class)rendererClass;
-(void)dealloc;
@end

