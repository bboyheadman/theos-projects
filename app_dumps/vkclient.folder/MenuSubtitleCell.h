/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"
#import "vkclient-Structs.h"

@class UIImageView, UIButton, VKMImageView, UILabel, VKMenuSubtitleItem;

__attribute__((visibility("hidden")))
@interface MenuSubtitleCell : VKMCell {
	VKMImageView* _image;
	UILabel* _name;
	UILabel* _status;
	UIButton* _online;
	UIImageView* _verified;
}
@property(retain, nonatomic) VKMenuSubtitleItem* domain;
@property(retain, nonatomic) UIImageView* verified;
@property(readonly, retain, nonatomic) UIButton* online;
@property(readonly, retain, nonatomic) UILabel* status;
@property(readonly, retain, nonatomic) UILabel* name;
@property(readonly, retain, nonatomic) VKMImageView* image;
+(void)prerender:(id)prerender;
-(void)prepareForReuse;
-(void)dealloc;
-(float)photoSize;
-(float)photoPaddingTop;
-(UIEdgeInsets)labelEdgeInsets;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

