/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol StatsManagerDelegate, StatsData;

__attribute__((visibility("hidden")))
@interface StatsManager : XXUnknownSuperclass {
	id<StatsManagerDelegate> _delegate;
	Class _dataClass;
	id<StatsData> _currentData;
	id<StatsData> _pendingData;
	id<StatsData> _nextData;
}
@property(assign, nonatomic) id<StatsManagerDelegate> delegate;
@property(retain, nonatomic) id<StatsData> nextData;
@property(retain, nonatomic) id<StatsData> pendingData;
@property(retain, nonatomic) id<StatsData> currentData;
@property(retain, nonatomic) Class dataClass;
-(BOOL)isPending;
-(void)submittedData:(id)data success:(BOOL)success;
-(id)collectData;
-(void)registerEvent:(id)event batch:(BOOL)batch;
-(void)dealloc;
-(id)initWithDataClass:(Class)dataClass;
@end

