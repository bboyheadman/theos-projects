/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "KVOChangeHandler.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface KVOBlockChangeHandler : XXUnknownSuperclass <KVOChangeHandler> {
	id _handlerBlock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id handlerBlock;
+(id)changeHandlerWithBlock:(id)block;
-(void).cxx_destruct;
-(void)handleKVOChange:(id)change;
@end

