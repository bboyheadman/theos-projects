/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface AppsListDomainContext : XXUnknownSuperclass {
	BOOL _largeRepresentation;
	NSArray* _requests;
}
@property(readonly, copy, nonatomic) NSArray* requests;
@property(readonly, assign, nonatomic) BOOL largeRepresentation;
+(id)contextWithRequests:(id)requests isLarge:(BOOL)large;
-(void)dealloc;
-(id)initWithRequests:(id)requests isLarge:(BOOL)large;
@end

