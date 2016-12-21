/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AttachmentView.h"
#import "vkclient-Structs.h"

@class UIImageView, VKMImageView;
@protocol VKAttachment;

__attribute__((visibility("hidden")))
@interface ImageAttachmentView : AttachmentView {
	XXStruct_UOIMaD type;
	VKMImageView* _image;
	UIImageView* _ico;
	id<VKAttachment> _attachment;
}
@property(retain, nonatomic) id<VKAttachment> attachment;
@property(retain, nonatomic) UIImageView* ico;
@property(retain, nonatomic) VKMImageView* image;
-(void)reuse;
-(void)render:(id)render reuse:(double)reuse;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

