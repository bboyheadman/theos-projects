/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGStat.h"

@class NSNumber;

@interface MTRGProgressStat : MTRGStat {
	NSNumber* _value;
	NSNumber* _pValue;
}
@property(retain, nonatomic) NSNumber* pValue;
@property(retain, nonatomic) NSNumber* value;
-(void).cxx_destruct;
-(id)initWithPValue:(id)pvalue url:(id)url;
-(id)initWithValue:(id)value url:(id)url;
@end

