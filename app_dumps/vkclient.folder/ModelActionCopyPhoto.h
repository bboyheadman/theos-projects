/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKPhoto;

__attribute__((visibility("hidden")))
@interface ModelActionCopyPhoto : ModelAction {
}
@property(retain, nonatomic) VKPhoto* target;
+(int)domainType;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(BOOL)hudSuccessEmptyVisible;
-(id)actionRequestForContext:(id)context;
@end

