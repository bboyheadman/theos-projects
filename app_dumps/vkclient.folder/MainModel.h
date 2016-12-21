/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKLongPollServiceDelegate.h"
#import "Model.h"
#import "AudioPlayerObserver.h"
#import "ReusableAudioMessagePlayerObserver.h"
#import "vkclient-Structs.h"

@class NSString, VKLongPollService, UsersModel, MessagesModel, ActivityModel, AudioPlayer, ReusableAudioMessagePlayer, StoreActiveModel, StickersSuggestionsModel, CountrySelectionModel;

__attribute__((visibility("hidden")))
@interface MainModel : Model <AudioPlayerObserver, ReusableAudioMessagePlayerObserver, VKLongPollServiceDelegate> {
	BOOL playerWasPlayingBeforeReusableAudioMessagePlayerInterruption;
	BOOL otherAppPlayerWasPlayingBeforeReusableAudioMessagePlayerInterruption;
	VKLongPollService* _lps;
	UsersModel* _users;
	MessagesModel* _messages;
	ActivityModel* _activity;
	AudioPlayer* _player;
	ReusableAudioMessagePlayer* _reusableAudioMessagePlayer;
	StoreActiveModel* _stickersModel;
	StickersSuggestionsModel* _stickersSuggestionsModel;
	CountrySelectionModel* _countrySelectionModel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) StickersSuggestionsModel* stickersSuggestionsModel;
