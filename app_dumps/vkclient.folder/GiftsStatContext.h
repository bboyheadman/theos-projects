/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StatContext.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GiftsStatContext : StatContext {
	NSString* _source;
}
@property(copy, nonatomic) NSString* source;
+(id)contextWithStatName:(id)statName source:(id)source;
-(id)statsEventWithAction:(id)action;
-(void)dealloc;
@end

