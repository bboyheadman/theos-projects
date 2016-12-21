/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5.h"

@class VKIdentity, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BasicExpandableTextComponent : Component5 {
	VKIdentity* _identity;
	unsigned _maxLinesWhenCollapsed;
	NSAttributedString* _text;
}
@property(readonly, copy, nonatomic) NSAttributedString* text;
@property(readonly, assign, nonatomic) unsigned maxLinesWhenCollapsed;
@property(readonly, assign, nonatomic) VKIdentity* identity;
+(id)componentWithMaxCollapsedLines:(unsigned)maxCollapsedLines text:(id)text identity:(id)identity;
-(void).cxx_destruct;
-(BOOL)isUtility;
-(id)nodeForState:(id)state context:(id)context;
@end

