/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKIdentity;

__attribute__((visibility("hidden")))
@interface ModelActionPinPost : ModelAction {
	BOOL _unpin;
}
@property(assign, nonatomic) BOOL unpin;
@property(retain, nonatomic) VKIdentity* target;
+(int)domainType;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

