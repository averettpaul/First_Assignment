//
//  AppDelegate.h
//  First_Assignment
//
//  Created by AVERETT BARKSDALE on 9/26/16.
//  Copyright © 2016 AVERETT BARKSDALE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

