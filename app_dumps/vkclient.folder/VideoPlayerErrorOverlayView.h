/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class NSString, UIButton, UIVisualEffectView, UILabel;

__attribute__((visibility("hidden")))
@interface VideoPlayerErrorOverlayView : XXUnknownSuperclass {
	NSString* _errorTitle;
	UIButton* _retryButton;
	UIVisualEffectView* _retryButtonBackgroundBlur;
	UILabel* _titleLabel;
}
@property(copy, nonatomic) NSString* errorTitle;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIVisualEffectView* retryButtonBackgroundBlur;
@property(retain, nonatomic) UIButton* retryButton;
-(void).cxx_destruct;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

