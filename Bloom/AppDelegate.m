//
//  AppDelegate.m
//  Bloom
//
//  Created by Carl & Hannah Wieland on 10/26/12.
//  Copyright (c) 2012 balanceoni. All rights reserved.
//

#import "AppDelegate.h"
#import "DataManager.h"
@implementation AppDelegate

// Performs the save action for the application, which is to send the save: message to the application's managed object context. Any encountered errors are presented to the user.
- (IBAction)saveAction:(id)sender
{
    [DataManager save];
}

- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication *)sender
{
    return [[DataManager shared] checkShouldTerminate:sender];
}

@end
