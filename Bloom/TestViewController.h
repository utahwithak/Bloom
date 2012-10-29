//
//  TestViewController.h
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/28/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TestViewController : NSViewController
@property (weak) IBOutlet NSTextField *projectField;
@property (weak) IBOutlet NSTextField *targetField;
- (IBAction)newProject:(id)sender;
- (IBAction)newTarget:(id)sender;

@end
