/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UILabel, UIColor, UIView, UIFont, NSString, NSTimer, NSDate, UIVisualEffectView, MBProgressHUDBackgroundLayer;
@protocol MBProgressHUDDelegate;

__attribute__((visibility("hidden")))
@interface MBProgressHUD : XXUnknownSuperclass {
	BOOL _useAnimation;
	SEL _methodForExecution;
	id _targetForExecution;
	id _objectForExecution;
	UILabel* _label;
	UILabel* _detailsLabel;
	BOOL _isFinished;
	CGAffineTransform _rotationTransform;
	BOOL _dimBackground;
	BOOL _taskInProgress;
	BOOL _removeFromSuperViewOnHide;
	BOOL _square;
	int _mode;
	int _animationType;
	UIView* _customView;
	id<MBProgressHUDDelegate> _delegate;
	NSString* _labelText;
	NSString* _detailsLabelText;
	float _opacity;
	float _xOffset;
	float _yOffset;
	float _margin;
	float _graceTime;
	float _minShowTime;
	UIFont* _labelFont;
	UIFont* _detailsLabelFont;
	float _progress;
	UIColor* _bgColor;
	UIColor* _labelColor;
	UIColor* _buttonTextColor;
	UIFont* _buttonFont;
	int _closeMode;
	UIView* _indicator;
	NSTimer* _graceTimer;
	NSTimer* _minShowTimer;
	NSDate* _showStarted;
	UIVisualEffectView* _visualEffectsView;
	MBProgressHUDBackgroundLayer* _background;
	CGSize _minSize;
	CGSize _size;
}
@property(assign, nonatomic) int closeMode;
@property(retain, nonatomic) UIFont* buttonFont;
@property(retain, nonatomic) UIColor* buttonTextColor;
@property(retain, nonatomic) UIColor* labelColor;
@property(retain, nonatomic) UIColor* bgColor;
@property(assign, nonatomic, getter=isSquare) BOOL square;
@property(assign, nonatomic) CGSize minSize;
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIFont* detailsLabelFont;
@property(retain, nonatomic) UIFont* labelFont;
@property(assign, nonatomic) BOOL removeFromSuperViewOnHide;
@property(assign, nonatomic) BOOL taskInProgress;
@property(assign, nonatomic) float minShowTime;
@property(assign, nonatomic) float graceTime;
@property(assign, nonatomic) BOOL dimBackground;
@property(assign, nonatomic) float margin;
@property(assign, nonatomic) float yOffset;
@property(assign, nonatomic) float xOffset;
@property(assign, nonatomic) float opacity;
@property(copy, nonatomic) NSString* detailsLabelText;
@property(copy, nonatomic) NSString* labelText;
@property(assign, nonatomic) id<MBProgressHUDDelegate> delegate;
@property(retain, nonatomic) UIView* customView;
@property(assign, nonatomic) int animationType;
@property(assign, nonatomic) int mode;
@property(assign, nonatomic) CGSize size;
@property(retain, nonatomic) MBProgressHUDBackgroundLayer* background;
@property(retain, nonatomic) UIVisualEffectView* visualEffectsView;
@property(retain, nonatomic) NSDate* showStarted;
@property(retain, nonatomic) NSTimer* minShowTimer;
@property(retain, nonatomic) NSTimer* graceTimer;
@property(retain, nonatomic) UIView* indicator;
+(id)allHUDsForView:(id)view;
+(id)HUDForView:(id)view;
+(unsigned)hideAllHUDsForView:(id)view animated:(BOOL)animated;
+(BOOL)hideHUDForView:(id)view animated:(BOOL)animated;
+(id)showHUDAddedTo:(id)to animated:(BOOL)animated;
-(void)actionClose:(id)close;
-(void)setTransformForOrientation:(int)orientation animated:(BOOL)animated;
-(void)deviceOrientationDidChange:(id)deviceOrientation;
-(void)unregisterFromNotifications;
-(void)registerForNotifications;
-(void)updateUIForKeypath:(id)keypath;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)observableKeypaths;
-(void)unregisterFromKVO;
-(void)registerForKVO;
-(void)layoutSubviews;
-(void)updateIndicators;
-(void)setupLabels;
-(void)cleanUp;
-(void)launchExecution;
-(void)showWhileExecuting:(SEL)executing onTarget:(id)target withObject:(id)object animated:(BOOL)animated;
-(void)done;
-(void)animationFinished:(id)finished finished:(BOOL)finished2 context:(void*)context;
-(void)hideUsingAnimation:(BOOL)animation;
-(void)showUsingAnimation:(BOOL)animation;
-(void)handleMinShowTimer:(id)timer;
-(void)handleGraceTimer:(id)timer;
-(void)hideDelayed:(id)delayed;
-(void)hide:(BOOL)hide afterDelay:(double)delay;
-(void)hide:(BOOL)hide;
-(void)show:(BOOL)show;
-(void)dealloc;
-(id)initWithWindow:(id)window;
-(id)initWithView:(id)view;
-(id)initWithFrame:(CGRect)frame;
@end

