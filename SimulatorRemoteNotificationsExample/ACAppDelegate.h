//
//  ACAppDelegate.h
//  SimulatorRemoteNotificationsExample
//
//  Created by Arnaud Coomans on 13/02/13.
//  Copyright (c) 2013 acoomans. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ACAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

// used by unit tests
@property (nonatomic, assign) BOOL didRegister;
@property (nonatomic, assign) BOOL didReceive;

@end
