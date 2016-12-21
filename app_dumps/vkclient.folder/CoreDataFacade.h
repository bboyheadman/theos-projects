/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectModel, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface CoreDataFacade : XXUnknownSuperclass {
	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _coordinator;
}
@property(readonly, retain, nonatomic) NSPersistentStoreCoordinator* coordinator;
@property(readonly, retain, nonatomic) NSManagedObjectModel* model;
-(id)createContext;
-(void)dealloc;
-(id)initWithModelFile:(id)modelFile andStoreURL:(id)url setNoBackup:(BOOL)backup;
@end