@property(readonly, retain, nonatomic) StoreActiveModel* stickersModel;
@property(readonly, retain, nonatomic) ReusableAudioMessagePlayer* reusableAudioMessagePlayer;
@property(readonly, retain, nonatomic) AudioPlayer* player;
@property(readonly, retain, nonatomic) ActivityModel* activity;
@property(readonly, retain, nonatomic) MessagesModel* messages;
@property(readonly, retain, nonatomic) UsersModel* users;
@property(readonly, retain, nonatomic) VKLongPollService* lps;
@property(retain, nonatomic) CountrySelectionModel* countrySelectionModel;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(void)reusableAudioMessagePlayerUpdated:(id)updated;
-(void)playerChangedItem:(id)item;
-(void)playerUpdated:(id)updated;
-(id)lazyCountrySelectionModel;
-(void)processLPSUpdates:(id)updates;
-(void)dealloc;
-(id)initWithSession:(id)session;
-(id)paymentsPopupController;
-(id)sendGiftControllerForStickers:(id)stickers context:(id)context;
-(id)sendGiftControllerForObject:(id)object context:(id)context;
-(id)sendGiftControllerWithModel:(id)model;
-(id)userGiftsController:(id)controller statContext:(id)context;
-(id)giftsCatalogSectionController:(id)controller;
-(id)giftsCatalogForUser:(id)user statContext:(id)context;
-(id)attachGiftsCatalogWithContext:(id)context;
-(id)giftsCatalogWithContext:(id)context;
-(id)selectCity:(id)city inCountry:(id)country;
-(id)selectCountry:(id)country;
-(id)applicationScreenForAppWithID:(id)anId installed:(BOOL)installed fromPush:(BOOL)push;
-(id)appsWithFilter:(unsigned)filter ofGenreID:(id)genreID title:(id)title fromPush:(BOOL)push;
-(id)appsActivityForApplication:(id)application;
-(id)appsInvitesForApplication:(id)application;
-(id)appsRequestsForApplication:(id)application;
-(id)appsDashboard;
-(id)storeStockItem:(id)item product:(id)product productName:(id)name someStickerId:(id)anId referrerContext:(id)context;
-(id)storeManage:(int)manage;
-(id)store:(int)store section:(int)section context:(id)context source:(id)source;
-(id)store:(int)store;
-(id)auidioPreview:(id)preview;
-(id)accountBanned;
-(id)pollVoters:(id)voters;
-(id)checkinsInPlace:(id)place;
-(id)place:(id)place item:(id)item;
-(id)photoBrowserSingle:(id)single;
-(id)photoBrowser:(id)browser;
-(id)videoPlayer:(id)player createPlayer:(BOOL)player2;
-(id)videoPlayerIden:(id)iden createPlayer:(BOOL)player;
-(id)likesFriends:(id)friends;
-(id)likes:(id)likes;
-(id)likes:(id)likes filter:(int)filter;
-(id)detail:(id)detail input:(BOOL)input playbackTime:(XXStruct_pwHToB)time;
-(id)detail:(id)detail input:(BOOL)input;
-(id)comment:(id)comment;
-(id)videoAlbums:(id)albums albumContext:(id)context;
-(id)audioAlbums:(id)albums;
-(id)primaryVideo;
-(id)videoAlbumWithContext:(id)context class:(Class)aClass;
-(id)attachVideoAlbumWithContext:(id)context;
-(id)videoAlbumWithContext:(id)context;
-(id)audioAlbum:(id)album withClass:(Class)aClass extra:(BOOL)extra;
-(id)attachAudioAlbum:(id)album extra:(BOOL)extra;
-(id)audioAlbum:(id)album extra:(BOOL)extra;
-(id)photoAlbumsEdit:(id)edit;
-(id)photoAlbumEdit:(id)edit;
-(id)photoAlbum:(id)album;
-(id)p2pDetailed:(id)detailed needUpdate:(BOOL)update;
-(id)p2p;
-(id)attachP2PWithDialogId:(id)dialogId;
-(id)advancedSearchWithFilter:(id)filter;
-(id)recommendedPages:(int)pages;
-(id)findFriends:(int)friends;
-(id)introWizardForMask:(int)mask;
-(id)lookupAddressBook:(id)book;
-(id)lookupFacebookFriendsWithToken:(id)token;
-(id)pushSourceController;
-(id)privacyUsersSelectionController:(id)controller;
-(id)privacyEditController:(id)controller whiteBar:(BOOL)bar;
-(id)settings:(int)settings;
-(id)settings;
-(id)marketCollectionScreenForCollectionWithGroup:(id)group statsContext:(id)context;
-(id)marketProductScreenForProductWithGroup:(id)group statsContext:(id)context;
-(id)marketLandingPageForGroupID:(id)groupID;
-(id)favProducts;
-(id)favLinks;
-(id)favPosts;
-(id)favVideo;
-(id)favPhotos;
-(id)favUsers;
-(id)selectorFaves;
-(id)wallExtra:(id)extra;
-(id)newsSections;
-(id)newsSources;
-(id)newsSearch:(id)search;
-(id)newsComments;
-(id)selectorFeedback;
-(id)newsFeedback;
-(id)newsPhotos;
-(id)newsSuggestions;
-(id)newsFeedList:(id)list;
-(id)newsfeedSettings;
-(id)newsFeed;
-(id)newsFeedWithMode:(int)mode;
-(id)selectorNews:(BOOL)news;
-(id)messagesAttachmentsLinks:(id)links;
-(id)messagesAttachmentsDocs:(id)docs;
-(id)messagesAttachmentsVideos:(id)videos;
-(id)messagesAttachmentsPhotos:(id)photos;
-(id)messagesAttachmentsSelector:(id)selector;
-(id)usersSelectionWithOptions:(int)options filterPredicate:(id)predicate;
-(id)usersSelection:(BOOL)selection dialog:(BOOL)dialog allowClear:(BOOL)clear filterPredicate:(id)predicate;
-(id)usersSelection:(BOOL)selection dialog:(BOOL)dialog allowClear:(BOOL)clear;
-(id)message:(id)message inDialog:(id)dialog;
-(id)messagesDialogEdit:(id)edit;
-(id)messagesDialogTarget:(id)target;
-(id)messagesDialogs;
-(id)groupCatalog:(id)catalog;
-(id)groupCatalogSelectorWithInfo:(id)info;
-(id)groupRequests;
-(id)selectorGroups;
-(id)audioRecommendations:(id)recommendations;
-(id)selectorAudio;
-(id)photos:(id)photos userOnly:(BOOL)only class:(Class)aClass;
-(id)attachPhotos:(id)photos userOnly:(BOOL)only;
-(id)photos:(id)photos userOnly:(BOOL)only;
-(id)friendLists;
-(id)friendsSuggestions;
-(id)friendsAllRequests;
-(id)friendsRequests:(BOOL)requests;
-(id)friendsBirthdays:(id)birthdays;
-(id)selectorFriends;
-(id)topic:(id)topic gid:(id)gid tid:(id)tid offset:(int)offset;
-(id)board:(id)board;
-(id)members:(id)members;
-(id)docs:(id)docs withClass:(Class)aClass;
-(id)attachDocsVC:(id)vc;
-(id)docs:(id)docs;
-(id)notes:(id)notes;
-(id)profilePages:(id)pages;
-(id)subscriptions:(id)subscriptions followers:(BOOL)followers;
-(id)groups:(id)groups admin:(int)admin search:(BOOL)search needInvites:(BOOL)invites;
-(id)friends:(id)friends list:(id)list mutual:(BOOL)mutual requests:(BOOL)requests;
-(id)profileInfo;
-(id)selectorGroup:(id)group;
-(id)selectorProfile:(id)profile statsContext:(id)context;
-(id)selectorProfileWithUser:(id)user statsContext:(id)context;
-(id)selectorProfile:(id)profile;
-(id)selectorSource:(id)source;
-(id)placeSelectionWithClass:(Class)aClass canAdd:(BOOL)add;
-(id)attachPlaceSelection;
-(id)placeSelection;
-(id)ownerIfProfileController:(id)controller;
@end

