//
//  Project.m
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import "Project.h"
#import "Target.h"


@implementation Project

@dynamic name;
@dynamic targets;

-(id)children{
    return self.targets;
}
@end
