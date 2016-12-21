/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class VKPhotoAlbum, AlbumPhotoFeedContext;

__attribute__((visibility("hidden")))
@interface PhotoAlbumModel : ListModel {
	VKPhotoAlbum* _album;
}
@property(retain, nonatomic) VKPhotoAlbum* album;
@property(retain, nonatomic) AlbumPhotoFeedContext* lastContext;
+(BOOL)forceIsAdultCheck;
-(id)indexPathForInfoCell;
-(void)updateWithContext:(id)context;
-(BOOL)isUserAlbum:(id)album;
-(BOOL)isUserAlbumForOid:(id)oid;
-(BOOL)isAlbumOfOwner:(id)owner;
-(BOOL)isOwnAlbumIdentity:(id)identity;
-(id)browsingContextForPhoto:(id)photo;
-(void)updateContext:(id)context withLoadedItems:(id)loadedItems andData:(id)data;
-(id)process:(id)process;
-(id)listFromData:(id)data;
-(id)requestForContext:(id)context;
-(id)spawnContext:(id)context;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)initialIndex;
-(id)renderObject:(id)object withContext:(id)context;
-(id)componentForObject:(id)object withContext:(id)context;
-(id)countKey;
-(id)setupPhotoAlbum:(id)album;
-(void)dealloc;
@end

