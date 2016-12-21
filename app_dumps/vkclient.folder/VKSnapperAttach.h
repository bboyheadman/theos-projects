/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VKSnapperAttach : VKDomain {
	NSNumber* _id;
	NSNumber* _owner_id;
	NSString* _src_blur;
	NSString* _src_big;
	NSString* _label;
	NSString* _app_name;
	NSString* _app_icon;
	NSNumber* _app_id;
	NSString* _app_url;
	int _timer;
}
@property(assign, nonatomic) int timer;
@property(retain, nonatomic) NSString* app_url;
@property(retain, nonatomic) NSNumber* app_id;
@property(retain, nonatomic) NSString* app_icon;
@property(retain, nonatomic) NSString* app_name;
@property(retain, nonatomic) NSString* label;
@property(retain, nonatomic) NSString* src_big;
@property(retain, nonatomic) NSString* src_blur;
@property(retain, nonatomic) NSNumber* owner_id;
@property(retain, nonatomic) NSNumber* id;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end

