/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMToolbarController.h"

@class LikesModel;

__attribute__((visibility("hidden")))
@interface LikesListController : VKMToolbarController {
}
@property(retain, nonatomic) LikesModel* model;
-(void)segmentedControlChanged:(id)changed;
-(BOOL)isToolbarHidden;
-(id)titleForSegmentAtIndex:(unsigned)index;
-(unsigned)numberOfSegments;
-(void)VKMTableUpdatedIndex;
-(void)viewWillAppear:(BOOL)view;
@end

