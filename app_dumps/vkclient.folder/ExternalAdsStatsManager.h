/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSString, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ExternalAdsStatsManager : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* processingQueue;
	int pendingRequests;
	NSString* _userAgentString;
	NSOperationQueue* _operationQueue;
}
@property(retain, nonatomic) NSString* userAgentString;
@property(retain) NSOperationQueue* operationQueue;
-(void)registerStats:(id)stats eventType:(int)type;
-(void)processUrl:(id)url;
-(void)dealloc;
-(id)init;
@end

