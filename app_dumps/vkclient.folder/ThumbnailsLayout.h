/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RenderLayout.h"
#import "vkclient-Structs.h"


__attribute__((visibility("hidden")))
@interface ThumbnailsLayout : RenderLayout {
	BOOL* zooms;
	int* sizes;
}
-(void)layout:(id)layout maxw:(float)maxw maxh:(float)maxh minh:(float)minh margin:(float)margin scale:(float)scale ox:(float)ox oy:(float)oy leftAlignment:(BOOL)alignment;
-(void)dealloc;
-(id)initWithCount:(unsigned)count;
@end

