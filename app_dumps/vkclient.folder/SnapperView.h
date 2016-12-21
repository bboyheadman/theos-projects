/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AbstractMessagesAttachmentView.h"
#import "vkclient-Structs.h"

@class VKSnapperAttach, UILabel, VKMImageView;
@protocol SnapperViewDelegate;

__attribute__((visibility("hidden")))
@interface SnapperView : AbstractMessagesAttachmentView {
	id<SnapperViewDelegate> _delegate;
	VKMImageView* _imageView;
	VKMImageView* _logoView;
	UILabel* _appNameLabel;
	UILabel* _textLabel;
	UILabel* _openLabel;
	VKSnapperAttach* _attach;
}
@property(assign, nonatomic) id<SnapperViewDelegate> delegate;
@property(retain, nonatomic) VKSnapperAttach* attach;
@property(retain, nonatomic) UILabel* openLabel;
@property(retain, nonatomic) UILabel* textLabel;
@property(retain, nonatomic) UILabel* appNameLabel;
@property(retain, nonatomic) VKMImageView* logoView;
@property(retain, nonatomic) VKMImageView* imageView;
-(void)openSnapper:(id)snapper;
-(void)renderSnapper:(id)snapper reuse:(double)reuse;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

