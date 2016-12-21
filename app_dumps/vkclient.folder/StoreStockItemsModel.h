/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MultiIndexModel.h"

@class NSArray, VKGiftsContext, GiftsStatContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface StoreStockItemsModel : MultiIndexModel {
	int _productType;
	NSArray* _banners;
	VKGiftsContext* _gifts_context;
	GiftsStatContext* _gifts_stats_context;
	NSDictionary* _indexesMap;
}
@property(retain, nonatomic) GiftsStatContext* gifts_stats_context;
@property(retain, nonatomic) VKGiftsContext* gifts_context;
@property(retain, nonatomic) NSArray* banners;
@property(assign, nonatomic) int productType;
@property(retain) NSDictionary* indexesMap;
+(id)stockSections;
-(void)handleGift:(id)gift :(id)arg2;
-(void)handleActivate:(id)activate :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)indexForMode:(unsigned)mode;
-(id)countKeyForMode:(unsigned)mode;
-(unsigned)modes;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)withProductType:(int)productType;
-(void)dealloc;
@end

