/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MREventsActionCommand.h"


@interface MRSendEventsCommand : MREventsActionCommand {
	int _criterion;
}
-(void)run;
-(id)initWithDBHelper:(id)dbhelper url:(id)url trackerParams:(id)params criterion:(int)criterion;
@end

