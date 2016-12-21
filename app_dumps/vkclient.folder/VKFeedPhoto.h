/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKFeed.h"

@class VKList, NSString;

__attribute__((visibility("hidden")))
@interface VKFeedPhoto : VKFeed {
	VKList* _photos;
	NSString* _ext_id;
}
@property(retain, nonatomic) NSString* ext_id;
@property(retain, nonatomic) VKList* photos;
-(id)feedPhotoType;
-(id)statusForSource:(id)source;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

