//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Kate on 12/15/12.
//  Copyright (c) 2012 Kate Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject
- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;
@end
