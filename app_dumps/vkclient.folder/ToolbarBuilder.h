/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class NSMutableArray, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface ToolbarBuilder : XXUnknownSuperclass {
	NSMutableArray* _items;
	UIBarButtonItem* _flex;
}
@property(retain, nonatomic) NSMutableArray* items;
@property(retain, nonatomic) UIBarButtonItem* flex;
+(id)builder;
-(id)flexible;
-(id)fixed:(float)fixed;
-(id)add:(id)add size:(float)size;
-(id)add:(id)add;
-(void)clear;
-(id)build:(CGRect)build;
-(void)dealloc;
@end

