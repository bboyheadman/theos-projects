/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "TouchHighlightButton.h"

@class UIButton, UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface MasksButton : TouchHighlightButton {
	int _counter;
	UIButton* _counterLabel;
	UILabel* _titleLabel_vk;
	UIImageView* _imageView_vk;
	UIImageView* _backgroundImageView;
}
@property(assign, nonatomic) int counter;
@property(retain, nonatomic) UIImageView* backgroundImageView;
@property(retain, nonatomic) UIImageView* imageView_vk;
@property(retain, nonatomic) UILabel* titleLabel_vk;
@property(retain, nonatomic) UIButton* counterLabel;
+(id)button;
-(void).cxx_destruct;
-(void)updateHighlight:(BOOL)highlight animated:(BOOL)animated;
@end

