/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewComponentController.h"
#import "vkclient-Structs.h"
#import "ModelObserver.h"
#import "ModelRenderDelegate.h"

@class NSString, Model, NSSet;

__attribute__((visibility("hidden")))
@interface UICollectionViewModelComponentController : UICollectionViewComponentController <ModelObserver, ModelRenderDelegate> {
	Model* _model;
	NSSet* _pendingViewed;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) Model* model;
@property(retain, nonatomic) NSSet* pendingViewed;
+(Class)modelClass;
-(void).cxx_destruct;
-(void)_updateVisibleCellsDisplaying;
-(void)scrollViewDidScroll:(id)scrollView;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(id)model:(id)model componentRenderContextForObject:(id)object context:(id)context;
-(id)model:(id)model componentForObject:(id)object withContext:(id)context;
-(id)model:(id)model renderObject:(id)object withContext:(id)context;
-(id)renderContextForModel:(id)model;
-(void)setComponent:(id)component;
-(id)index;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(id)initWithView:(id)view context:(id)context;
-(void)dealloc;
@end

