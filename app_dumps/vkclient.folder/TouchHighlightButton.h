/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"


__attribute__((visibility("hidden")))
@interface TouchHighlightButton : XXUnknownSuperclass {
	BOOL _highlightsTouches;
	BOOL _animated;
	float _highlightStraight;
}
@property(assign, nonatomic) BOOL animated;
@property(assign, nonatomic) float highlightStraight;
@property(assign, nonatomic) BOOL highlightsTouches;
-(CGSize)intrinsicContentSize;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)updateHighlight;
-(void)updateHighlight:(BOOL)highlight animated:(BOOL)animated;
-(id)initWithFrame:(CGRect)frame;
@end
