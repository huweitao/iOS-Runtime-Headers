/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVModalPageBezelViewController : UIViewController {
    UIColor * _bezelBackgroundColor;
    float  _bezelCornerRadius;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    UIViewController * _contentViewController;
}

@property (nonatomic, retain) UIColor *bezelBackgroundColor;
@property (nonatomic) float bezelCornerRadius;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (id)bezelBackgroundColor;
- (float)bezelCornerRadius;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)contentViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setBezelBackgroundColor:(id)arg1;
- (void)setBezelCornerRadius:(float)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
