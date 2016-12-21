/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKImageFilter.h"
#import "vkclient-Structs.h"


__attribute__((visibility("hidden")))
@interface VKImageFilterScale : VKImageFilter {
	CGSize _size;
	XXStruct_rO8FTC _settings;
}
@property(readonly, assign, nonatomic) XXStruct_rO8FTC settings;
@property(readonly, assign, nonatomic) CGSize size;
+(CGRect)rectToDrawImageWithSize:(CGSize)size canvasSize:(CGSize)size2 mode:(int)mode;
+(CGRect)rectToDrawImageWithSize:(CGSize)size canvasSize:(CGSize)size2 settings:(XXStruct_rO8FTC)settings;
+(id)scaleToSize:(CGSize)size withMode:(int)mode;
+(id)scaleToSize:(CGSize)size withSettings:(XXStruct_rO8FTC)settings;
-(id)infoString;
-(void)process:(id)process inDrawingContext:(CGContextRef)drawingContext;
-(id)contextForImage:(id)image;
-(id)initWithSize:(CGSize)size mode:(int)mode;
-(id)initWithSize:(CGSize)size settings:(XXStruct_rO8FTC)settings;
@end

