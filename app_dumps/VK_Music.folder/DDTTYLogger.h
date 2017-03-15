/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DDAbstractLogger.h"
#import "DDLogger.h"
#import "VK_Music-Structs.h"

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol DDLogFormatter;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {
	unsigned _calendarUnitFlags;
	NSString* _appName;
	char* _app;
	unsigned long _appLen;
	NSString* _processID;
	char* _pid;
	unsigned long _pidLen;
	BOOL _colorsEnabled;
	NSMutableArray* _colorProfilesArray;
	NSMutableDictionary* _colorProfilesDict;
	BOOL _automaticallyAppendNewlineForCustomFormatters;
}
@property(readonly, assign, nonatomic) NSString* loggerName;
@property(readonly, assign, nonatomic) dispatch_queue_s* loggerQueue;
@property(retain, nonatomic) id<DDLogFormatter> logFormatter;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL automaticallyAppendNewlineForCustomFormatters;
@property(assign) BOOL colorsEnabled;
+(id)sharedInstance;
+(unsigned)codeIndexForColor:(UIColor*)color;
+(void)getRed:(float*)red green:(float*)green blue:(float*)blue fromColor:(UIColor*)color;
+(void)initialize_colors_256;
+(void)initialize_colors_16;
-(void).cxx_destruct;
-(void)logMessage:(id)message;
-(void)clearAllColors;
-(void)clearColorsForAllTags;
-(void)clearColorsForAllFlags;
-(void)clearColorsForTag:(id)tag;
-(void)clearColorsForFlag:(unsigned)flag context:(int)context;
-(void)clearColorsForFlag:(unsigned)flag;
-(void)setForegroundColor:(UIColor*)color backgroundColor:(UIColor*)color2 forTag:(id)tag;
-(void)setForegroundColor:(UIColor*)color backgroundColor:(UIColor*)color2 forFlag:(unsigned)flag context:(int)context;
-(void)setForegroundColor:(UIColor*)color backgroundColor:(UIColor*)color2 forFlag:(unsigned)flag;
-(void)loadDefaultColorProfiles;
-(id)init;
@end
