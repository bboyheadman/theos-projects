/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CompositionComponent.h"


__attribute__((visibility("hidden")))
@interface ProfileInfoComponent : CompositionComponent {
}
+(id)counterBlockForUsersGridWithImages:(id)images title:(id)title count:(int)count;
+(id)counterBlockForVideo:(id)video count:(int)count owner:(id)owner;
+(id)counterBlockForAudio:(id)audio count:(int)count owner:(id)owner;
+(id)counterInfoForTopic:(id)topic;
+(id)counterInfoForVideo:(id)video;
+(id)counterInfoForAudio:(id)audio;
+(id)counterInfoWithIcon:(id)icon title:(id)title subtitle:(id)subtitle;
+(id)counterBlockWithTitle:(id)title count:(int)count contentComponent:(id)component;
+(id)postButtonsWithDelegate:(id)delegate;
+(id)postButtonWithIcon:(id)icon text:(id)text styleSheet:(id)sheet;
+(id)secondaryButtonWithText:(id)text;
+(id)primaryButtonWithText:(id)text enabled:(BOOL)enabled;
+(id)primaryButtonWithText:(id)text style:(id)style enabled:(BOOL)enabled;
+(id)secondaryButtonTextStyle:(id)style;
+(id)primaryButtonTextStyle:(id)style;
+(id)userAvatarsPreviewComponent:(id)component;
+(id)infoCounterComponentWithNumber:(int)number suffixKey:(id)key;
+(id)infoCounterComponentWithNumber:(int)number suffixKey:(id)key styleSheet:(id)sheet;
+(id)infoCounterAttributedStringWithNumber:(int)number suffixKey:(id)key styleSheet:(id)sheet;
+(id)moreInfoOptionWithStyleSheet:(id)styleSheet;
+(id)infoOptionWithIcon:(id)icon contentComponent:(id)component;
+(id)moreInfoTextStyle:(id)style;
+(id)infoNumberTextStyle:(id)style;
+(id)infoTextStyle:(id)style;
+(id)userProfile:(id)profile delegate:(id)delegate;
+(id)userCounters:(id)counters;
+(id)userInfo:(id)info delegate:(id)delegate;
+(id)userInfoMore:(id)more styleSheet:(id)sheet delegate:(id)delegate;
+(id)userInfoBirthDay:(id)day styleSheet:(id)sheet;
+(id)userInfoHome:(id)home styleSheet:(id)sheet;
+(id)userInfoCareer:(id)career styleSheet:(id)sheet;
+(id)userInfoFollowers:(id)followers styleSheet:(id)sheet;
+(id)userInfoFriends:(id)friends styleSheet:(id)sheet;
+(id)userInfoStatus:(id)status styleSheet:(id)sheet;
+(id)userButtons:(id)buttons delegate:(id)delegate;
+(id)userHeader:(id)header delegate:(id)delegate;
+(id)groupProfile:(id)profile delegate:(id)delegate;
+(id)groupCounters:(id)counters delegate:(id)delegate;
+(id)groupInfo:(id)info delegate:(id)delegate;
+(id)groupMoreInfo:(id)info styleSheet:(id)sheet delegate:(id)delegate;
+(id)groupInfoDescription:(id)description styleSheet:(id)sheet;
+(id)groupInfoMembers:(id)members styleSheet:(id)sheet;
+(id)groupButtons:(id)buttons delegate:(id)delegate;
+(id)groupHeader:(id)header delegate:(id)delegate;
@end

