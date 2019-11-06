//
//  LSITask.h
//  Tasks
//
//  Created by Mitchell Budge on 11/6/19.
//  Copyright © 2019 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSITask : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic) NSDate *dueDate;

@end

// atomic - default
// nonatomic - used whenever you need to override the setter or getter (which is pretty much all the time)

// readwrite - default
// readonly - used whenever you only want a getter and not a setter

// getter=
// setter=

// assign - default, used for all primitives like ints floats doubles
// copy - if you have an NSArray or an NSString, make it copy


// RETAIN CYCLES
// strong
// weak

// MANUAL REFERENCE COUNTING
// retain
// unsafe_unretained
