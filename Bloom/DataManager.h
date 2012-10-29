//
//  DataManager.h
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Repository;
@interface DataManager : NSObject

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSArray* sortDescriptors;
+(DataManager*)shared;
+(NSManagedObjectContext*)context;
+(void)save;
+(NSUndoManager*)undoManager;
+(BOOL)addBugWithDictionary:(NSDictionary*)data;
+(BOOL)addTargetWithDictionary:(NSDictionary*)data;
+(BOOL)addProjectWithDictionary:(NSDictionary*)data;

- (NSApplicationTerminateReply)checkShouldTerminate:(NSApplication *)sender;
-(void)clear;
@end
