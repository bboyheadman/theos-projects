/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAPTabViewControllerProtocol.h"
#import "VKPPGroupController.h"

@class NSString, VKAPModel;

__attribute__((visibility("hidden")))
@interface VKAPPhotoViewController : VKPPGroupController <VKAPTabViewControllerProtocol> {
	VKAPModel* _pickerModel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak VKAPModel* pickerModel;
-(void).cxx_destruct;
-(id)scrollView;
-(void)updateTitleView;
@end
