/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface LookupFriendsResponse : XXUnknownSuperclass {
	NSArray* _foundUsers;
	NSArray* _notFoundUsers;
}
@property(retain, nonatomic) NSArray* notFoundUsers;
@property(retain, nonatomic) NSArray* foundUsers;
+(id)addressBookLookupResponseWithData:(id)data combinedWithRecords:(id)records;
+(id)responseWithFacebookLookupResponse:(id)facebookLookupResponse;
+(id)responseWithGmailLookupResponse:(id)gmailLookupResponse combinedWithFeed:(id)feed;
+(id)responseWithTwitterLookupResponse:(id)twitterLookupResponse combinedWithFriends:(id)friends;
-(void)dealloc;
-(id)initWithAddressBookLookupResponseWithData:(id)data combinedWithRecords:(id)records;
-(id)initWithFacebookLookupResponse:(id)facebookLookupResponse;
-(id)initWithGmailLookupResponse:(id)gmailLookupResponse combinedWithFeed:(id)feed;
-(id)initWithTwitterLookupResponse:(id)twitterLookupResponse combinedWithFriends:(id)friends;
@end

