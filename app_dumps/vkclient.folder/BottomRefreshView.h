/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIRefreshControl, UITableView;

__attribute__((visibility("hidden")))
@interface BottomRefreshView : XXUnknownSuperclass {
	BOOL skipOffset;
	UIRefreshControl* _refresh;
	UITableView* _weakTableView;
}
@property(readonly, retain, nonatomic) UIRefreshControl* refresh;
@property(assign, nonatomic) UITableView* weakTableView;
+(void)tableView:(id)view adjustInsets:(id)insets;
+(void)initialize;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)inset;
-(void)setContentOffset:(CGPoint)offset;
-(void)setFrame:(CGRect)frame;
-(double)_verticalVelocity;
-(BOOL)isTracking;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

