/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PollAnswerButtonComponentState : XXUnknownSuperclass {
	BOOL _voted;
	BOOL _selected;
	unsigned _votes;
	unsigned _totalVotes;
	unsigned _maxVotes;
	NSNumber* _answerId;
}
@property(assign, nonatomic) BOOL selected;
@property(copy, nonatomic) NSNumber* answerId;
@property(assign, nonatomic) unsigned maxVotes;
@property(assign, nonatomic) unsigned totalVotes;
@property(assign, nonatomic) unsigned votes;
@property(assign, nonatomic) BOOL voted;
-(void).cxx_destruct;
@end

