//
//  Batter.m
//  ClutchWinBaseball
//
//  Created by Joe Hoover on 2014-04-21.
//  Copyright (c) 2014 com.clutchwin.baseball. All rights reserved.
//

#import "BatterModel.h"

@implementation BatterModel

/*
// We use @dynamic for the properties in Core Data
@dynamic batterIdValue;
@dynamic firstName;
@dynamic lastName;
*/

- (NSString *)displayName {
    
    return [NSString stringWithFormat:@"%1$@ %2$@", self.firstName, self.lastName];
}

@end
