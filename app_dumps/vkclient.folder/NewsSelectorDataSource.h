/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSelectorModelDataSource.h"

@protocol VKSelectorOption;

__attribute__((visibility("hidden")))
@interface NewsSelectorDataSource : VKSelectorModelDataSource {
	id<VKSelectorOption> _autoNewsFeedOption;
	id<VKSelectorOption> _suggestionsOption;
	id<VKSelectorOption> _newsSettingsOption;
}
@property(retain, nonatomic) id<VKSelectorOption> newsSettingsOption;
@property(retain, nonatomic) id<VKSelectorOption> suggestionsOption;
@property(retain, nonatomic) id<VKSelectorOption> autoNewsFeedOption;
-(id)optionsFromIndex:(id)index;
-(id)initWithModel:(id)model;
-(void)dealloc;
@end

