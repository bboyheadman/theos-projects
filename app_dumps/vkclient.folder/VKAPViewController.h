/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"
#import "VKAPContentViewControllerSizeDelegate.h"
#import "VKAPModelDelegate.h"

@class UIImageView, VKAPTabsCollectionViewController, VKAPTabsContentViewController, UIView, VKAPBottomToolbar, VKAPModel, NSString;

__attribute__((visibility("hidden")))
@interface VKAPViewController : XXUnknownSuperclass <VKAPContentViewControllerSizeDelegate, VKAPModelDelegate> {
	UIImageView* navBarHairlineImageView;
	BOOL _lightStatusBar;
	VKAPTabsContentViewController* _vkAPTabsContentViewController;
	VKAPTabsCollectionViewController* _vkAPTabsViewController;
	UIView* _dimmingView;
	VKAPBottomToolbar* _pickerToolbar;
	VKAPModel* _model;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKAPModel* model;
@property(retain, nonatomic) VKAPBottomToolbar* pickerToolbar;
@property(assign, nonatomic) BOOL lightStatusBar;
@property(retain, nonatomic) UIView* dimmingView;
@property(retain, nonatomic) VKAPTabsCollectionViewController* vkAPTabsViewController;
@property(retain, nonatomic) VKAPTabsContentViewController* vkAPTabsContentViewController;
-(void).cxx_destruct;
-(id)contentScrollView;
-(id)findHairlineImageViewUnder:(id)under;
-(void)dimmingViewTapped:(id)tapped;
-(void)prepareDimmingView;
-(void)viewWillLayoutSubviews;
-(void)updateContainerAlpha;
-(void)updateTabsAlpha;
-(void)initializeChildViewControllers;
-(void)dismissVCAnimated:(BOOL)animated;
-(void)dismissVKAPAnimated:(BOOL)animated;
-(void)hideVKAP;
-(void)dismissVKAP;
-(void)setVKAPOrigin:(float)origin;
-(void)setVKAPHidden:(BOOL)hidden;
-(void)VKAPTabsContentViewControllerShouldChangeCenter:(CGPoint)vkaptabsContentViewController;
-(void)configureNavBar;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(int)preferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)configureStatusBar;
-(float)statusBarHeight;
-(int)preferredStatusBarStyle;
-(void)vkapModelSelectedLimit:(id)limit;
-(void)vkapModelNeedUpdateToolbar:(id)toolbar;
-(void)vkapModelNeedDismissPicker:(id)picker;
-(void)vkapModel:(id)model shouldUpdateTitle:(id)title;
-(void)vkapModel:(id)model didChangeTab:(int)tab;
-(void)dealloc;
-(id)initWithModel:(id)model options:(int)options;
@end

