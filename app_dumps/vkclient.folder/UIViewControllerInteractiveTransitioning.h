/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIViewControllerInteractiveTransitioning <NSObject>
@optional
@property(readonly, assign, nonatomic) BOOL wantsInteractiveStart;
@property(readonly, assign, nonatomic) int completionCurve;
@property(readonly, assign, nonatomic) float completionSpeed;
@required
-(void)startInteractiveTransition:(id)transition;
@end

