/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GroupNotificationsController.h"
#import "VKClient-Structs.h"


__attribute__((visibility("hidden")))
@interface NotificationsController : GroupNotificationsController {
}
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)notificationActivity:(id)activity;
-(void)actionSettings:(id)settings;
-(BOOL)route:(id)route;
-(id)VKMControllerStatsRef;
-(void)VKMTableUpdatedIndex;
-(Class)VKMTableViewClass;
-(void)notificationAppResignActive:(id)active;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end
