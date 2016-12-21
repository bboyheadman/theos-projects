/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMController.h"
#import "vkclient-Structs.h"
#import "MessageRendererDelegate.h"

@class UIScrollView, VKMessage, NSString, NSNumber, MessageRenderer;

__attribute__((visibility("hidden")))
@interface MessageController : VKMController <MessageRendererDelegate> {
	NSNumber* _did;
	VKMessage* _message;
	MessageRenderer* _renderer;
	UIScrollView* _scroll;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKMessage* message;
@property(retain, nonatomic) NSNumber* did;
@property(retain, nonatomic) UIScrollView* scroll;
@property(retain, nonatomic) MessageRenderer* renderer;
-(void)actionDialog:(id)dialog;
-(id)VKMControllerStatsRef;
-(id)messageNavigation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)VKMControllerChromeInsetsApply;
-(void)loadView;
-(id)setupMesssage:(id)messsage inDialog:(id)dialog;
-(void)dealloc;
@end

