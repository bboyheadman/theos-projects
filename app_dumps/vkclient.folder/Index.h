/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface Index : XXUnknownSuperclass {
	NSArray* _index;
	NSArray* _sections;
	NSArray* _indexSections;
	unsigned _count;
}
@property(assign, nonatomic) unsigned count;
@property(retain, nonatomic) NSArray* indexSections;
@property(retain, nonatomic) NSArray* sections;
@property(retain, nonatomic) NSArray* index;
+(id)indexWithItem:(id)item;
+(id)listAppend:(id)append to:(id)to;
+(id)listAdd:(id)add append:(BOOL)append to:(id)to;
+(id)section:(int)section add:(id)add append:(BOOL)append to:(id)to;
+(id)indexWithSections:(id)sections count:(BOOL)count;
+(id)indexByAppedingSections:(id)sections toIndex:(id)index;
+(id)indexByPrepedingSections:(id)sections toIndex:(id)index;
+(id)sections:(unsigned)sections titles:(BOOL)titles build:(id)build;
+(id)single:(id)single;
+(id)enums:(unsigned)enums when:(id)when;
-(id)enumerator;
-(id)indexByRemovingEmptySections;
-(id)map:(id)map;
-(id)mapSections:(id)sections;
-(void)enumerate:(id)enumerate;
-(void)enumerateFromIndexPath:(id)indexPath withBlock:(id)block;
-(id)item;
-(id)filteredIndex:(id)index;
-(id)first;
-(void)offsetCount:(int)count;
-(void)calcCount;
-(BOOL)notEmpty;
-(unsigned)sectionForSectionIndex:(unsigned)sectionIndex;
-(id)safeObjectAtIndexPath:(id)indexPath;
-(id)objectAtIndexPath:(id)indexPath;
-(id)sectionTitleAtIndex:(int)index;
-(id)safeSectionAtIndex:(int)index;
-(id)sectionAtIndex:(int)index;
-(void)dealloc;
-(id)prepareGroupedItemsIndex;
@end
