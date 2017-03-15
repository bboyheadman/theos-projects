/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DDLogFormatter.h"

@class NSArray, DDLoggingContextSet, NSString;

@interface DDContextBlacklistFilterLogFormatter : XXUnknownSuperclass <DDLogFormatter> {
	DDLoggingContextSet* _contextSet;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy) NSArray* blacklist;
-(void).cxx_destruct;
-(id)formatLogMessage:(id)message;
-(BOOL)isOnBlacklist:(unsigned)blacklist;
-(void)removeFromBlacklist:(unsigned)blacklist;
-(void)addToBlacklist:(unsigned)blacklist;
-(id)init;
@end
