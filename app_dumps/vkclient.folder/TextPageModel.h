/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ItemModel.h"

@class VKWikiPage;
@protocol VKTextPage;

__attribute__((visibility("hidden")))
@interface TextPageModel : ItemModel {
	id<VKTextPage> _target;
}
@property(retain, nonatomic) VKWikiPage* item;
@property(retain, nonatomic) id<VKTextPage> target;
-(void)loadPage:(id)page;
-(id)process:(id)process;
-(id)request;
-(void)dealloc;
@end

