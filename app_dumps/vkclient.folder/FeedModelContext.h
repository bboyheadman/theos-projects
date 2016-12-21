/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModelContext.h"

@class NSIndexPath, NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FeedModelContext : ListModelContext {
	BOOL _cache;
	BOOL _canIgnoreItems;
	id _from;
	NSIndexPath* _reloadPath;
	NSMutableSet* _expandedPosts;
	NSMutableDictionary* _sources;
	NSMutableDictionary* _activities;
	NSMutableDictionary* _postCaptions;
}
@property(retain, nonatomic) NSMutableDictionary* postCaptions;
@property(retain, nonatomic) NSMutableDictionary* activities;
@property(retain, nonatomic) NSMutableDictionary* sources;
@property(assign, nonatomic) BOOL canIgnoreItems;
@property(assign, nonatomic) BOOL cache;
@property(retain, nonatomic) NSMutableSet* expandedPosts;
@property(retain, nonatomic) NSIndexPath* reloadPath;
@property(retain, nonatomic) id from;
-(void)addSources:(id)sources;
-(void)spawnCopy:(id)copy;
-(id)init;
-(void)dealloc;
@end

