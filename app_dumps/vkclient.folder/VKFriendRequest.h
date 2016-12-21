/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class VKText, VKUser, NSString, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VKFriendRequest : VKDomain {
	BOOL _confirmed;
	BOOL _noHide;
	BOOL _outcoming;
	VKUser* _user;
	NSString* _info;
	VKText* _message;
	NSArray* _mutual;
	VKUser* _from;
	NSDictionary* _photosMap;
}
@property(assign, nonatomic) BOOL outcoming;
@property(assign, nonatomic) BOOL noHide;
@property(assign, nonatomic) BOOL confirmed;
@property(retain, nonatomic) NSDictionary* photosMap;
@property(retain, nonatomic) VKUser* from;
@property(retain, nonatomic) NSArray* mutual;
@property(retain, nonatomic) VKText* message;
@property(retain, nonatomic) NSString* info;
@property(retain, nonatomic) VKUser* user;
-(id)iden;
-(Class)rendererClass;
-(void)dealloc;
@end

