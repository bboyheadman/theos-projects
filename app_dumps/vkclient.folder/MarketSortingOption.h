/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MarketSortingOption : XXUnknownSuperclass {
	NSString* _title;
	MarketSorting_t _sorting;
}
@property(readonly, copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) MarketSorting_t sorting;
+(id)sortingOptionWithKind:(MarketSorting_t)kind title:(id)title;
-(void)dealloc;
-(id)initWithKind:(MarketSorting_t)kind title:(id)title;
@end

