/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LookupFriendsModel.h"

@class FacebookContactsLoader, NSArray;

__attribute__((visibility("hidden")))
@interface LookupFriendsModelFacebook : LookupFriendsModel {
	FacebookContactsLoader* _loader;
	NSArray* _friendIdentifiers;
}
@property(retain, nonatomic) FacebookContactsLoader* loader;
@property(retain, nonatomic) NSArray* friendIdentifiers;
-(void).cxx_destruct;
-(void)loadFriendsIdentifiers;
-(id)lookupResponseWithData:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(BOOL)shouldLoad:(id)load;
-(void)activate;
-(void)reset;
@end

