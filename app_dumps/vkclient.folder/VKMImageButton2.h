/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMImageButton.h"
#import "vkclient-Structs.h"

@class VKMImageLoader;

__attribute__((visibility("hidden")))
@interface VKMImageButton2 : VKMImageButton {
	VKMImageLoader* _loader2;
	unsigned _targetState;
}
@property(assign, nonatomic) unsigned targetState;
@property(readonly, retain, nonatomic) VKMImageLoader* loader2;
-(void)reuse;
-(void)loader:(id)loader complete:(id)complete;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

