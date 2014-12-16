//
//  OSCoreLocationManager.h
//  OSLocationService
//
//  Created by Jake Skeates on 03/07/2014.
//  Copyright (c) 2014 Ordnance Survey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OSLocationServicePreferences.h"

@import CoreLocation;

@interface OSCoreLocationManager : NSObject

+ (OSLocationServiceAuthorizationStatus)authorizationStatus;
+ (OSLocationServiceAuthorizationStatus)OSAuthorizationStatusFromCLAuthorizationStatus:(CLAuthorizationStatus)clAuthorizationStatus;
+ (BOOL)locationUpdatesAvailable;
+ (BOOL)headingUpdatesAvailable;

@end