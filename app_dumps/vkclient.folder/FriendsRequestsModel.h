/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"


__attribute__((visibility("hidden")))
@interface FriendsRequestsModel : LoadingModel {
	BOOL _suggested;
	int _currentFilter;
}
@property(assign, nonatomic) int currentFilter;
@property(assign, nonatomic) BOOL suggested;
-(void)handleDeleteRequests:(id)requests :(id)arg2;
-(void)handleFriend:(id)aFriend :(id)arg2;
-(void)registerForEvents:(id)events;
-(void)discovered:(id)discovered;
-(BOOL)shouldLoad:(id)load;
-(void)updateIndexSections:(id)sections withContext:(id)context;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)spawnContext:(id)context;
-(id)countKey;
-(void)setFilter:(int)filter;
-(id)setupFilter:(int)filter;
-(id)setupSuggested:(BOOL)suggested;
-(BOOL)isSameModel:(id)model;
@end

