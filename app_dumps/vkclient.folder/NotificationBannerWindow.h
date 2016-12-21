/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIView;
@protocol NotificationBannerWindowDelegate;

__attribute__((visibility("hidden")))
@interface NotificationBannerWindow : XXUnknownSuperclass {
	float bannerHeight;
	BOOL visible;
	float initialAngle;
	id<NotificationBannerWindowDelegate> _displayDelegate;
	UIView* _contentView;
}
@property(assign, nonatomic) id<NotificationBannerWindowDelegate> displayDelegate;
@property(retain, nonatomic) UIView* contentView;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)panGestureRecognized:(id)recognized;
-(void)hideImmediatly:(BOOL)immediatly;
-(void)showContentView:(id)view;
-(void)hideAfterDelay;
-(void)clearTimeout;
-(void)performHide;
-(void)toggle:(BOOL)toggle animated:(BOOL)animated;
-(void)becomeKeyWindow;
-(void)notificationDidRotate:(id)notification;
-(void)dealloc;
-(id)initWithHeight:(float)height;
@end

