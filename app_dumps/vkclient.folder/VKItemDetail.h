/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKItemSource.h"
#import "vkclient-Structs.h"

@class VKIdentity;

__attribute__((visibility("hidden")))
@interface VKItemDetail : VKItemSource {
	VKIdentity* _identity;
}
@property(retain, nonatomic) VKIdentity* identity;
+(id)identity:(id)identity;
+(id)identity:(id)identity source:(id)source item:(id)item;
-(void)dealloc;
@end

