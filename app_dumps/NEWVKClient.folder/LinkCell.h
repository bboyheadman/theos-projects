/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class ImageAttachmentView;

__attribute__((visibility("hidden")))
@interface LinkCell : VKMCell {
	ImageAttachmentView* _attachment;
}
@property(readonly, retain, nonatomic) ImageAttachmentView* attachment;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

