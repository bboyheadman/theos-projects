/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMNavDelegate.h"
#import "InputPanelViewDelegate.h"


@protocol ExtraInputPanelViewDelegate <VKMNavDelegate, InputPanelViewDelegate>
-(void)extraInputPanelViewDidAttemptToSend:(id)extraInputPanelView;
-(void)extraInputPanelView:(id)view didSelectSticker:(id)sticker referrerContext:(id)context shouldClearText:(BOOL)text;
@optional
-(id)extraInputPanelStickersGiftContext:(id)context;
@end

