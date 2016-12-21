/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class VKLink, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface VKPostSource : VKDomain {
	int _type;
	int _platform;
	NSString* _platformString;
	NSString* _url;
	NSDictionary* _data;
	VKLink* _link;
}
@property(retain, nonatomic) VKLink* link;
@property(retain, nonatomic) NSDictionary* data;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* platformString;
@property(assign, nonatomic) int platform;
@property(assign, nonatomic) int type;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

