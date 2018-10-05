/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PageCellWithTableViewDidSelectAudioDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSString, UICollectionView, AudioAudiosBlock;
@protocol AudioCellDelegate;

__attribute__((visibility("hidden")))
@interface AudioAudiosPagingView : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate, PageCellWithTableViewDidSelectAudioDelegate> {
	id<AudioCellDelegate> _delegate;
	AudioAudiosBlock* _audioBlock;
	UICollectionView* _collectionView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UICollectionView* collectionView;
@property(retain, nonatomic) AudioAudiosBlock* audioBlock;
@property(assign, nonatomic) __weak id<AudioCellDelegate> delegate;
+(float)height;
-(void).cxx_destruct;
-(void)pageCellWithTableView:(id)tableView didSelectAudio:(id)audio;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(id)initWithFrame:(CGRect)frame;
@end
