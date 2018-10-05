/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextViewDelegate.h"
#import "VKClient-Structs.h"
#import "VKMCell.h"

@class PlaceholderTextView, NSString;

__attribute__((visibility("hidden")))
@interface GiftsSendMessageCell : VKMCell <UITextViewDelegate> {
	PlaceholderTextView* _textDescription;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) PlaceholderTextView* textDescription;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)resignTextView:(id)view;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
