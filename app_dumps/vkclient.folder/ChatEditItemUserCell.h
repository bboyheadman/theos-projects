/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMGroupedCell.h"

@class VKMImageView, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface ChatEditItemUserCell : VKMGroupedCell {
	VKMImageView* _image;
	UILabel* _name;
	UIButton* _online;
}
@property(readonly, retain, nonatomic) UIButton* online;
@property(readonly, retain, nonatomic) UILabel* name;
@property(readonly, retain, nonatomic) VKMImageView* image;
+(void)prerender:(id)prerender;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

