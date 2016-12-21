/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITapGestureRecognizer, UIView, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PopupWindowView : XXUnknownSuperclass {
	UIView* _contentView;
	UITapGestureRecognizer* _tapToCloseGestureRecognizer;
	UIPanGestureRecognizer* _swipeToCloseGestureRecognizer;
}
@property(readonly, retain, nonatomic) UIPanGestureRecognizer* swipeToCloseGestureRecognizer;
@property(readonly, retain, nonatomic) UITapGestureRecognizer* tapToCloseGestureRecognizer;
@property(readonly, assign, nonatomic) UIView* contentView;
-(void)present:(BOOL)present animated:(BOOL)animated animations:(id)animations completion:(id)completion;
-(void)gesturePan:(id)pan;
-(void)gestureTap:(id)tap;
-(id)popupWindow;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithContentView:(id)contentView;
@end

