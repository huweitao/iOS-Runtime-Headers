/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIAdaptivePresentationControllerDelegate>, <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, NSString, UITraitCollection, UIView, UIViewController;

@interface UIPresentationController : NSObject <UIAppearanceContainer, UIContentContainer, UITraitEnvironment, _UIAppearanceContainer, _UIContentContainerInternal, _UITraitEnvironmentInternal> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __computeToEndFrameForCurrentTransition;

    UIView *__currentPresentationSuperview;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __currentTransitionDidComplete;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __fromViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __toViewForCurrentTransition;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __transitionViewForCurrentTransition;

    BOOL _changedPresentingViewControllerDuringAdaptation;
    BOOL _containerIgnoresDirectTouchEvents;
    UIView *_containerView;
    <UIViewControllerInteractiveTransitioning> *_currentInteractionController;
    <UIViewControllerAnimatedTransitioning> *_currentTransitionController;
    <UIAdaptivePresentationControllerDelegate> *_delegate;
    SEL _didEndSelector;
    BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    BOOL _isDisconnectedRoot;
    UITraitCollection *_lastNotifiedTraitCollection;
    BOOL _monitorsSystemLayoutFittingSize;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    UITraitCollection *_overrideTraitCollection;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
    UIView *_presentationView;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    UIView *_snapshotOverlayView;
    int _state;
    id _target;
    BOOL _transitionAsDisconnectedRoot;
}

@property(copy) id _computeToEndFrameForCurrentTransition;
@property(getter=_currentPresentationSuperview,setter=_setCurrentPresentationSuperview:,retain) UIView * _currentPresentationSuperview;
@property(copy) id _currentTransitionDidComplete;
@property(copy) id _fromViewForCurrentTransition;
@property(getter=_preferredContentSize,setter=_setPreferredContentSize:) struct CGSize { float x1; float x2; } _preferredContentSize;
@property(copy) id _toViewForCurrentTransition;
@property(copy) id _transitionViewForCurrentTransition;
@property(getter=_changedPresentingViewControllerDuringAdaptation,setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation;
@property(getter=_containerIgnoresDirectTouchEvents,setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents;
@property(retain) UIView * containerView;
@property(getter=_currentInteractionController,setter=_setCurrentInteractionController:,retain) <UIViewControllerInteractiveTransitioning> * currentInteractionController;
@property(getter=_currentTransitionController,setter=_setCurrentTransitionController:,retain) <UIViewControllerAnimatedTransitioning> * currentTransitionController;
@property(copy,readonly) NSString * debugDescription;
@property <UIAdaptivePresentationControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) UITraitCollection * overrideTraitCollection;
@property(readonly) struct CGSize { float x1; float x2; } preferredContentSize;
@property(readonly) int presentationStyle;
@property(getter=_presentationView,setter=_setPresentationView:,retain) UIView * presentationView;
@property(retain) UIViewController * presentedViewController;
@property(retain) UIViewController * presentingViewController;
@property int state;
@property(readonly) Class superclass;
@property(readonly) UITraitCollection * traitCollection;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_defaultBaseContentInsetsForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (struct { int x1; int x2; })__sizeClassPair;
- (id)_activePresentationController;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (id)_appearanceContainer;
- (Class)_appearanceGuideClass;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_baseContentInsets;
- (void)_beginOcclusionIfNecessary:(BOOL)arg1;
- (BOOL)_changedPresentingViewControllerDuringAdaptation;
- (id)_childPresentationController;
- (void)_cleanup;
- (id)_computeToEndFrameForCurrentTransition;
- (BOOL)_containerIgnoresDirectTouchEvents;
- (void)_containerViewWillLayoutSubviews;
- (void)_coverWithSnapshot;
- (id)_currentContextPresentationSuperview;
- (id)_currentInteractionController;
- (id)_currentPresentationSuperview;
- (id)_currentTransitionController;
- (id)_currentTransitionDidComplete;
- (int)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_enableOcclusion:(BOOL)arg1;
- (id)_firstCurrentContextChildInWindow;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_forcesPreferredAnimationControllers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (id)_fromViewForCurrentTransition;
- (id)_fullscreenPresentationSuperview;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (BOOL)_isAdapted;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_parentPresentationController;
- (id)_parentPresentationControllerImmediate:(BOOL)arg1;
- (id)_parentTraitCollection;
- (id)_parentTraitEnvironment;
- (id)_passthroughViews;
- (void)_performBlockWithoutTriggeringResponderEvents:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (struct CGSize { float x1; float x2; })_preferredContentSize;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentationView;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_preserveResponderAcrossWindows;
- (void)_releaseSnapshot;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(int)arg1 transitionCoordinator:(id)arg2;
- (void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1;
- (void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setCurrentInteractionController:(id)arg1;
- (void)_setCurrentPresentationSuperview:(id)arg1;
- (void)_setCurrentTransitionController:(id)arg1;
- (void)_setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setPresentationView:(id)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (BOOL)_shouldGrabPresentersView;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (id)_toViewForCurrentTransition;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (id)_transitionViewForCurrentTransition;
- (BOOL)_transitioningFrom;
- (BOOL)_transitioningTo;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_updateTraitsIfNecessary;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (int)adaptivePresentationStyle;
- (int)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (id)containerView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)delegate;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (BOOL)dismissed;
- (BOOL)dismissing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)overrideTraitCollection;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (int)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)presented;
- (id)presentedView;
- (id)presentedViewController;
- (BOOL)presenting;
- (id)presentingViewController;
- (void)runTransitionForCurrentState;
- (void)setDelegate:(id)arg1;
- (void)setOverrideTraitCollection:(id)arg1;
- (void)setState:(int)arg1;
- (void)set_computeToEndFrameForCurrentTransition:(id)arg1;
- (void)set_currentTransitionDidComplete:(id)arg1;
- (void)set_fromViewForCurrentTransition:(id)arg1;
- (void)set_toViewForCurrentTransition:(id)arg1;
- (void)set_transitionViewForCurrentTransition:(id)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (int)state;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)transitionDidStart;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end