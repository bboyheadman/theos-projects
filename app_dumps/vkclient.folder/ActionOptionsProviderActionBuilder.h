/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ActionOptionsProvider.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ActionOptionsProviderActionBuilder : XXUnknownSuperclass <ActionOptionsProvider> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(BOOL)hasOptionsWithContext:(id)context;
-(void)showOptionsWithContext:(id)context runActionIfSingle:(BOOL)single;
-(void)showOptionsWithContext:(id)context;
-(void)fillOptionsForBuilder:(id)builder context:(id)context;
@end

