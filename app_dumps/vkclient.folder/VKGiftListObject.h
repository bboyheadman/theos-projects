/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "VKSourceStatus.h"

@class VKGift, NSString, NSNumber;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKGiftListObject : VKDomain <VKSourceStatus> {
	VKGift* _gift;
	id<VKSource> _source;
	NSString* _message;
	NSString* _gift_hash;
	unsigned _date;
	int _privacy;
	NSNumber* _from_id;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int privacy;
@property(assign, nonatomic) unsigned date;
@property(retain, nonatomic) NSString* gift_hash;
@property(retain, nonatomic) NSString* message;
@property(retain, nonatomic) id<VKSource> source;
@property(retain, nonatomic) VKGift* gift;
@property(retain, nonatomic) NSNumber* from_id;
+(id)objectFromSendAction:(id)sendAction profile:(id)profile;
-(int)statusMask;
-(id)statusForSource:(id)source;
-(id)renderWithSources:(id)sources;
-(Class)rendererClass;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

