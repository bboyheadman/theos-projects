/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AFURLResponseSerialization.h"
#import "VK_Music-Structs.h"

@class NSSet, NSIndexSet, NSString;

@interface AFHTTPResponseSerializer : XXUnknownSuperclass <AFURLResponseSerialization> {
	unsigned _stringEncoding;
	NSIndexSet* _acceptableStatusCodes;
	NSSet* _acceptableContentTypes;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSSet* acceptableContentTypes;
@property(copy, nonatomic) NSIndexSet* acceptableStatusCodes;
@property(assign, nonatomic) unsigned stringEncoding;
+(BOOL)supportsSecureCoding;
+(id)serializer;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)responseObjectForResponse:(id)response data:(id)data error:(id*)error;
-(BOOL)validateResponse:(id)response data:(id)data error:(id*)error;
-(id)init;
@end
