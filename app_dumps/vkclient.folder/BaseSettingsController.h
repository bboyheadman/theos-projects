/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMTableController.h"
#import "vkclient-Structs.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface BaseSettingsController : VKMTableController {
	NSDate* _lastUpdate;
}
@property(retain, nonatomic) NSDate* lastUpdate;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)render;
-(id)settingsCellWithTitle:(id)title style:(int)style position:(int)position switch:(SEL)aSwitch;
-(Class)cellClass;
-(void)VKMScrollViewSetFooter:(id)footer;
-(BOOL)VKMScrollViewDisablePTR;
-(int)VKMTableStyle;
-(void)VKMControllerChromeInsetsApply;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
@end

