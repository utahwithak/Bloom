//
//  Target.h
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "TreeNode.h"

@class Bug, Project;

@interface Target : TreeNode

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *bugs;
@property (nonatomic, retain) Project *project;
@end

@interface Target (CoreDataGeneratedAccessors)

- (void)addBugsObject:(Bug *)value;
- (void)removeBugsObject:(Bug *)value;
- (void)addBugs:(NSSet *)values;
- (void)removeBugs:(NSSet *)values;

@end
