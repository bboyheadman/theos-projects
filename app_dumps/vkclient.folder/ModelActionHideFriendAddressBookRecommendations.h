/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Action.h"
#import "DomainEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ModelActionHideFriendAddressBookRecommendations : Action <DomainEvent> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(int)domainType;
-(void)runInContext:(id)context;
@end

