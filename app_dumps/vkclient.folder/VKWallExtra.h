/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VKWallExtra : VKRenderable {
	int _type;
	int _count;
	NSNumber* _owner;
}
@property(retain, nonatomic) NSNumber* owner;
@property(assign, nonatomic) int count;
@property(assign, nonatomic) int type;
-(Class)rendererClass;
-(void)dealloc;
@end

