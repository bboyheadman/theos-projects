/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TimerTargetDelegate.h"

@class MPMoviePlayerController, NSString, TimerTarget, NSURLSession;
@protocol VideoStatsContextDelegate;

__attribute__((visibility("hidden")))
@interface VideoStatsProvider : XXUnknownSuperclass <TimerTargetDelegate> {
	double duration;
	double pos;
	double bitrate;
	int vigoQuality;
	int seq;
	int bufNum;
	BOOL isPaused;
	BOOL isBufferFull;
	BOOL isFinished;
	double bufferingStartTime;
	unsigned long long playbackStartTime;
	int timerTicker;
	BOOL _isQualityAdviserSupported;
	BOOL _isQualityAdvised;
	id<VideoStatsContextDelegate> _delegate;
	MPMoviePlayerController* _moviePlayer;
	NSString* _host;
	TimerTarget* _vsTimer;
	NSString* _clientId;
	NSString* _vigoUserId;
	NSURLSession* _urlSession;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* host;
@property(retain, nonatomic) MPMoviePlayerController* moviePlayer;
@property(assign, nonatomic) id<VideoStatsContextDelegate> delegate;
@property(assign, nonatomic) BOOL isQualityAdviserSupported;
@property(assign, nonatomic) BOOL isQualityAdvised;
@property(retain, nonatomic) NSURLSession* urlSession;
@property(copy, nonatomic) NSString* vigoUserId;
@property(copy, nonatomic) NSString* clientId;
@property(retain, nonatomic) TimerTarget* vsTimer;
-(void)processStatsURL:(id)url withResultBlock:(id)resultBlock;
-(void)processStatsURL:(id)url;
-(void)VSTimerCallback;
-(id)VSEvent:(int)event;
-(id)VSStatus:(id)status;
-(void)timerTargetFired:(id)fired;
-(void)movieReadytoPlayDidChange:(id)movieReadytoPlay;
-(void)moviePlaybackStateDidChange:(id)moviePlaybackState;
-(void)moviePlayBackLoadStateChange:(id)change;
-(void)movieDurationAvailable:(id)available;
-(void)qualityAdvise:(id)advise;
-(void)event:(int)event;
-(void)play:(int)play;
-(void)prepare;
-(void)dropPlayer;
-(void)setPlayer:(id)player;
-(void)dealloc;
@end
