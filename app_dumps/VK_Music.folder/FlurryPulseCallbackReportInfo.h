/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "VK_Music-Structs.h"

@class NSString, NSNumber, NSMutableArray;

@interface FlurryPulseCallbackReportInfo : XXUnknownSuperclass <NSCoding> {
	NSString* _invokeId;
	NSNumber* _callbackId;
	NSString* _substitutedUrl;
	NSMutableArray* _attempts;
}
@property(retain, nonatomic) NSMutableArray* attempts;
@property(retain, nonatomic) NSString* substitutedUrl;
@property(retain, nonatomic) NSNumber* callbackId;
@property(retain, nonatomic) NSString* invokeId;
-(void).cxx_destruct;
-(unsigned)removeSentAttempts;
-(void)setAttemptsSent;
-(BOOL)finalAttemptMade;
-(id)copyWithZone:(NSZone*)zone;
-(id)data;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end
