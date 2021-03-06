/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSString;
@protocol SnippetStats;

__attribute__((visibility("hidden")))
@interface AttachmentComponentState : XXUnknownSuperclass {
	NSString* _title;
	NSString* _descr;
	NSString* _badge;
	UIImage* _icon;
	id _routeObject;
	id<SnippetStats> _snippetStats;
}
@property(retain, nonatomic) id<SnippetStats> snippetStats;
@property(retain, nonatomic) id routeObject;
@property(retain, nonatomic) UIImage* icon;
@property(retain, nonatomic) NSString* badge;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) NSString* title;
-(void).cxx_destruct;
@end

