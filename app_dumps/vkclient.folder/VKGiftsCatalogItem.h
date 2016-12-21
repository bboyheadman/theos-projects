/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSNumber, VKGift, NSString, VKGiftsContext;

__attribute__((visibility("hidden")))
@interface VKGiftsCatalogItem : VKDomain {
	BOOL _disabled;
	VKGift* _gift;
	NSNumber* _price;
	NSString* _price_str;
	NSString* _descr;
	NSString* _section;
	NSNumber* _gifts_left;
	NSNumber* _real_price;
	VKGiftsContext* _context;
}
@property(assign, nonatomic) BOOL disabled;
@property(retain, nonatomic) VKGiftsContext* context;
@property(retain, nonatomic) NSNumber* real_price;
@property(retain, nonatomic) NSNumber* gifts_left;
@property(retain, nonatomic) NSString* section;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) NSString* price_str;
@property(retain, nonatomic) NSNumber* price;
@property(retain, nonatomic) VKGift* gift;
-(Class)cellClass;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

