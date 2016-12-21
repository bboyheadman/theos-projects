/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "VKTitleable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKAudioAlbum : VKDomain <VKTitleable> {
	NSString* _title;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* title;
+(id)allAudioFor:(id)aFor;
+(id)owner:(id)owner album:(id)album;
-(BOOL)isAllAudio;
-(BOOL)disclosure;
-(Class)rendererClass;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

