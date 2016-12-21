/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

__attribute__((visibility("hidden")))
@interface VKTimeout : XXUnknownSuperclass {
	NSDate* _lastUpdateDate;
	double _timeout;
}
@property(assign, nonatomic) double timeout;
@property(retain, nonatomic) NSDate* lastUpdateDate;
+(id)timeoutWithTimeoutInterval:(double)timeoutInterval startImmediately:(BOOL)immediately;
-(BOOL)isTimedOut;
-(void)updateNow;
-(id)initWithTimeoutInterval:(double)timeoutInterval startImmediately:(BOOL)immediately;
-(id)initWithTimeoutInterval:(double)timeoutInterval;
-(void)dealloc;
@end

