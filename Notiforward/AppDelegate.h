//
//  AppDelegate.h
//  Notiforward
//
//  Created by Sparky on 15/04/15.
//  Copyright (c) 2015 minus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, CBPeripheralManagerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CBPeripheralManager *peripheralManager;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

