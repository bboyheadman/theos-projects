/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PhoneRule : XXUnknownSuperclass {
	int _minVal;
	int _maxVal;
	int _byte8;
	int _maxLen;
	int _otherFlag;
	int _prefixLen;
	int _flag12;
	int _flag13;
	NSString* _format;
}
@property(readonly, assign, nonatomic) BOOL hasTrunkPrefix;
@property(readonly, assign, nonatomic) BOOL hasIntlPrefix;
@property(retain, nonatomic) NSString* format;
@property(assign, nonatomic) int flag13;
@property(assign, nonatomic) int flag12;
@property(assign, nonatomic) int prefixLen;
@property(assign, nonatomic) int otherFlag;
@property(assign, nonatomic) int maxLen;
@property(assign, nonatomic) int byte8;
@property(assign, nonatomic) int maxVal;
@property(assign, nonatomic) int minVal;
-(void).cxx_destruct;
-(id)description;
-(id)format:(id)format intlPrefix:(id)prefix trunkPrefix:(id)prefix3;
@end

