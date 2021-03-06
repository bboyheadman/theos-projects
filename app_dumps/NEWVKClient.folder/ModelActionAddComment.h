/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionAdd.h"

@class VKComment, VKStickerReferrerContext, VKIdentity, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionAddComment : ModelActionAdd {
	VKIdentity* _parentIdentity;
	NSNumber* _from_group;
	NSDictionary* _result;
	NSNumber* _guid;
	VKStickerReferrerContext* _stickerReferrerContext;
}
@property(retain, nonatomic) VKStickerReferrerContext* stickerReferrerContext;
@property(retain, nonatomic) NSNumber* guid;
@property(retain, nonatomic) NSDictionary* result;
@property(assign, nonatomic) NSNumber* from_group;
@property(retain, nonatomic) VKIdentity* parentIdentity;
@property(retain, nonatomic) VKComment* target;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)singleSticker;
@end

