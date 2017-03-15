/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAppearanceContainer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"

@class __MarqueeLabel, NSArray, LNPopupItem, NSString, UIView, UIColor, NSDictionary, UIToolbar, UIImage;

__attribute__((visibility("hidden")))
@interface LNPopupBar : XXUnknownSuperclass <UIAppearanceContainer> {
	BOOL _delaysBarButtonItemLayout;
	UIView* _titlesView;
	__MarqueeLabel* _titleLabel;
	__MarqueeLabel* _subtitleLabel;
	BOOL _needsLabelsLayout;
	UIColor* _userTintColor;
	UIColor* _userBackgroundColor;
	int _userBarStyle;
	UIColor* _userBarTintColor;
	LNPopupItem* _popupItem;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	NSDictionary* _titleTextAttributes;
	NSDictionary* _subtitleTextAttributes;
	UIToolbar* _backgroundView;
	int _systemBarStyle;
	UIColor* _systemTintColor;
	UIColor* _systemBarTintColor;
	UIColor* _systemBackgroundColor;
	NSString* _title;
	NSString* _subtitle;
	UIToolbar* _toolbar;
	UIView* _highlightView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIToolbar* backgroundView;
@property(copy, nonatomic) NSDictionary* subtitleTextAttributes;
@property(copy, nonatomic) NSDictionary* titleTextAttributes;
@property(retain, nonatomic) UIImage* shadowImage;
@property(retain, nonatomic) UIImage* backgroundImage;
@property(retain, nonatomic) UIColor* barTintColor;
@property(assign, nonatomic) int barStyle;
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;
@property(copy, nonatomic) NSArray* rightBarButtonItems;
@property(copy, nonatomic) NSArray* leftBarButtonItems;
@property(retain, nonatomic) UIView* highlightView;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) __weak LNPopupItem* popupItem;
@property(retain, nonatomic) UIColor* systemBackgroundColor;
@property(retain, nonatomic) UIColor* systemBarTintColor;
@property(retain, nonatomic) UIColor* systemTintColor;
@property(assign, nonatomic) int systemBarStyle;
-(void).cxx_destruct;
-(void)_removeAnimationFromBarItems;
-(void)_layoutBarButtonItems;
-(void)_delayBarButtonLayout;
-(void)_setTitleViewMarqueesPaused:(BOOL)paused;
-(void)_setTitleLableFontsAccordingToBarStyleAndTint;
-(void)_setNeedsTitleLayout;
-(void)_layoutTitles;
-(id)_newMarqueeLabel;
-(void)setBackgroundColor:(id)color;
-(id)backgroundColor;
-(void)setTintColor:(id)color;
-(id)tintColor;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)setHighlighted:(BOOL)highlighted;
@end
