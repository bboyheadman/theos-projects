/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MessagesListRenderer.h"
#import "vkclient-Structs.h"

@class UsersModel;

__attribute__((visibility("hidden")))
@interface ChatRenderer : MessagesListRenderer {
	unsigned offset;
	BOOL _multi;
	UsersModel* _usersModel;
}
@property(retain, nonatomic) UsersModel* usersModel;
@property(assign, nonatomic) BOOL multi;
-(void)prerenderr:(id)prerenderr;
-(id)sectionKeyForMessage:(id)message;
-(unsigned)miscSections;
-(void)dealloc;
-(id)initWithOwner:(id)owner;
@end

