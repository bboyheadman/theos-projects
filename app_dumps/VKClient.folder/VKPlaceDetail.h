/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"

@class VKPlace, VKGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VKPlaceDetail : VKDomainDerived {
	VKGroup* _group;
	NSString* _groupActivity;
	NSArray* _checkinUsers;
}
@property(retain, nonatomic) NSArray* checkinUsers;
@property(retain, nonatomic) NSString* groupActivity;
@property(retain, nonatomic) VKGroup* group;
@property(retain, nonatomic) VKPlace* domain;
-(void).cxx_destruct;
@end
