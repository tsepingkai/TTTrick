//
//  UIView+UIView_JHAnimationKit.h
//  JHAnimationKitExample
//
//  Created by Jeff Hurray on 4/29/15.
//  Copyright (c) 2015 jhurray. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import "JHChainableBlocks.h"


@interface UIView (UIView_JHChainableAnimations)

#pragma mark - Chainable Properties

// Makers
// Affects views position and bounds
- (UIView *)makeFrame:(CGRect)rect;
- (UIView *)makeBounds:(CGRect)rect;
- (UIView *)makeSizeWidth:(CGFloat)width Height:(CGFloat)height;
- (UIView *)makeOriginX:(CGFloat)x Y:(CGFloat)y;
- (UIView *)makeCenterX:(CGFloat)x Y:(CGFloat)y;
- (UIView *)makeX:(CGFloat)f ;
- (UIView *)makeY:(CGFloat)f;
- (UIView *)makeWidth:(CGFloat)f;
- (UIView *)makeHeight:(CGFloat)f;
- (UIView *)makeOpacity:(CGFloat)f;
- (UIView *)makeBackground:(UIColor *)color;
- (UIView *)makeBorderColor:(UIColor *)color;
- (UIView *)makeBorderWidth:(CGFloat)f;
- (UIView *)makeCornerRadius:(CGFloat)f;
- (UIView *)makeScale:(CGFloat)f;
- (UIView *)makeScaleX:(CGFloat)f;
- (UIView *)makeScaleY:(CGFloat)f;
- (UIView *)makeAnchorX:(CGFloat) x Y:(CGFloat)y;

// Movers
// Affects views position and bounds
- (UIView *)moveX:(CGFloat)f;
- (UIView *)moveY:(CGFloat)f;
- (UIView *)moveX:(CGFloat)x Y:(CGFloat)y;
- (UIView *)moveHeight:(CGFloat)f;
- (UIView *)moveWidth:(CGFloat)f;
- (UIView *)movePolarWithRadius:(CGFloat)radius Angle:(CGFloat)angle;

// Transforms
// Affects views transform property NOT position and bounds
// These should be used for AutoLayout
// These should NOT be mixed with properties that affect position and bounds
- (UIView *)transformIdentity;
- (UIView *)rotate:(CGFloat)angle;
- (UIView *)transformX:(CGFloat)f;
- (UIView *)transformY:(CGFloat)f;
- (UIView *)transformZ:(CGFloat)f;
- (UIView *)transformX:(CGFloat)x Y:(CGFloat)y;
- (UIView *)transformScale:(CGFloat)f; // x and y equal
- (UIView *)transformScaleX:(CGFloat)f;
- (UIView *)transformScaleY:(CGFloat)f;

// AutoLayout
// Affects constants of constraints
- (UIView *)makeConstraint:(NSLayoutConstraint *)constraint Constant:(CGFloat)f;
- (UIView *)moveConstraint:(NSLayoutConstraint *)constraint Constant:(CGFloat)f;

// Bezier Paths
// Animation effects dont apply
- (UIView *)moveOnPath:(UIBezierPath *)path;
- (UIView *)moveAndRotateOnPath:(UIBezierPath *)path;
- (UIView *)moveAndReverseRotateOnPath:(UIBezierPath *)path;
// A bezier path starting from the views layers position
- (UIBezierPath *) bezierPathForAnimation; // Not a chainable property

// Anchors
- (UIView *) anchorDefault;
- (UIView *) anchorCenter;
- (UIView *) anchorTopLeft;
- (UIView *) anchorTopRight;
- (UIView *) anchorBottomLeft;
- (UIView *) anchorBottomRight;
- (UIView *) anchorTop;
- (UIView *) anchorBottom;
- (UIView *) anchorLeft;
- (UIView *) anchorRight;

#pragma mark - Multiple Animation Chaining

-(UIView *)thenAfter:(double)t;

#pragma mark - Animations

// Delay
- (UIView *)delay:(NSTimeInterval)t;
- (UIView *)wait:(NSTimeInterval)t; // same as delay

// Executors
- (UIView *)animate:(double)duration;
- (UIView *)animateWithDuration:(NSTimeInterval)duration Completion:(JHAnimationCompletion)completion;

@property (nonatomic, copy) JHAnimationCompletion animationCompletion;

#pragma mark - Semantics (Easier to read)

// view.moveX(10).thenAfter(1.0).seconds.rotate(90) == view.moveX(10).thenAfter(1.0).rotate(90)
- (UIView *) seconds;

#pragma mark - Animation Effects

// Simple effects
- (UIView *) easeIn;
- (UIView *) easeOut;
- (UIView *) easeInOut;
- (UIView *) easeBack;
- (UIView *) spring;
- (UIView *) bounce;

// Animation Keyframe Calculation Functions
// Functions from https://github.com/NachoSoto/NSBKeyframeAnimation
// source: http://gsgd.co.uk/sandbox/jquery/easing/jquery.easing.1.3.js
- (UIView *) easeInQuad;
- (UIView *) easeOutQuad;
- (UIView *) easeInOutQuad;
- (UIView *) easeInCubic;
- (UIView *) easeOutCubic;
- (UIView *) easeInOutCubic;
- (UIView *) easeInQuart;
- (UIView *) easeOutQuart;
- (UIView *) easeInOutQuart;
- (UIView *) easeInQuint;
- (UIView *) easeOutQuint;
- (UIView *) easeInOutQuint;
- (UIView *) easeInSine;
- (UIView *) easeOutSine;
- (UIView *) easeInOutSine;
- (UIView *) easeInExpo;
- (UIView *) easeOutExpo;
- (UIView *) easeInOutExpo;
- (UIView *) easeInCirc;
- (UIView *) easeOutCirc;
- (UIView *) easeInOutCirc;
- (UIView *) easeInElastic;
- (UIView *) easeOutElastic;
- (UIView *) easeInOutElastic;
- (UIView *) easeInBack;
- (UIView *) easeOutBack;
- (UIView *) easeInOutBack;
- (UIView *) easeInBounce;
- (UIView *) easeOutBounce;
- (UIView *) easeInOutBounce;

@end
