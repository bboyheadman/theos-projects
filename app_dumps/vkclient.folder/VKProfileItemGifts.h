/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKProfileInfoItem.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface VKProfileItemGifts : VKProfileInfoItem {
	NSArray* _gifts;
	int _total;
}
@property(assign, nonatomic) int total;
@property(retain, nonatomic) NSArray* gifts;
+(id)gifts:(id)gifts total:(int)total;
-(void)dealloc;
@end

