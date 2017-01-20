/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PersistentStatsData.h"

@class NSMutableDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BasicStatsData : XXUnknownSuperclass <PersistentStatsData> {
	NSMutableArray* _events;
	NSMutableDictionary* _batchedEvents;
	NSMutableDictionary* _batchedKeys;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* batchedKeys;
@property(retain, nonatomic) NSMutableDictionary* batchedEvents;
@property(retain, nonatomic) NSMutableArray* events;
-(void)loadFromJSONRepresentation:(id)jsonrepresentation;
-(id)request;
-(id)JSONRepresentation;
-(BOOL)hasEvents;
-(void)registerEvent:(id)event batch:(BOOL)batch;
-(int)batchLimit;
-(int)eventsLimit;
-(id)batchKey;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end
