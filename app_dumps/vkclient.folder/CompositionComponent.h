/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5.h"
#import "vkclient-Structs.h"


__attribute__((visibility("hidden")))
@interface CompositionComponent : Component5 {
	BOOL _hasView;
}
+(id)composeComponent:(id)component hasView:(BOOL)view;
+(id)composeComponent:(id)component;
-(BOOL)isUtility;
-(id)nodeForState:(id)state context:(id)context;
@end

