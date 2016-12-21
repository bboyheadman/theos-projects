/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Renderer.h"

@class VKFriendRequest;

__attribute__((visibility("hidden")))
@interface FriendRequestRenderer : Renderer {
}
@property(retain, nonatomic) VKFriendRequest* domain;
+(void)build:(id)build;
+(void)prepareLayout:(id)layout;
+(void)initialize;
+(id)rendererElements;
-(void)actionHide:(id)hide;
-(void)actionAdd:(id)add;
-(void)actionMutual:(id)mutual;
-(void)setupCell:(id)cell;
@end

