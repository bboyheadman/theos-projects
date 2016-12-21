/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MOTextView.h"
#import "vkclient-Structs.h"

@protocol InputPanelViewTextViewDelegate;

__attribute__((visibility("hidden")))
@interface InputPanelViewTextView : MOTextView {
	BOOL _overlayEnabled;
	id<InputPanelViewTextViewDelegate> _interactionDelegate;
}
@property(assign, nonatomic) BOOL overlayEnabled;
@property(assign, nonatomic) id<InputPanelViewTextViewDelegate> interactionDelegate;
-(void)actionSend:(id)send;
-(id)keyCommands;
-(CGRect)caretRectForPosition:(id)position;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)attemptToBecomeFirstResponder;
-(id)initWithFrame:(CGRect)frame;
@end

