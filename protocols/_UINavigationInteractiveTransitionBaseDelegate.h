/* Generated by RuntimeBrowser.
 */

@protocol _UINavigationInteractiveTransitionBaseDelegate <NSObject>

@required

- (UIPanGestureRecognizer *)gestureRecognizerForInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (BOOL)interactiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (BOOL)interactiveTransition:(_UINavigationInteractiveTransitionBase *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg3;
- (BOOL)shouldBeginInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1;
- (void)startInteractiveTransition:(_UINavigationInteractiveTransitionBase *)arg1;

@end
