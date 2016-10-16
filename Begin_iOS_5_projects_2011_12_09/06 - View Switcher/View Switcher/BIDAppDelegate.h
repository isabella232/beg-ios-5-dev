//
//  BIDAppDelegate.h
//  View Switcher
//
//  Created by Dave Mark on 9/21/11.
//  Copyright (c) 2011 Dave Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BIDSwitchViewController;
@interface BIDAppDelegate : UIResponder <UIApplicationDelegate> 

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BIDSwitchViewController *switchViewController;
@end
