/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString, NSNumber, NSArray;

__attribute__((visibility("hidden")))
@interface VKPoll : VKDomain {
	BOOL _anonymous;
	BOOL _board;
	unsigned _created;
	NSString* _question;
	int _votes;
	NSNumber* _answer_id;
	NSArray* _answers;
}
@property(assign, nonatomic) BOOL board;
@property(assign, nonatomic) BOOL anonymous;
@property(retain, nonatomic) NSArray* answers;
@property(retain, nonatomic) NSNumber* answer_id;
@property(assign, nonatomic) int votes;
@property(retain, nonatomic) NSString* question;
@property(assign, nonatomic) unsigned created;
-(id)mapAnswers;
-(int)pollDataState;
-(void)updateWithPoll:(id)poll;
-(int)maximumVotesForAnswer;
-(BOOL)answered;
-(BOOL)loaded;
-(BOOL)process:(id)process context:(id)context;
-(void)updateAnswersWithMaxRate:(float)maxRate;
-(void)domainOnEditCopy:(id)copy;
-(void)dealloc;
@end

