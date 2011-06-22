//
//  closely_demoAppDelegate.h
//  closely-demo
//
//  Created by Martin May on 6/22/11.
//  Copyright 2011 forkly inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class closely_demoViewController;

@interface closely_demoAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet closely_demoViewController *viewController;

@end
