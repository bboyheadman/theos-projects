/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBAuthStrategy.h"

@class NSString;
@protocol URLInteropHandler;

__attribute__((visibility("hidden")))
@interface FBURLInteropAuthStrategy : XXUnknownSuperclass <FBAuthStrategy> {
	id<URLInteropHandler> _interopHandler;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) id<URLInteropHandler> interopHandler;
-(id)targetURLForRequest:(id)request;
-(void)attemptAuth:(id)auth handler:(id)handler;
-(void)dealloc;
-(id)initWithInteropHandler:(id)interopHandler;
@end

