//
//  Target.m
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import "Target.h"
#import "Bug.h"
#import "Project.h"


@implementation Target

@dynamic name;
@dynamic bugs;
@dynamic project;
-(id)targets{
    return self.bugs;
}
@end
