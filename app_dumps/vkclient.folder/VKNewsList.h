/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKNewsList : VKDomain {
	int _type;
	NSString* _title;
}
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) int type;
+(id)custom:(id)custom owner:(id)owner;
+(id)type:(int)type owner:(id)owner;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

