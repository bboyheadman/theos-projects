/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RecentOrderList : XXUnknownSuperclass {
	NSMutableArray* _array;
	NSString* _userDefaultsKey;
	unsigned _maxCount;
}
@property(assign, nonatomic) unsigned maxCount;
@property(copy, nonatomic) NSString* userDefaultsKey;
@property(retain, nonatomic) NSMutableArray* array;
-(void).cxx_destruct;
-(void)save;
-(void)cleanAll;
-(BOOL)contains:(id)contains;
-(void)insertOrHoist:(id)hoist;
-(id)initWithUserDefaultsKey:(id)userDefaultsKey maxCount:(unsigned)count;
@end
