/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKFeedActivity.h"

@class VKComment;

__attribute__((visibility("hidden")))
@interface VKFeedActivityComment : VKFeedActivity {
	VKComment* _comment;
}
@property(retain, nonatomic) VKComment* comment;
-(void).cxx_destruct;
-(void)acceptSources:(id)sources;
-(BOOL)process:(id)process context:(id)context;
@end

