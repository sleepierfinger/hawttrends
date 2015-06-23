//
//  HTCountryQueue.h
//  HawtTrends
//
//  Created by Pierre Felgines on 23/06/2015.
//  Copyright (c) 2015 Pierre Felgines. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTCountryQueue : NSObject

+ (void)addCountry:(NSString *)country;
+ (NSArray *)countries;
+ (NSArray *)countriesToIndex:(NSInteger)index;
+ (void)flush;

@end