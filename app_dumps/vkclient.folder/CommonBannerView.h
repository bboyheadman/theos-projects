/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UILabel, VKMImageView, UIButton;

__attribute__((visibility("hidden")))
@interface CommonBannerView : XXUnknownSuperclass {
	UIEdgeInsets textInsets;
	VKMImageView* _thumb;
	UIButton* _buttonClose;
	UILabel* _bannerText;
}
@property(retain, nonatomic) UIButton* buttonClose;
@property(retain, nonatomic) VKMImageView* thumb;
@property(retain, nonatomic) UILabel* bannerText;
+(id)commonBannerView;
-(void)render:(id)render;
-(void)layoutSubviews;
-(void)dealloc;
@end

