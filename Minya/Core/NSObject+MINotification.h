//
//  NSObject+MINotification.h
//  MinyaDemo
//
//  Created by 00 on 2016/11/2.
//  Copyright © 2016年 Minya. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Callback for handling notification

 @param notification notification informations
 */
typedef void (^MINotificationBlock)(NSNotification *notification);

#pragma mark - NSObject MINotification Category
/**
 Category for NSObject's Notification
 */
@interface NSObject (MINotification)

/**
 Add current object as an observer for the special notification
 
 This method is an alternative method for NSNotificationCenter's `-addObserver:selector:name:object:` method.
 the sender parameter is the same as `object` parameter.

 @param notificationName notification name
 @param sender notification sender
 @param handler handler callback
 */
- (void)observeNotification:(NSString *)notificationName sender:(id)sender handler:(MINotificationBlock)handler;

/**
 Remove notification which belong to current object for the special name.

 @param notificationName notification name
 */
- (void)removeNotification:(NSString *)notificationName;

@end
