/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"
#import "VKAttachment.h"

@class VKNote, NSString;

__attribute__((visibility("hidden")))
@interface VKNotePreview : VKDomainDerived <VKAttachment> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKNote* domain;
-(id)attachmentIco;
-(id)attachmentImage;
-(id)attachmentStatus:(BOOL)status;
-(id)attachmentTitle;
-(id)attachmentPlaceholder;
-(Class)rendererClass;
@end

