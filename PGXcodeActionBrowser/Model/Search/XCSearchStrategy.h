//
//  XCSearchStrategy.h
//  XCActionBar
//
//  Created by Pedro Gomes on 18/03/2015.
//  Copyright (c) 2015 Pedro Gomes. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
typedef void (^XCSearchServiceCompletionHandler)(NSArray /* id<XCSearchMatchEntry> */ *results);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
@protocol XCSearchStrategy <NSObject>

- (void)performSearchWithQuery:(NSString *)expression dataSet:(id<NSFastEnumeration>)dataSet completionHandler:(XCSearchServiceCompletionHandler)completionHandler;

@end
