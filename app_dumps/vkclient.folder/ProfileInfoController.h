/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "vkclient-Structs.h"
#import "EKEventEditViewDelegate.h"

@class ProfileView, DefaultProfileModel, NSString;

__attribute__((visibility("hidden")))
@interface ProfileInfoController : VKMLiveController <EKEventEditViewDelegate> {
	ProfileView* _profileView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ProfileView* profileView;
@property(readonly, retain, nonatomic) DefaultProfileModel* model;
-(id)safeProfileItemAtIndexPath:(id)indexPath;
-(void)tableView:(id)view performAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)tableView:(id)view canPerformAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
-(BOOL)tableView:(id)view shouldShowMenuForRowAtIndexPath:(id)indexPath;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)VKMTableCellSeparatorInsetForIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)eventEditViewController:(id)controller didCompleteWithAction:(int)action;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)VKMScrollViewIndexFromModel:(id)model;
-(void)VKMControllerTouch;
-(int)VKMTableStyle;
-(void)dealloc;
@end

