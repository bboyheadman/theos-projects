/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMSiteAction.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface VKMChangePhoneAction : VKMSiteAction {
	NSURL* _redirect_url;
	id _handler;
}
@property(copy, nonatomic) id handler;
@property(retain, nonatomic) NSURL* redirect_url;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)complete:(int)complete phone:(id)phone phoneStatus:(id)status;
-(void)cancel;
-(id)targetURL;
-(id)initWithURL:(id)url handler:(id)handler;
-(void)dealloc;
@end

