/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AlbumPhotoFeedContext.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface PhotoStreamContext : AlbumPhotoFeedContext {
	NSMutableSet* _photosIdens;
}
@property(retain, nonatomic) NSMutableSet* photosIdens;
+(id)duplicate:(id)duplicate;
-(void)spawnCopy:(id)copy;
-(void)addPhotos:(id)photos;
-(void)dealloc;
@end

