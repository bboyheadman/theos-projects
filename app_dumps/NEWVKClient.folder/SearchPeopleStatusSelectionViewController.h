/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMTableController.h"

@protocol SearchPeopleStatusSelectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SearchPeopleStatusSelectionViewController : VKMTableController {
	id<SearchPeopleStatusSelectionViewControllerDelegate> _delegate;
	int _selectedStatus;
	int _sex;
}
@property(assign, nonatomic) int sex;
@property(assign, nonatomic) int selectedStatus;
@property(assign, nonatomic) __weak id<SearchPeopleStatusSelectionViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didSelectStatus:(int)status;
-(void)clearFilter;
-(void)configureClearButton;
-(id)makeCheckmarkView;
-(BOOL)VKMScrollViewDisablePTR;
-(int)VKMNavigationBarStyle;
-(int)VKMControllerStatusBarStyle;
-(void)viewDidLoad;
@end
