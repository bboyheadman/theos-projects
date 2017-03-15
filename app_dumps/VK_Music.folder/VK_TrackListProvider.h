/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_DataWithTracksProvider.h"

@class NSArray, VK_TrackListProviderOptions;

@protocol VK_TrackListProvider <VK_DataWithTracksProvider>
@property(readonly, assign, nonatomic) id tracksFilter;
@property(readonly, assign, nonatomic) VK_TrackListProviderOptions* options;
@property(readonly, assign, nonatomic) NSArray* tracks;
-(id)previousTrackFromTrack:(id)track withLoopMode:(BOOL)loopMode;
-(id)nextTrackFromTrack:(id)track withLoopMode:(BOOL)loopMode;
-(BOOL)canPlayTrack:(id)track;
-(id)trackAtIndex:(unsigned)index;
-(id)indexForTrack:(id)track;
-(void)fetchMoreTracksIfNeededFromTrack:(id)track;
-(void)needToReloadTracksProvider;
-(void)reloadTracksProviderIfNeeded;
-(void)reloadTracksProvider;
@end
