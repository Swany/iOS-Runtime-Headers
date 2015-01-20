/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigIOSurfaceData : NSData {
    const void *_bytes;
    unsigned long long _length;
    struct __IOSurface { } *_surface;
}

+ (id)dataWithIOSurface:(struct __IOSurface { }*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithIOSurface:(struct __IOSurface { }*)arg1;
+ (void)initialize;

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 length:(unsigned long long)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (unsigned long long)length;

@end