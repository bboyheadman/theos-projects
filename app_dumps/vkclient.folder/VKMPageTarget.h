/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMBrowserTarget.h"

@protocol VKTextPage;

__attribute__((visibility("hidden")))
@interface VKMPageTarget : VKMBrowserTarget {
	id<VKTextPage> _page;
}
@property(retain, nonatomic) id<VKTextPage> page;
+(id)page:(id)page;
-(void)reload;
-(void)stop;
-(void)load;
-(void)render;
-(id)targetURL;
-(id)title;
-(id)description;
-(void)dealloc;
@end

