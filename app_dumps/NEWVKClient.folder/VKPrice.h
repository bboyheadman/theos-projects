/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSString, VKCurrency;

__attribute__((visibility("hidden")))
@interface VKPrice : VKRenderable {
	NSString* _text;
	unsigned _amount;
	VKCurrency* _currency;
}
@property(retain, nonatomic) VKCurrency* currency;
@property(assign, nonatomic) unsigned amount;
@property(retain, nonatomic) NSString* text;
+(void)load;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

