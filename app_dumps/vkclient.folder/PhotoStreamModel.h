/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoAlbumModel.h"


__attribute__((visibility("hidden")))
@interface PhotoStreamModel : PhotoAlbumModel {
}
+(BOOL)forceIsAdultCheck;
-(void)updateContext:(id)context withLoadedItems:(id)loadedItems andData:(id)data;
-(void)handlePhotoUpload:(id)upload :(id)arg2;
-(void)handleDeletePhoto:(id)photo :(id)arg2;
-(BOOL)isProfileAlbumFor:(id)aFor;
-(void)registerForEvents:(id)events;
-(id)process:(id)process;
-(id)itemsToAppend:(id)append to:(id)to context:(id)context;
-(id)spawnContext:(id)context;
@end

