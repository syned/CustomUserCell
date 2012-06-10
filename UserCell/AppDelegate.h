//
//  AppDelegate.h
//  UserCell
//
//  Created by Mac on 6/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MasterViewController.h"
#import "DetailViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) MasterViewController *masterViewController;
@property (strong, nonatomic) UISplitViewController *splitViewController;
@property (strong, nonatomic) DetailViewController *detailViewController;

@end
