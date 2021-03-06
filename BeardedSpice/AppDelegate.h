//
//  AppDelegate.h
//  BeardedSpice
//
//  Created by Tyler Rhodes on 12/8/13.
//  Copyright (c) 2013 Tyler Rhodes / Jose Falcon. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "SPMediaKeyTap.h"

#import "Chrome.h"
#import "Safari.h"
#import "Tab.h"
#import "MediaStrategyRegistry.h"

@interface BeardedSpiceApp : NSApplication
@end

#import "MediaStrategy.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem *statusItem;
    
    ChromeApplication *chromeApp;
    SafariApplication *safariApp;

    SPMediaKeyTap *keyTap;

    id <Tab> activeTab;
    MediaStrategyRegistry *mediaStrategyRegistry;

    NSWindowController *_preferencesWindowController;
}

@property (nonatomic, readonly) NSWindowController *preferencesWindowController;

- (IBAction)openPreferences:(id)sender;

@end
