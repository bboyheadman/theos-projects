/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIButton, UILabel;

@interface VKPPNoAccessView : XXUnknownSuperclass {
	UIButton* _openSettingsButton;
	UILabel* _title;
	UILabel* _subtitle;
}
@property(retain, nonatomic) UILabel* subtitle;
@property(retain, nonatomic) UILabel* title;
@property(retain, nonatomic) UIButton* openSettingsButton;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)updateWithTitle:(id)title subtitle:(id)subtitle buttonTitle:(id)title3;
-(id)initWithFrame:(CGRect)frame;
@end

