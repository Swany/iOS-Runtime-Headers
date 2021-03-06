/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PFZlibDataDecompressionOptions : NSObject {
    id _createBuffer;
    BOOL _decompressAllAtOnce;
    id _growData;
    int _windowBits;
}

@property(copy) id createBuffer;
@property BOOL decompressAllAtOnce;
@property(copy) id growData;
@property int windowBits;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)createBuffer;
- (BOOL)decompressAllAtOnce;
- (id)growData;
- (void)setCreateBuffer:(id)arg1;
- (void)setDecompressAllAtOnce:(BOOL)arg1;
- (void)setGrowData:(id)arg1;
- (void)setWindowBits:(int)arg1;
- (int)windowBits;

@end
