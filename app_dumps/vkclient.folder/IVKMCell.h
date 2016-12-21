/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "ThumbnailViewDelegate.h"

@class VKRenderable;
@protocol VKMNavDelegate;

@protocol IVKMCell <NSObject, ThumbnailViewDelegate>
@property(assign, nonatomic) id<VKMNavDelegate> delegate;
@property(readonly, retain, nonatomic) VKRenderable* domain;
+(void)prerender:(id)prerender;
-(void)refresh;
-(BOOL)selected;
-(void)detach;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)addOpaque:(id)opaque;
@end

