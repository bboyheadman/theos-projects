/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSMutableArray, VKMImageView, VKProfileContentBlockView, UIScrollView, UIButton, UILabel, UIImageView, PhotoStreamController, Component5HostView, ProfileCoverImageView;

__attribute__((visibility("hidden")))
@interface ProfileView : XXUnknownSuperclass {
	BOOL _shortMode;
	BOOL _skipAnimation;
	BOOL _cover;
	UILabel* _name;
	ProfileCoverImageView* _coverView;
	PhotoStreamController* _stream;
	VKProfileContentBlockView* _mainSectionView;
	VKMImageView* _photo;
	UIImageView* _verified;
	UIButton* _buttonInfo;
	UIButton* _buttonEdit;
	UILabel* _subtitle;
	UILabel* _status;
	UIButton* _buttonMessage;
	UIButton* _buttonStatus;
	NSMutableArray* _blocks;
	UIButton* _buttonPost;
	UIButton* _buttonPhoto;
	UIButton* _buttonPlace;
	UIButton* _buttonSuggest;
	UIScrollView* _blocksScroll;
	UIButton* _buttonPhotos;
	UIView* _separatorBlocks;
	UIView* _separatorPhotos;
	UIView* _separatorActons;
	UIView* _footer;
	UIView* _separatorAppButton;
	Component5HostView* _appButtonsView;
	Component5HostView* _appWidgetView;
	UIView* _separatorWidgetButton;
	UIView* _separatorMarket;
	UIView* _temporaryPostPanelSeparator;
}
@property(retain, nonatomic) VKProfileContentBlockView* mainSectionView;
@property(retain, nonatomic) PhotoStreamController* stream;
@property(retain, nonatomic) ProfileCoverImageView* coverView;
@property(retain, nonatomic) UILabel* name;
@property(assign, nonatomic) BOOL cover;
@property(assign, nonatomic) BOOL skipAnimation;
@property(assign, nonatomic) BOOL shortMode;
@property(retain, nonatomic) UIView* temporaryPostPanelSeparator;
@property(retain, nonatomic) UIView* separatorMarket;
@property(retain, nonatomic) UIView* separatorWidgetButton;
@property(retain, nonatomic) Component5HostView* appWidgetView;
@property(retain, nonatomic) Component5HostView* appButtonsView;
@property(retain, nonatomic) UIView* separatorAppButton;
@property(retain, nonatomic) UIView* footer;
@property(retain, nonatomic) UIView* separatorActons;
@property(retain, nonatomic) UIView* separatorPhotos;
@property(retain, nonatomic) UIView* separatorBlocks;
@property(retain, nonatomic) UIButton* buttonPhotos;
@property(retain, nonatomic) UIScrollView* blocksScroll;
@property(retain, nonatomic) UIButton* buttonSuggest;
@property(retain, nonatomic) UIButton* buttonPlace;
@property(retain, nonatomic) UIButton* buttonPhoto;
@property(retain, nonatomic) UIButton* buttonPost;
@property(retain, nonatomic) NSMutableArray* blocks;
@property(retain, nonatomic) UIButton* buttonStatus;
@property(retain, nonatomic) UIButton* buttonMessage;
@property(retain, nonatomic) UILabel* status;
@property(retain, nonatomic) UILabel* subtitle;
@property(retain, nonatomic) UIButton* buttonEdit;
@property(retain, nonatomic) UIButton* buttonInfo;
@property(retain, nonatomic) UIImageView* verified;
@property(retain, nonatomic) VKMImageView* photo;
-(void).cxx_destruct;
-(void)actionProfileAppButton:(id)button;
-(void)actionProfileViewAllPhotos:(id)photos;
-(void)actionPostPlace:(id)place;
-(void)actionPostPhoto:(id)photo;
-(void)actionPost:(id)post;
-(void)actionBlock:(id)block;
-(void)actionStatus:(id)status;
-(void)actionMessage:(id)message;
-(void)actionEdit:(id)edit;
-(void)actionInfo:(id)info;
-(void)actionProfilePhoto:(id)photo;
-(id)hostController;
-(float)renderProfile:(id)profile user:(BOOL)user owner:(BOOL)owner mainSection:(id)section appWidget:(id)widget;
-(float)renderProfile:(id)profile user:(BOOL)user owner:(BOOL)owner;
-(void)dealloc;
@end
