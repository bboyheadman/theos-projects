/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EditContext.h"

@class VKPoll;

__attribute__((visibility("hidden")))
@interface PollEditContext : EditContext {
	VKPoll* _original;
}
@property(retain, nonatomic) VKPoll* original;
@property(retain, nonatomic) VKPoll* domain;
-(void).cxx_destruct;
-(id)confirmAction:(id)action;
-(Class)editControllerClass;
@end
