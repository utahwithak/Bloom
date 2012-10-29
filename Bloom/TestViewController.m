//
//  TestViewController.m
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import "TestViewController.h"
#import "DataManager.h"
@implementation TestViewController

- (IBAction)newProject:(id)sender {
    NSDictionary* dict = @{@"name" : self.projectField.stringValue};
    [DataManager addProjectWithDictionary:dict];
}

- (IBAction)newTarget:(id)sender {
    NSDictionary* dict = @{@"name" : self.targetField.stringValue,@"project":self.projectField.stringValue};
    [DataManager addTargetWithDictionary:dict];
    
    
}
@end
