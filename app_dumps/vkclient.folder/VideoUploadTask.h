/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AsyncOperation.h"
#import "NSURLSessionDataDelegate.h"
#import "NSCoding.h"

@class NSFileHandle, UILocalNotification, NSURLSession, NSURL, NSString, NSObject, NSArray, NSMutableDictionary;
@protocol VideoUploadTaskDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VideoUploadTask : AsyncOperation <NSCoding, NSURLSessionDataDelegate> {
	BOOL _suspended;
	BOOL _infinite;
	id<VideoUploadTaskDelegate> _delegate;
	NSURLSession* _urlSession;
	NSURL* _fileURL;
	NSURL* _uploadURL;
	unsigned _bgTaskIdentifier;
	NSString* _sessionID;
	NSObject<OS_dispatch_queue>* _tasksQueue;
	NSArray* _uploadingTasksInfo;
	NSMutableDictionary* _activeTasks;
	NSObject<OS_dispatch_queue>* _executionQueue;
	NSObject<OS_dispatch_queue>* _readingQueue;
	NSFileHandle* _fileHandle;
	UILocalNotification* _scheduledLocalNotification;
	long long _contentLength;
	long long _bytesSend;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL infinite;
@property(assign, nonatomic) __weak id<VideoUploadTaskDelegate> delegate;
@property(retain, nonatomic) UILocalNotification* scheduledLocalNotification;
@property(retain, nonatomic) NSFileHandle* fileHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* readingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* executionQueue;
@property(retain, nonatomic) NSMutableDictionary* activeTasks;
@property(retain, nonatomic) NSArray* uploadingTasksInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* tasksQueue;
@property(retain, nonatomic) NSString* sessionID;
@property(assign, nonatomic) unsigned bgTaskIdentifier;
@property(assign, nonatomic) BOOL suspended;
@property(assign, nonatomic) long long bytesSend;
@property(assign, nonatomic) long long contentLength;
@property(readonly, assign, nonatomic) NSURL* uploadURL;
@property(readonly, assign, nonatomic) NSURL* fileURL;
@property(readonly, assign, nonatomic) NSURLSession* urlSession;
+(id)restoredTaskWithData:(id)data;
+(id)taskWithFileURL:(id)fileURL uploadURL:(id)url;
-(void).cxx_destruct;
-(void)finishWithResponse:(id)response;
-(void)URLSession:(id)session task:(id)task didCompleteWithError:(id)error;
-(void)URLSession:(id)session dataTask:(id)task didReceiveData:(id)data;
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id)handler;
-(void)URLSession:(id)session task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
-(BOOL)isEqualFileURL:(id)url uploadURL:(id)url2;
-(void)validateRanges:(id)ranges;
-(void)fillTasks;
-(void)stop;
-(void)suspend;
-(void)resume;
-(void)cancel;
-(void)runAsync;
-(void)cancelLocalNotification;
-(void)appWillTerminate:(id)app;
-(void)appWillEnterForeground:(id)app;
-(void)appDidEnterBackground:(id)app;
-(id)cancelProducingResumeData;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithVideoURL:(id)videoURL uploadURL:(id)url;
-(void)commonInit;
-(void)dealloc;
@end

