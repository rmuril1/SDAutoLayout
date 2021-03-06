//  NSArray+SDAutoLayout.h
//
//  Created by Sam Grover on 10/01/2014.
//  Copyright (c) 2014 SetDirection. All rights reserved.
//
//  Based on:
//
//  NSArray+PureLayout.h
//  v1.1.0
//  https://github.com/smileyborg/PureLayout
//
//  Copyright (c) 2012 Richard Turton
//  Copyright (c) 2013-2014 Tyler Fox
//
//  This code is distributed under the terms and conditions of the MIT license.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//

#import "SDAutoLayoutDefines.h"


#pragma mark - NSArray+SDAutoLayout

/**
 A category on NSArray that provides a simple yet powerful interface for applying constraints to groups of views.
 */
@interface NSArray (SDAutoLayout)


#pragma mark Constrain Multiple Views

/** Aligns views in this array to one another along a given edge. */
- (NSArray *)sdal_alignViewsToEdge:(SDALEdge)edge;

/** Aligns views in this array to one another along a given axis. */
- (NSArray *)sdal_alignViewsToAxis:(SDALAxis)axis;

/** Matches a given dimension of all the views in this array. */
- (NSArray *)sdal_matchViewsDimension:(SDALDimension)dimension;

/** Sets the given dimension of all the views in this array to a given size. */
- (NSArray *)sdal_setViewsDimension:(SDALDimension)dimension toSize:(CGFloat)size;


#pragma mark Distribute Multiple Views

/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (variable) in the dimension along the axis and will have spacing (fixed) between them. */
- (NSArray *)sdal_distributeViewsAlongAxis:(SDALAxis)axis withFixedSpacing:(CGFloat)spacing alignment:(NSLayoutFormatOptions)alignment;

/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (variable) in the dimension along the axis and will have spacing (fixed) between them, with optional insets from the first and last views to their superview. */
- (NSArray *)sdal_distributeViewsAlongAxis:(SDALAxis)axis withFixedSpacing:(CGFloat)spacing insetSpacing:(BOOL)shouldSpaceInsets alignment:(NSLayoutFormatOptions)alignment;

/** Distributes the views in this array equally along the selected axis in their superview. Views will have spacing (fixed) between them, with optional insets from the first and last views to their superview, and optionally constrained to the same size in the dimension along the axis. */
- (NSArray *)sdal_distributeViewsAlongAxis:(SDALAxis)axis withFixedSpacing:(CGFloat)spacing insetSpacing:(BOOL)shouldSpaceInsets matchedSizes:(BOOL)shouldMatchSizes alignment:(NSLayoutFormatOptions)alignment;

/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (fixed) in the dimension along the axis and will have spacing (variable) between them. */
- (NSArray *)sdal_distributeViewsAlongAxis:(SDALAxis)axis withFixedSize:(CGFloat)size alignment:(NSLayoutFormatOptions)alignment;

/** Distributes the views in this array equally along the selected axis in their superview. Views will be the same size (fixed) in the dimension along the axis and will have spacing (variable) between them, with optional insets from the first and last views to their superview. */
- (NSArray *)sdal_distributeViewsAlongAxis:(SDALAxis)axis withFixedSize:(CGFloat)size insetSpacing:(BOOL)shouldSpaceInsets alignment:(NSLayoutFormatOptions)alignment;

@end
