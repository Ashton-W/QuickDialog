//
//  QMocha.m
//  QuickDialog
//
//  Created by Ashton Williams on 2/04/13.
//
//

#import "QMocha.h"

@implementation QMocha

+ (QMocha *)sharedRuntimeQuickDialog
{
	static dispatch_once_t onceQueue;
    static QMocha *qMocha = nil;
	
    dispatch_once(&onceQueue, ^{ qMocha = [[self alloc] init]; });
    return qMocha;
}


@end
