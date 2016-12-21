/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StoreStickerItemCell.h"
#import "StoreProductItemCell.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface StoreVotesItemCell : StoreStickerItemCell <StoreProductItemCell> {
	float _fixedButtonWidth;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float fixedButtonWidth;
+(id)purchaseText;
+(void)prerender:(id)prerender;
-(float)centerOffsetX;
-(float)imageWidth;
-(float)imageSize;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

