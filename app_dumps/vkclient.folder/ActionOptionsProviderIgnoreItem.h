/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ActionOptionsProviderActionBuilder.h"

@class VKIdentity;

__attribute__((visibility("hidden")))
@interface ActionOptionsProviderIgnoreItem : ActionOptionsProviderActionBuilder {
	VKIdentity* _item;
}
@property(readonly, assign, nonatomic) VKIdentity* item;
+(id)item:(id)item;
-(void)fillOptionsForBuilder:(id)builder context:(id)context;
-(id)initWithItem:(id)item;
-(void)dealloc;
@end
