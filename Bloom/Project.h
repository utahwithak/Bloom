//
//  Project.h
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "TreeNode.h"

@class Target;

@interface Project : TreeNode

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *targets;
@end

@interface Project (CoreDataGeneratedAccessors)

- (void)addTargetsObject:(Target *)value;
- (void)removeTargetsObject:(Target *)value;
- (void)addTargets:(NSSet *)values;
- (void)removeTargets:(NSSet *)values;

@end
