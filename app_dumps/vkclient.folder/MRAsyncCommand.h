/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MRAsyncCommand : XXUnknownSuperclass {
	id _completionBlock;
	id _result;
	NSString* _error;
}
@property(readonly, copy, nonatomic) NSString* error;
@property(readonly, assign, nonatomic) id result;
-(void).cxx_destruct;
-(void)setError:(id)error;
-(void)setResult:(id)result;
-(void)executeWithCompletionBlock:(id)completionBlock;
-(void)execute;
-(void)finish;
-(void)run;
@end

