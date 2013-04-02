//
//  QMocha.h
//  QuickDialog
//
//  Created by Ashton Williams on 2/04/13.
//
//

#import <Mocha/Mocha.h>

@interface QMocha : Mocha

/*!
 * @method sharedRuntime
 * @abstract The shared runtime instance for use by QuickDialog.
 *
 * @discussion
 * QuickDialog will manage its own Mocha runtime instead of taking the global one.
 *
 * @result A Mocha object
 */
+ (QMocha *)sharedRuntimeQuickDialog;


@end
