//
//  UIViewPBAddition.h
//  OS4
//
//  Created by Dmytro Mikheiev on 7/5/11.
//  Copyright 2011 POLAR-B. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIView (AppusAdditions)

/*
 * may be used as additional data store. to release object - assign NIL
 */
@property(nonatomic,retain) id pbTag;

/*
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic) CGFloat left;

/*
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat top;

/*
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat right;

/*
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat bottom;

/*
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic) CGFloat width;

/*
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic) CGFloat height;

/*
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic) CGFloat centerX;

/*
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic) CGFloat centerY;

/*
 * Shortcut for frame.origin
 */
@property (nonatomic) CGPoint origin;

/*
 * Shortcut for frame.size
 */
@property (nonatomic) CGSize size;

/*
 * Removes all subviews.
 */
- (void)removeAllSubviews;

@end
