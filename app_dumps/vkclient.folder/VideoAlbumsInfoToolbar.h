/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VideoAlbumContext, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface VideoAlbumsInfoToolbar : XXUnknownSuperclass {
	VideoAlbumContext* _context;
	UISegmentedControl* _segmentedControl;
}
@property(retain, nonatomic) UISegmentedControl* segmentedControl;
@property(retain, nonatomic) VideoAlbumContext* context;
+(id)toolbarForAlbumsInfo;
-(void)handleSegmentActionWithContext:(id)context;
-(id)controllerForSection:(int)section main:(id)main;
-(void)selectSection:(int)section;
-(void)enumerateSegments:(id)segments;
-(void)renderAlbumsContext:(id)context;
-(void)dealloc;
@end

