//
//  Bug.h
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "TreeNode.h"

@class Target;

@interface Bug : TreeNode

@property (nonatomic, retain) NSSet *assignedToTarget;
@end

@interface Bug (CoreDataGeneratedAccessors)

- (void)addAssignedToTargetObject:(Target *)value;
- (void)removeAssignedToTargetObject:(Target *)value;
- (void)addAssignedToTarget:(NSSet *)values;
- (void)removeAssignedToTarget:(NSSet *)values;

@end
