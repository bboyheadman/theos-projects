/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMStoreContext.h"

@protocol UsersCacheHandler;

__attribute__((visibility("hidden")))
@interface VKMFetchContext : VKMStoreContext {
	id<UsersCacheHandler> _delegate;
}
@property(assign, nonatomic) id<UsersCacheHandler> delegate;
-(void)fetchMessagesForUpdate:(id)update complete:(id)complete;
-(id)loadSortedMessages:(id)messages inDialog:(id)dialog userIds:(id)ids;
-(id)loadSortedDialogs:(id)dialogs userIds:(id)ids;
-(void)fetchMessagesForDialog:(id)dialog after:(id)after limit:(int)limit complete:(id)complete;
-(id)loadMessages:(id)messages userIds:(id)ids;
-(void)fetchHeadsForDialogsAfter:(id)dialogsAfter limit:(int)limit complete:(id)complete;
-(id)loadDialogs:(id)dialogs userIds:(id)ids;
-(void)processUsersUpdate:(id)update complete:(id)complete;
-(id)fetchModelUsers:(id)users force:(BOOL)force;
-(void)checkUserIds:(id)ids;
-(id)sourceWithData:(id)data;
-(id)loadUsers:(id)users;
@end

