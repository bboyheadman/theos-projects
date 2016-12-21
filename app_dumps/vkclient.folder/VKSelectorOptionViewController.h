/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKSelectorOption.h"
#import "VKSelectorOptionViewController.h"

@class UIImage, NSString;

@protocol VKSelectorOptionViewController <VKSelectorOption>
-(id)viewControllerWithMainModel:(id)mainModel;
@end

__attribute__((visibility("hidden")))
@interface VKSelectorOptionViewController : XXUnknownSuperclass <VKSelectorOptionViewController> {
	NSString* _title;
	UIImage* _icon;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImage* icon;
@property(retain, nonatomic) NSString* title;
+(id)optionWithTitle:(id)title icon:(id)icon;
-(void).cxx_destruct;
-(id)viewControllerWithMainModel:(id)mainModel;
-(id)initWithTitle:(id)title icon:(id)icon;
@end

