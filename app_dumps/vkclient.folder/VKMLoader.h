/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, AFHTTPRequestOperation, MainModel, NSMutableArray;
@protocol OS_dispatch_queue, VKMLoaderDelegate;

__attribute__((visibility("hidden")))
@interface VKMLoader : XXUnknownSuperclass {
	int offset;
	int discover;
	BOOL cancelled;
	BOOL touched;
	NSObject<OS_dispatch_queue>* queue;
	BOOL _complete;
	MainModel* _main;
	NSMutableArray* _items;
	id<VKMLoaderDelegate> _delegate;
	AFHTTPRequestOperation* _op;
}
@property(assign, nonatomic) id<VKMLoaderDelegate> delegate;
@property(readonly, assign, nonatomic) BOOL complete;
@property(readonly, retain, nonatomic) MainModel* main;
@property(retain, nonatomic) NSMutableArray* items;
@property(retain, nonatomic) AFHTTPRequestOperation* op;
-(void)cancel;
-(void)discover:(int)discover;
-(void)touch;
-(void)load;
-(id)processResultsInBackground:(id)background data:(id)data;
-(id)requestForOffset:(int)offset count:(int)count success:(id)success failure:(id)failure;
-(void)dealloc;
-(id)initWithMain:(id)main;
@end

