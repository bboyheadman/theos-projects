/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FeedSearchModel.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface WallSearchModel : FeedSearchModel {
	NSString* _domain;
	NSNumber* _owner_id;
}
@property(retain, nonatomic) NSNumber* owner_id;
@property(retain, nonatomic) NSString* domain;
+(id)wallSearchForQuery:(id)query session:(id)session;
-(id)feedRequestBuilderForContext:(id)context;
-(void)dealloc;
@end

