/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewComponent.h"
#import "vkclient-Structs.h"

@class ShopProductGalleryCollectionViewComponentState;

__attribute__((visibility("hidden")))
@interface ShopProductGalleryCollectionViewComponent : UICollectionViewComponent {
}
@property(retain, nonatomic) ShopProductGalleryCollectionViewComponentState* state;
+(id)componentWithPhotos:(id)photos mediator:(id)mediator;
+(id)imageComponentWithPhoto:(id)photo size:(CGSize)size tapCallback:(id)callback;
@end

