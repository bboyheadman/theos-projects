/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class MTRGStoreProcuctLoadingControllerContentView, UINavigationBar;

@interface MTRGStoreProcuctLoadingViewController : XXUnknownSuperclass {
	MTRGStoreProcuctLoadingControllerContentView* _contentView;
	UINavigationBar* _navigationBar;
	id _cancelBlock;
}
-(void).cxx_destruct;
-(void)viewDidLayoutSubviews;
-(void)updateViewLayouts;
-(CGRect)calcViewFrameRectWithNewStatusBarHeight:(float)newStatusBarHeight;
-(void)viewDidLoad;
-(void)cancelTapped:(id)tapped;
-(id)initWithCancelBlock:(id)cancelBlock;
-(BOOL)isRussianStore;
@end
