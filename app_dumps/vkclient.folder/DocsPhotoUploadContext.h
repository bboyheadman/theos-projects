/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DocsUploadContext.h"

@class VKPPAssetData;

__attribute__((visibility("hidden")))
@interface DocsPhotoUploadContext : DocsUploadContext {
	VKPPAssetData* _assetData;
}
@property(retain) VKPPAssetData* assetData;
+(id)docsPhotoContextWithSession:(id)session assetData:(id)data;
-(void)loadUploadData:(id)data;
-(void)makeThumbnail;
-(void)dealloc;
@end

