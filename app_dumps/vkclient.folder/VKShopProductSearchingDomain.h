/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainWithCustomCellClass.h"

@class VKShopProduct;

__attribute__((visibility("hidden")))
@interface VKShopProductSearchingDomain : VKDomainWithCustomCellClass {
	unsigned _status;
}
@property(assign, nonatomic) unsigned status;
@property(readonly, retain, nonatomic) VKShopProduct* domain;
+(id)from:(id)from status:(unsigned)status;
@end

