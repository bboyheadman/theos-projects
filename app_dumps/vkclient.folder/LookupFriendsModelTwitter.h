/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LookupFriendsModel.h"

@class TwitterClient, NSArray, TwitterProfile;

__attribute__((visibility("hidden")))
@interface LookupFriendsModelTwitter : LookupFriendsModel {
	BOOL twitterTouched;
	TwitterClient* _twitterClient;
	NSArray* _friends;
	TwitterProfile* _myProfile;
}
@property(retain, nonatomic) TwitterClient* twitterClient;
@property(retain, nonatomic) TwitterProfile* myProfile;
@property(retain, nonatomic) NSArray* friends;
-(id)lookupResponseWithData:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(BOOL)shouldLoad:(id)load;
-(id)combineFriends:(id)friends withFollowers:(id)followers;
-(void)loadFriends;
-(void)verifyCredentials;
-(void)reset;
-(void)touch;
-(id)initWithSession:(id)session;
-(void)dealloc;
@end

