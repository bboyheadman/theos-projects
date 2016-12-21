/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AbstractMessagesAttachmentView.h"
#import "vkclient-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface AttachmentView : AbstractMessagesAttachmentView {
	CGRect imageFrame;
	BOOL _condensed;
	UILabel* _title;
	UILabel* _status;
}
@property(assign, nonatomic) BOOL condensed;
@property(retain, nonatomic) UILabel* status;
@property(retain, nonatomic) UILabel* title;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

