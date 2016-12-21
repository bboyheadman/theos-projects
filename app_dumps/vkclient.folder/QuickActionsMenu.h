/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIPopoverPresentationControllerDelegate.h"
#import "vkclient-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, UITableViewController, UIPopoverController, UIGestureRecognizer, NSString;

__attribute__((visibility("hidden")))
@interface QuickActionsMenu : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {
	BOOL _animated;
	NSArray* _actions;
	id _completeBlock;
	UITableViewController* _internalTableController;
	UIPopoverController* _oldPopover;
	UIGestureRecognizer* _quickMenuPan;
	id _strongSelf;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL animated;
@property(retain, nonatomic) id strongSelf;
@property(retain, nonatomic) UIGestureRecognizer* quickMenuPan;
@property(retain, nonatomic) UIPopoverController* oldPopover;
@property(retain, nonatomic) UITableViewController* internalTableController;
@property(copy, nonatomic) id completeBlock;
@property(retain, nonatomic) NSArray* actions;
+(id)presentQuickActionsMenuWithActions:(id)actions fromView:(id)view inViewController:(id)viewController originOffset:(CGPoint)offset passthroughViews:(id)views withCompleteBlock:(id)completeBlock;
-(void).cxx_destruct;
-(void)panGesture:(id)gesture;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
-(void)close:(id)close;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)popoverPresentationController;
-(void)prepareForPopoverPresentation:(id)popoverPresentation;
-(void)popoverPresentationControllerDidDismissPopover:(id)popoverPresentationController;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController traitCollection:(id)collection;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)initWithActions:(id)actions;
-(void)dealloc;
@end

