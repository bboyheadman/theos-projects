/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModelContext.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface CheckinsContext : ListModelContext {
	NSMutableSet* _userIds;
}
@property(retain, nonatomic) NSMutableSet* userIds;
-(void)spawnCopy:(id)copy;
-(void)dealloc;
@end

