/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface CreateChatModel : ModelAction {
	NSString* _chatTitle;
	NSArray* _users;
	id _chat;
}
@property(retain, nonatomic) id chat;
@property(retain, nonatomic) NSArray* users;
@property(copy, nonatomic) NSString* chatTitle;
+(int)domainType;
-(id)resultMessage;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(void)dealloc;
@end

