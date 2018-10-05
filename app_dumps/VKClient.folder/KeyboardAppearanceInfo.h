/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface KeyboardAppearanceInfo : XXUnknownSuperclass {
	unsigned _appearanceEventType;
	int _animationCurve;
	double _animationDuration;
	CGRect _keyboardBeginFrame;
	CGRect _keyboardEndFrame;
}
@property(readonly, assign, nonatomic) CGRect keyboardEndFrame;
@property(readonly, assign, nonatomic) CGRect keyboardBeginFrame;
@property(readonly, assign, nonatomic) int animationCurve;
@property(readonly, assign, nonatomic) double animationDuration;
@property(readonly, assign, nonatomic) unsigned appearanceEventType;
-(id)initWithEventType:(unsigned)eventType animationDuration:(double)duration animationCurve:(int)curve keyboardBeginFrame:(CGRect)frame keyboardEndFrame:(CGRect)frame5;
@end
