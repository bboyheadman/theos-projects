/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_ShuffleableTracksProvider.h"
#import "VK_Music-Structs.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VK_AlbumTracksProvider : VK_ShuffleableTracksProvider {
	NSString* _albumId;
	NSArray* _customTracks;
}
@property(retain, nonatomic) NSArray* customTracks;
@property(readonly, assign, nonatomic) NSString* albumId;
-(void).cxx_destruct;
-(id)createTrackListProviderFromTrack:(id)track;
-(id)prepareTracksData:(id)data;
-(id)internalPrepareCustomData:(id)data;
-(id)internalUpdateDataAfterMerge:(id)merge;
-(id)internalGetDataFromRequest:(id)request andRef:(id*)ref;
-(id)internalCreatePagedRequestWithShuffleEnabled:(BOOL)shuffleEnabled;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithAlbumId:(id)albumId;
@end
