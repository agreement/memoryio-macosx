#import <Cocoa/Cocoa.h>
#import "ServiceManagement/SMLoginItem.h"

#import "ImageSnap.h"
#import "NSGIF.h"
#import "AVRecorderDocument.h"
#import "NotificationManager.h"
//
//  TSAppDelegate.h
//  TSAppDelegate
//
//  Created by Jacob Rosenthal on 8/22/13.
//  Copyright 2012 Augmentous. All rights reserved.
//
@interface TSAppDelegate : NSObject <NSUserNotificationCenterDelegate, NSSharingServiceDelegate, NSApplicationDelegate>

@property IBOutlet NSMenu *statusMenu;
@property IBOutlet NSMenuItem *startupMenuItem;
@property (weak) IBOutlet NSWindow *windowOutlet;
@property (weak) IBOutlet NSImageView *previewImage;

- (IBAction)quitAction:(id)sender;
- (IBAction)forceAction:(id)sender;
- (IBAction)forceActionGIF:(id)sender;
- (IBAction)aboutAction:(id)sender;
- (IBAction)startupAction:(id)sender;
- (IBAction)preview:(id)sender;
- (IBAction)tweet:(id)sender;

@end
