/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsPrivacyModel.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface StoriesSettingsModel : SettingsPrivacyModel {
	NSNumber* _count_stories_banned;
}
@property(retain, nonatomic) NSNumber* count_stories_banned;
-(void).cxx_destruct;
-(void)modelActionStoriesSourceBan:(id)ban :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
@end
