/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"


__attribute__((visibility("hidden")))
@interface FriendListsModel : LoadingModel {
	BOOL _needSystem;
}
@property(assign, nonatomic) BOOL needSystem;
-(id)setupSystem:(BOOL)system;
-(void)handleEdit:(id)edit :(id)arg2;
-(void)handleAdd:(id)add :(id)arg2;
-(void)handleDelete:(id)aDelete :(id)arg2;
-(void)registerForEvents:(id)events;
-(void)cachedIndexForContext:(id)context withCompletion:(id)completion;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)countKey;
@end
