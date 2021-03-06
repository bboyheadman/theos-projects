/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModelContext.h"

@class NSString, FeedExtras, NSMutableSet;

__attribute__((visibility("hidden")))
@interface DiscoverModelContext : ListModelContext {
	BOOL _clearIndex;
	id _marker;
	NSString* _from;
	FeedExtras* _feedExtras;
	NSMutableSet* _discoverViewPosts;
	NSMutableSet* _detailViewPosts;
	double _resetTimeout;
}
@property(retain, nonatomic) NSMutableSet* detailViewPosts;
@property(retain, nonatomic) NSMutableSet* discoverViewPosts;
@property(assign, nonatomic) BOOL clearIndex;
@property(assign, nonatomic) double resetTimeout;
@property(retain, nonatomic) FeedExtras* feedExtras;
@property(retain, nonatomic) NSString* from;
@property(retain, nonatomic) id marker;
-(void).cxx_destruct;
-(void)spawnSetup:(id)setup;
-(void)spawnCopy:(id)copy;
@end

