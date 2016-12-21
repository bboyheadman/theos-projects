/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EditAttachmentView.h"
#import "vkclient-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface TitledEditAttachmentView : EditAttachmentView {
	UILabel* _type;
	UILabel* _title;
	UILabel* _subtitle;
}
@property(retain, nonatomic) UILabel* subtitle;
@property(retain, nonatomic) UILabel* title;
@property(retain, nonatomic) UILabel* type;
+(id)createRenderView;
-(void)renderType:(id)type title:(id)title subtitle:(id)subtitle;
-(void)dealloc;
-(id)initWithAttachment:(id)attachment style:(XXStruct_9zIMjA)style;
@end

