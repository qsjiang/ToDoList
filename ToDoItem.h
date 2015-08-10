//
//  ToDoItem.h
//  ToDoList
//
//  Created by qsjiang on 2015-08-06.
//  Copyright (c) 2015 Jim Jiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString * itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
