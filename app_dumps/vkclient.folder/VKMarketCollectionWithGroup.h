/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainWithCustomCellClass.h"

@class VKMarketCollection, VKGroup;

__attribute__((visibility("hidden")))
@interface VKMarketCollectionWithGroup : VKDomainWithCustomCellClass {
	VKGroup* _group;
}
@property(readonly, retain, nonatomic) VKGroup* group;
@property(readonly, retain, nonatomic) VKMarketCollection* domain;
+(id)from:(id)from group:(id)group;
-(void)dealloc;
@end

