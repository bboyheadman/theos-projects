/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"
#import "VKClient-Structs.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface AppsListModel : ListModel {
	unsigned _filter;
	NSNumber* _genreID;
}
@property(readonly, assign, nonatomic, getter=isByGenre) BOOL byGenre;
@property(copy, nonatomic) NSNumber* genreID;
@property(readonly, assign, nonatomic) unsigned filter;
+(id)requestWithFilter:(unsigned)filter inRange:(NSRange)range ofGenreID:(id)genreID;
+(id)requestWithFilter:(unsigned)filter inRange:(NSRange)range;
+(id)requestWithFilter:(unsigned)filter;
-(void).cxx_destruct;
-(void)handleRemove:(id)remove :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)process:(id)process;
-(id)request:(int)request count:(int)count;
-(int)defaultPage;
-(id)withGenreID:(id)genreID;
-(id)filtered:(unsigned)filtered;
@end
