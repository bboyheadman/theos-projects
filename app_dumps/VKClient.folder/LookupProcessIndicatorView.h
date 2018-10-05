/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class LookupProcessIndicatorLayer;

__attribute__((visibility("hidden")))
@interface LookupProcessIndicatorView : XXUnknownSuperclass {
	LookupProcessIndicatorLayer* _circlesLayer;
}
@property(assign, nonatomic) float centerCircleRadius;
@property(assign, nonatomic) float arcDistance;
@property(assign, nonatomic) float arcWidth;
@property(assign, nonatomic) unsigned circlesCount;
@property(retain, nonatomic) LookupProcessIndicatorLayer* circlesLayer;
-(void).cxx_destruct;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)willMoveToWindow:(id)window;
-(void)refreshAnimation;
-(void)layoutSublayersOfLayer:(id)layer;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
