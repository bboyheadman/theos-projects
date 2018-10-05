/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSArray, MsgPushSettingsCategory, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface MessagesPushSettings : VKRenderable {
	NSNumber* _disabled_until;
	NSDictionary* _conversations;
	MsgPushSettingsCategory* _msgCategory;
	MsgPushSettingsCategory* _chatCategory;
}
@property(readonly, assign, nonatomic) BOOL enabledCounterMessages;
@property(readonly, assign, nonatomic) BOOL enabledChat;
@property(readonly, assign, nonatomic) BOOL enabledMsg;
@property(readonly, assign, nonatomic) NSArray* categories;
@property(retain, nonatomic) NSDictionary* conversations;
@property(retain, nonatomic) NSNumber* disabled_until;
@property(retain, nonatomic) MsgPushSettingsCategory* chatCategory;
@property(retain, nonatomic) MsgPushSettingsCategory* msgCategory;
+(BOOL)isNoTextEnabledForType:(id)type inSettings:(id)settings;
+(BOOL)enabledType:(id)type inSettings:(id)settings;
+(id)optionsForType:(id)type inSettings:(id)settings;
-(void).cxx_destruct;
-(void)updateCategory:(id)category;
-(BOOL)process:(id)process context:(id)context;
@end
