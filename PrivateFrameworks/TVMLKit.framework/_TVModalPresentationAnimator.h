/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVModalPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPresenting, nonatomic, readonly) BOOL presenting;
@property (readonly) Class superclass;

+ (id)_alphaAnimationFactory;
+ (id)_transformAnimationFactory;

- (void)animateTransition:(id)arg1;
- (id)initForPresenting:(BOOL)arg1;
- (BOOL)isPresenting;
- (double)transitionDuration:(id)arg1;

@end
