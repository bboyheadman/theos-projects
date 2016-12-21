/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKIdentity;

__attribute__((visibility("hidden")))
@interface ModelActionNewsItemIgnore : ModelAction {
	BOOL _ignore;
}
@property(assign, nonatomic) BOOL ignore;
@property(retain, nonatomic) VKIdentity* target;
+(BOOL)canIgnoreItem:(id)item;
+(id)typeForIdentity:(id)identity;
+(int)domainType;
+(id)item:(id)item;
-(id)actionSuccessMessage:(id)message;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

