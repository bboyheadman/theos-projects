/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol VKClientDelegate <NSObject>
-(void)client:(id)client requestedValidation:(id)validation complete:(id)complete;
-(void)client:(id)client requestedCaptcha:(id)captcha complete:(id)complete;
-(void)clientEncounteredAuthProblem:(id)problem;
@optional
-(void)client:(id)client requestedConfirmation:(id)confirmation complete:(id)complete;
@end

