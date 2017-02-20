/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout {
    BOOL  _shouldShowProgressFooter;
}

@property (nonatomic, readonly) NSIndexPath *globalProgressFooterIndex;
@property (nonatomic) BOOL shouldShowProgressFooter;

- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)globalProgressFooterIndex;
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { float x1; float x2; })arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setShouldShowProgressFooter:(BOOL)arg1;
- (BOOL)shouldShowProgressFooter;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { float x1; float x2; })arg2;

@end