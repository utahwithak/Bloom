//
//  TreeNode.h
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TreeNode;

@interface TreeNode : NSManagedObject

@property (nonatomic, retain) NSString * displayName;
@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) TreeNode *parent;
@end

@interface TreeNode (CoreDataGeneratedAccessors)

- (void)addChildrenObject:(TreeNode *)value;
- (void)removeChildrenObject:(TreeNode *)value;
- (void)addChildren:(NSSet *)values;
- (void)removeChildren:(NSSet *)values;

@end
