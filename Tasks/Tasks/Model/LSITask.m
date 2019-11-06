//
//  LSITask.m
//  Tasks
//
//  Created by Mitchell Budge on 11/6/19.
//  Copyright © 2019 Lambda, Inc. All rights reserved.
//

#import "LSITask.h"

@interface LSITask () {

    NSString *_name;

}
@end

@implementation LSITask

- (NSString *)name {
    return _name;
}

- (void)setName:(NSString *)name {
    _name = [name copy];
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _name = self.name;
        _notes = self.notes;
        _dueDate = NSDate.date;
    }
    return self;
}

@end
