/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSDictionary, VKAccountInfoP2PParams, NSString;

__attribute__((visibility("hidden")))
@interface VKAccountInfo : VKDomain {
	BOOL _no_wall_replies;
	BOOL _own_posts_default;
	int _intro;
	NSDictionary* _globalSettings;
	NSString* _support_url;
	NSString* _phone;
	int _phone_status;
	NSString* _change_phone_url;
	NSString* _email;
	int _email_status;
	NSString* _change_email_url;
	VKAccountInfoP2PParams* _p2pParams;
}
@property(retain, nonatomic) VKAccountInfoP2PParams* p2pParams;
@property(retain, nonatomic) NSString* change_email_url;
@property(assign, nonatomic) int email_status;
@property(retain, nonatomic) NSString* email;
@property(retain, nonatomic) NSString* change_phone_url;
@property(assign, nonatomic) int phone_status;
@property(retain, nonatomic) NSString* phone;
@property(retain, nonatomic) NSString* support_url;
@property(retain, nonatomic) NSDictionary* globalSettings;
@property(assign, nonatomic) BOOL own_posts_default;
@property(assign, nonatomic) BOOL no_wall_replies;
@property(assign, nonatomic) int intro;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

