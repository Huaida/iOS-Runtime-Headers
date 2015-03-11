/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSArray, NSString;

@interface BSXPCCodingArray : NSObject <NSFastEnumeration, BSXPCCoding> {
    NSArray *_array;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end