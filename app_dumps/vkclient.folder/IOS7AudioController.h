/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioController.h"
#import "vkclient-Structs.h"

@class UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface IOS7AudioController : AudioController {
	UIImageView* _cover;
	UIView* _hostView;
}
@property(retain, nonatomic) UIView* hostView;
@property(retain, nonatomic) UIImageView* cover;
-(void)notificationArtwork:(id)artwork;
-(void)update;
-(void)attach:(id)attach;
-(void)updateCoverImage;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(int)VKMControllerStatusBarStyle;
-(BOOL)dark;
-(void)dealloc;
@end
