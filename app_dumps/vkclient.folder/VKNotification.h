/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSDictionary, VKComment, NSArray;

__attribute__((visibility("hidden")))
@interface VKNotification : VKRenderable {
	NSDictionary* _sources;
	int _type;
	unsigned _date;
	id _parent;
	id _feedback;
	VKComment* _reply;
	NSArray* _sourceIds;
	int _groupType;
}
@property(assign, nonatomic) int groupType;
@property(retain, nonatomic) NSArray* sourceIds;
@property(retain, nonatomic) VKComment* reply;
@property(retain, nonatomic) id feedback;
@property(retain, nonatomic) id parent;
@property(assign, nonatomic) unsigned date;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSDictionary* sources;
+(id)notification:(id)notification owner:(id)owner sources:(id)sources;
-(id)selectTarget;
-(id)thumbnailTarget;
-(Class)rendererClass;
-(void)dealloc;
@end

