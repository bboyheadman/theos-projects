/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKAPIAppGenre : VKDomain {
	NSString* _name;
	unsigned _type;
	unsigned _count;
}
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, assign, nonatomic) unsigned type;
@property(readonly, copy, nonatomic) NSString* name;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end
