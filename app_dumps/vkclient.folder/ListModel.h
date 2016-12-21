/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class ListModelContext;

__attribute__((visibility("hidden")))
@interface ListModel : LoadingModel {
	int _defaultPage;
}
@property(retain, nonatomic) ListModelContext* lastContext;
@property(assign, nonatomic) int defaultPage;
-(id)setupDefaultPage:(int)page;
-(BOOL)shouldLoad:(id)load;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)spawnContext:(id)context;
-(void)updateContext:(id)context withLoadedItems:(id)loadedItems andData:(id)data;
-(id)itemsToAppend:(id)append to:(id)to context:(id)context;
-(id)itemsToAppend:(id)append to:(id)to;
-(id)processWithComponent:(id)component;
-(id)process:(id)process;
-(id)listFromData:(id)data;
-(id)request:(int)request count:(int)count;
-(id)initWithSession:(id)session;
@end

