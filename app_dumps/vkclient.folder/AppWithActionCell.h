/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class NSString, UIButton, VKMImageView, UILabel, VKAPIAppWithActionButton;

__attribute__((visibility("hidden")))
@interface AppWithActionCell : VKMCell {
	NSString* _actionButtonTitle;
	VKMImageView* _appIcon;
	UILabel* _title;
	UILabel* _details;
	UIButton* _actionButton;
}
@property(copy, nonatomic) NSString* actionButtonTitle;
@property(readonly, retain, nonatomic) VKAPIAppWithActionButton* domain;
@property(readonly, retain, nonatomic) UIButton* actionButton;
@property(readonly, retain, nonatomic) UILabel* details;
@property(readonly, retain, nonatomic) UILabel* title;
@property(readonly, retain, nonatomic) VKMImageView* appIcon;
+(void)prerender:(id)prerender;
-(void)prepareForReuse;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)layoutSubviews;
-(void)actionButtonTapped;
-(id)createSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

