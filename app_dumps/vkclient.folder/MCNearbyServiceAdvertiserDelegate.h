/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MCNearbyServiceAdvertiserDelegate <NSObject>
-(void)advertiser:(id)advertiser didReceiveInvitationFromPeer:(id)peer withContext:(id)context invitationHandler:(id)handler;
@optional
-(void)advertiser:(id)advertiser didNotStartAdvertisingPeer:(id)peer;
@end

