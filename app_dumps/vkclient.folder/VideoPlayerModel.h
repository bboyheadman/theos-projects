/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ItemModel.h"

@class VKIdentity, VKVideo;

__attribute__((visibility("hidden")))
@interface VideoPlayerModel : ItemModel {
	VKIdentity* _videoIden;
}
@property(retain, nonatomic) VKIdentity* videoIden;
@property(readonly, retain, nonatomic) VKVideo* item;
+(id)videoIden:(id)iden session:(id)session;
+(id)video:(id)video session:(id)session;
-(void).cxx_destruct;
-(void)handleAddDoc:(id)doc :(id)arg2;
-(void)handleDeleteVideo:(id)video :(id)arg2;
-(void)handleAddVideoToAlbum:(id)album :(id)arg2;
-(void)handleAddVideo:(id)video :(id)arg2;
-(void)handleDeleteComment:(id)comment :(id)arg2;
-(void)handleAddComment:(id)comment :(id)arg2;
-(void)handleRepost:(id)repost :(id)arg2;
-(void)handleLike:(id)like :(id)arg2;
-(void)refreshItem:(id)item;
-(id)process:(id)process;
-(id)request;
-(void)registerForEvents:(id)events;
@end

