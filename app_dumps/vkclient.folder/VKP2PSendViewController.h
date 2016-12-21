/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMScrollViewController.h"
#import "vkclient-Structs.h"
#import "UITextViewDelegate.h"
#import "UITextFieldDelegate.h"

@class UIScrollView, NSString, UIImageView, NSNumberFormatter, UIView, UITextField, MOTextView, VKUser, VKMImageView, UILabel, UIButton;

__attribute__((visibility("hidden")))
@interface VKP2PSendViewController : VKMScrollViewController <UITextViewDelegate, UITextFieldDelegate> {
	id _success;
	UIImageView* _bubble;
	NSNumberFormatter* _amountFormatter;
	UIView* _separator;
	UIView* _topSeparator;
	UITextField* _amountTextField;
	MOTextView* _commentTextView;
	UIScrollView* _sendScrollView;
	VKUser* _recipient;
	VKMImageView* _avatarImageView;
	UILabel* _userName;
	UIButton* _sendButton;
	UILabel* _limitsWarningLabel;
	NSString* _preconfigAmount;
	NSString* _preconfigComment;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id success;
@property(copy, nonatomic) NSString* preconfigComment;
@property(copy, nonatomic) NSString* preconfigAmount;
@property(retain, nonatomic) UILabel* limitsWarningLabel;
@property(retain, nonatomic) UIButton* sendButton;
@property(retain, nonatomic) UILabel* userName;
@property(retain, nonatomic) VKMImageView* avatarImageView;
@property(retain, nonatomic) VKUser* recipient;
@property(retain, nonatomic) UIScrollView* sendScrollView;
@property(retain, nonatomic) MOTextView* commentTextView;
@property(retain, nonatomic) UITextField* amountTextField;
@property(retain, nonatomic) UIView* topSeparator;
@property(retain, nonatomic) UIView* separator;
@property(retain, nonatomic) NSNumberFormatter* amountFormatter;
@property(retain, nonatomic) UIImageView* bubble;
-(void).cxx_destruct;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(id)VKMScrollView;
-(void)VKMScrollViewSetFooter:(id)footer;
-(BOOL)VKMScrollViewShouldShowTeaser;
-(BOOL)VKMScrollViewDisablePTR;
-(void)sendTransfer;
-(void)actionLanding:(id)landing;
-(void)actionNext:(id)next;
-(void)actionCancel:(id)cancel;
-(int)minAmount;
-(int)maxAmount;
-(int)userAmountInteger;
-(BOOL)satisfiesLimits;
-(void)updateLimitsLabel;
-(void)actionTextFieldDidChange:(id)actionTextField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textViewDidChange:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
-(id)initWithMain:(id)main andRecipientId:(id)anId amount:(id)amount comment:(id)comment source:(id)source;
-(id)initWithMain:(id)main andRecipientId:(id)anId;
@end

