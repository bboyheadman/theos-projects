/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Index, IndexUpdate;

__attribute__((visibility("hidden")))
@interface ModelUpdate : XXUnknownSuperclass {
	Index* _old;
	IndexUpdate* _table;
}
@property(retain, nonatomic) IndexUpdate* table;
@property(retain, nonatomic) Index* old;
+(id)update;
-(void)dealloc;
@end

