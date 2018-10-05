/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EditAttachment.h"

@class VKDomain;

__attribute__((visibility("hidden")))
@interface DomainEditAttachment : EditAttachment {
	VKDomain* _domain;
}
@property(retain, nonatomic) VKDomain* domain;
+(id)attachmentForDomain:(id)domain;
-(void).cxx_destruct;
-(float)defaultAttachmentRenderHeight;
-(id)imageVariants;
-(float)domainAttachmentImageRatio;
@end
