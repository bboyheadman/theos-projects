/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface Flurry : XXUnknownSuperclass {
}
+(void)logPaymentTransaction:(id)transaction statusCallback:(id)callback;
+(void)removeInstallationIDFromKeychain;
+(BOOL)flurryUserInfo:(id)info;
+(BOOL)isFlurryUserInfo:(id)info;
+(void)disableWatchConnectivity;
+(void)disableTransferOfFlurryInfo;
+(BOOL)sendUsageInfo;
+(BOOL)hasUserOptedOut;
+(void)setFlurryOptOut:(BOOL)anOut;
+(void)shutdown;
+(void)setShowErrorInLogEnabled:(BOOL)logEnabled;
+(void)setAge:(int)age;
+(void)setGender:(id)gender;
+(void)setBackgroundSessionEnabled:(BOOL)enabled;
+(void)setSessionReportsOnPauseEnabled:(BOOL)enabled;
+(void)setSessionReportsOnCloseEnabled:(BOOL)enabled;
+(void)setCrashReportingEnabled:(BOOL)enabled;
+(void)setSecureTransportEnabledDeprecated:(BOOL)deprecated;
+(void)setAppCloudServerToStaging:(BOOL)staging;
+(void)setPulseCBServerURL:(id)url;
+(void)setPulseServerURL:(id)url;
+(void)setPulseEnabled:(BOOL)enabled;
+(void)setEventLoggingEnabled:(BOOL)enabled;
+(void)setUserID:(id)anId;
+(void)endTimedEvent:(id)event withParameters:(id)parameters;
+(int)logEvent:(id)event withParameters:(id)parameters timed:(BOOL)timed;
+(int)logEvent:(id)event timed:(BOOL)timed;
+(int)logEvent:(int)event syndicationID:(id)anId parameters:(id)parameters;
+(BOOL)areParametersValidForSyndicationEvent:(int)syndicationEvent syndicationID:(id)anId parameters:(id)parameters;
+(id)updateSyndicationParameters:(id)parameters syndicationID:(id)anId;
+(void)logPageView;
+(void)stopLogPageViewsForTarget:(id)target;
+(void)logAllPageViewsForTarget:(id)target;
+(void)logAllPageViews:(id)views;
+(void)logError:(id)error message:(id)message error:(id)error3;
+(void)logError:(id)error message:(id)message exception:(id)exception;
+(int)logEvent:(id)event withParameters:(id)parameters;
+(int)logEvent:(id)event;
+(void)addOrigin:(id)origin withVersion:(id)version withParameters:(id)parameters;
+(void)addOrigin:(id)origin withVersion:(id)version;
+(void)sessionProperties:(id)properties;
+(void)addSessionOrigin:(id)origin withDeepLink:(id)deepLink;
+(void)addSessionOrigin:(id)origin;
+(void)didFinishLaunchingWithOptionsInBackground:(id)background;
+(void)applicationDidBecomeActive;
+(void)applicationWillEnterForeground;
+(void)pauseSession;
+(void)pauseBackgroundSession;
+(void)endSession;
+(void)setDelegate:(id)delegate;
+(void)setLatitude:(double)latitude longitude:(double)longitude horizontalAccuracy:(float)accuracy verticalAccuracy:(float)accuracy4;
+(id)getSessionID;
+(BOOL)activeSessionExists;
+(void)startupNetworkAndSendSession;
+(void)startSession:(id)session;
+(void)startSession:(id)session withSessionBuilder:(id)sessionBuilder;
+(void)startSession:(id)session withOptions:(id)options withSessionBuilder:(id)sessionBuilder;
+(void)startSession:(id)session withOptions:(id)options;
+(void)createAndSendSession;
+(void)applicationWillResignActive;
+(void)setMaxSessionsSaved:(int)saved;
+(void)setSessionContinueSeconds:(int)seconds;
+(int)sessionContinueSeconds;
+(void)setServerURL:(id)url;
+(void)setDebugLogEnabled:(BOOL)enabled;
+(void)setLogLevel:(int)level;
+(id)getFlurryAgentVersion;
+(void)parseDictionary:(id)dictionary;
+(void)parsePropertyList:(id)list;
+(void)setLaunchOptions:(id)options;
+(void)setAppVersion:(id)version;
+(void)logAuthorizedEventWithSuccess:(BOOL)success;
@end
