/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface CountryCallingCodesIndex : XXUnknownSuperclass {
	NSDictionary* _isoToCode;
	NSDictionary* _codeToIso;
	NSDictionary* _isoToName;
	NSDictionary* _indexLookup;
	NSArray* _index;
}
@property(readonly, retain, nonatomic) NSArray* index;
@property(readonly, retain, nonatomic) NSDictionary* indexLookup;
@property(readonly, retain, nonatomic) NSDictionary* isoToName;
@property(readonly, retain, nonatomic) NSDictionary* codeToIso;
@property(readonly, retain, nonatomic) NSDictionary* isoToCode;
+(id)instance;
-(void)dealloc;
-(id)initWithIsoToCodeMap:(id)codeMap;
-(id)initDefaultInstance;
@end

