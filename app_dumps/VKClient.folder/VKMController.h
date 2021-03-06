/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMNavProxyDelegate.h"
#import "VKClient-Structs.h"
#import "ModelObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ModelRenderDelegate.h"
#import "VKMNavDelegate.h"

@class UIBarButtonItem, Model, MainModel, NSString, VKSelector, VKMNavResolver;

__attribute__((visibility("hidden")))
@interface VKMController : XXUnknownSuperclass <VKMNavDelegate, VKMNavProxyDelegate, ModelObserver, ModelRenderDelegate> {
	BOOL viewAppeared;
	MainModel* _main;
	Model* _model;
	UIBarButtonItem* _autocloseButton;
	int _visibility;
	VKMNavResolver* _resolver;
	int _statsContext;
	UIEdgeInsets _chromeInsets;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int statsContext;
@property(assign, nonatomic) UIEdgeInsets chromeInsets;
@property(retain, nonatomic) VKMNavResolver* resolver;
@property(assign, nonatomic) int visibility;
@property(readonly, retain, nonatomic) VKSelector* vkSelector;
@property(retain, nonatomic) UIBarButtonItem* autocloseButton;
@property(retain, nonatomic) Model* model;
@property(retain, nonatomic) MainModel* main;
+(id)main:(id)main model:(id)model;
-(void).cxx_destruct;
-(BOOL)VKMControllerModalOnly;
-(id)VKMControllerStatsRef;
-(void)VKMActivateAfterWindowDismiss;
-(BOOL)VKMDeactivateForWindowPresentation;
-(id)model:(id)model componentRenderContextForObject:(id)object context:(id)context;
-(id)model:(id)model componentForObject:(id)object withContext:(id)context;
-(id)renderContextForModel:(id)model;
-(id)model:(id)model renderObject:(id)object withContext:(id)context;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(int)VKMControllerModalAutoClosePosition;
-(BOOL)VKMControllerModalAutoClose;
-(void)VKMControllerPrePhotoFeed;
-(void)VKMControllerPrePush;
-(void)VKMLimitBackButtonLength:(int)length;
-(void)VKMShowSheet:(id)sheet;
-(BOOL)VKMIdenticalController:(id)controller;
-(void)_setNavigationControllerContentInsetAdjustment:(UIEdgeInsets)adjustment;
-(void)VKMControllerChromeInsetsApply;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(void)VKMControllerChromeInsetsCheck;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)VKMControllerChrome;
-(id)childViewControllerForStatusBarStyle;
-(int)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)VKMControllerStatusBarUpdate:(BOOL)update;
-(void)VKMNavigationBarUpdateBackground:(id)background;
-(void)VKMNavigationBarUpdateBackground;
-(void)VKMNavigationBarUpdate;
-(id)VKMNavigationBarTintColor;
-(id)VKMNavigationBarBarTintColor;
-(id)VKMNavigationBarBackground;
-(BOOL)VKMNavigationBarTranslucent;
-(int)VKMNavigationBarStyle;
-(int)VKMControllerStatusBarStyle;
-(BOOL)VKMControllerStatusBarHidden;
-(BOOL)VKMControllerCustomized;
-(void)VKMControllerAppear;
-(void)VKMControllerTouch;
-(id)mainModel;
-(void)runAction:(id)action;
-(id)actionContext;
-(id)navContext;
-(BOOL)route:(id)route;
-(id)navigation;
-(id)currentNavDelegate;
-(CGRect)VKMControllerViewport;
-(void)VKMDismissModalSelfAnimated;
-(void)VKMDismissModalSelf:(BOOL)aSelf;
-(void)changeModel:(id)model;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)updateCommonAppearance:(BOOL)appearance;
-(void)viewWillAppear:(BOOL)view;
-(id)addStatsContext:(int)context;
-(id)setupBackTitle:(id)title;
-(id)setupTitle:(id)title;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

