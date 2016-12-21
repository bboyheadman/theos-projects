/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RoundedProgressOverlayViewDelegate.h"
#import "vkclient-Structs.h"
#import "ThumbnailEditAttachmentView.h"

@class RoundedProgressOverlayView, UILabel, UploadEditAttachment, NSString;

__attribute__((visibility("hidden")))
@interface UploadEditAttachmentView : ThumbnailEditAttachmentView <RoundedProgressOverlayViewDelegate> {
	UILabel* _failed;
	RoundedProgressOverlayView* _progress;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UILabel* failed;
@property(retain, nonatomic) RoundedProgressOverlayView* progress;
@property(readonly, retain, nonatomic) UploadEditAttachment* attachment;
-(void)progressViewDidCancel:(id)progressView;
-(void)renderFinish;
-(void)renderFailed:(BOOL)failed;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)dealloc;
-(id)initWithAttachment:(id)attachment style:(XXStruct_9zIMjA)style;
@end

