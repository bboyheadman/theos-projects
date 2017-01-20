/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKAudio : VKDomain {
	BOOL _content_restricted;
	BOOL _added;
	NSString* _performer;
	NSString* _title;
	int _duration;
	NSString* _url;
	NSNumber* _lyrics_id;
	NSString* _content_restricted_message;
	NSString* _content_restricted_url;
}
@property(assign, nonatomic) BOOL added;
@property(retain, nonatomic) NSString* content_restricted_url;
@property(retain, nonatomic) NSString* content_restricted_message;
@property(assign, nonatomic) BOOL content_restricted;
@property(retain, nonatomic) NSNumber* lyrics_id;
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) int duration;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* performer;
-(BOOL)canAdd:(id)add;
-(void)updateUrl:(id)url;
-(BOOL)isEqual:(id)equal;
-(BOOL)process:(id)process context:(id)context;
-(Class)rendererClass;
-(id)description;
-(void)dealloc;
@end
