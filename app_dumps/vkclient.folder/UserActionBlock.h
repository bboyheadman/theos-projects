/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Action.h"


__attribute__((visibility("hidden")))
@interface UserActionBlock : Action {
	id _block;
}
@property(copy, nonatomic) id block;
+(id)block:(id)block;
-(void)runInContext:(id)context;
-(void)dealloc;
@end

