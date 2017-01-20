/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface ModelActionLoadPrivacy : ModelAction {
	BOOL _loadLists;
	NSDictionary* _resultLists;
	NSDictionary* _resultUsers;
	NSMutableSet* _userIds;
}
@property(retain, nonatomic) NSDictionary* resultUsers;
@property(retain, nonatomic) NSDictionary* resultLists;
@property(assign, nonatomic) BOOL loadLists;
@property(retain, nonatomic) NSMutableSet* userIds;
+(int)domainType;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)addPrivacyToLoad:(id)load;
-(BOOL)disableHUD;
-(void)dealloc;
@end
