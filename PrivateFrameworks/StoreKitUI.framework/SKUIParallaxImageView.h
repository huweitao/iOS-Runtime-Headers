/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _imagePadding;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    SKUIImageView * _innerImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (void)_updateInnerImageView;
- (id)image;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)placeholder;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImagePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end