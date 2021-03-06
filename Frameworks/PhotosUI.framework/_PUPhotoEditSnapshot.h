/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUPhotoEditSnapshot : NSObject {
    PHAdjustmentData * _adjustmentData;
    NSData * _baseImageData;
    NSData * _imageData;
    int  _workImageVersion;
}

@property (nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (nonatomic, retain) NSData *baseImageData;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) int workImageVersion;

- (void).cxx_destruct;
- (id)_copyData:(id)arg1;
- (id)adjustmentData;
- (id)baseImageData;
- (id)imageData;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseImageData:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setWorkImageVersion:(int)arg1;
- (int)workImageVersion;

@end
