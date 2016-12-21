/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIColor, NSArray, UISlider;
@protocol SketchBrushViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SketchBrushViewController : XXUnknownSuperclass {
	id<SketchBrushViewControllerDelegate> _delegate;
	UIColor* _color;
	NSArray* _buttons;
	UISlider* _slider;
	UIColor* _baseColor;
}
@property(readonly, assign, nonatomic) UIColor* color;
@property(assign, nonatomic) __weak id<SketchBrushViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) UIColor* baseColor;
@property(retain, nonatomic) UISlider* slider;
@property(retain, nonatomic) NSArray* buttons;
-(void).cxx_destruct;
-(void)updateSliderThumbImage;
-(id)renderThumbImage;
-(void)sliderDidEndChanging:(id)slider;
-(void)sliderChanged:(id)changed;
-(void)selectBrush:(float)brush;
-(void)buttonAction:(id)action;
-(void)loadView;
-(CGSize)partSize;
-(CGSize)preferredContentSize;
-(BOOL)isEraser;
-(BOOL)isWhite;
-(id)initWithColor:(id)color;
@end

