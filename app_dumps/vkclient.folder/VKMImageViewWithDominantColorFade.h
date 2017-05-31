/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMImageView.h"
#import "vkclient-Structs.h"

@class UIView, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKMImageViewWithDominantColorFade : VKMImageView {
	UIView* _fadeView;
	NSObject<OS_dispatch_queue>* _colorCubeQueue;
}
@property(assign, nonatomic) BOOL fadeViewHidden;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* colorCubeQueue;
@property(retain, nonatomic) UIView* fadeView;
-(void).cxx_destruct;
-(void)updateColorFadeViewForCurrentImage;
-(void)changeImage:(id)image animated:(BOOL)animated;
-(id)initWithFrame:(CGRect)frame;
@end
