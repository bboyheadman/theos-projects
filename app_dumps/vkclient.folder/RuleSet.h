/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RuleSet : XXUnknownSuperclass {
	BOOL _hasRuleWithIntlPrefix;
	BOOL _hasRuleWithTrunkPrefix;
	int _matchLen;
	NSMutableArray* _rules;
}
@property(assign, nonatomic) BOOL hasRuleWithTrunkPrefix;
@property(assign, nonatomic) BOOL hasRuleWithIntlPrefix;
@property(retain, nonatomic) NSMutableArray* rules;
@property(assign, nonatomic) int matchLen;
-(void).cxx_destruct;
-(id)description;
-(BOOL)isValid:(id)valid intlPrefix:(id)prefix trunkPrefix:(id)prefix3 prefixRequired:(BOOL)required;
-(id)format:(id)format intlPrefix:(id)prefix trunkPrefix:(id)prefix3 prefixRequired:(BOOL)required;
@end

