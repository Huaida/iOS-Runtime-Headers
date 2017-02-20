/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSelectionSnapshot : NSObject {
    PXSectionedDataSource * _dataSource;
    PXIndexPathSet * _selectedIndexPaths;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXIndexPathSet *selectedIndexPaths;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (id)init;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (BOOL)isIndexPathSelected:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (id)selectedIndexPaths;

@end