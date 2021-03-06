/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSNumber, VKUser;

__attribute__((visibility("hidden")))
@interface ModelActionChangeFriendList : ModelAction {
	BOOL _add;
	VKUser* _user;
}
@property(assign, nonatomic) BOOL add;
@property(retain, nonatomic) VKUser* user;
@property(retain, nonatomic) NSNumber* target;
+(int)domainType;
-(void).cxx_destruct;
-(void)actionHandleSuccessForData:(id)data context:(id)context;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)user:(id)user add:(BOOL)add;
@end

