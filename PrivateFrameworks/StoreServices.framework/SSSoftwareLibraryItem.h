/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {
    NSMutableDictionary *_etags;
    BOOL _profileValidated;
    NSMutableDictionary *_propertyValues;
}

@property(getter=isProfileValidated) BOOL profileValidated;

- (id)ETagForAssetType:(id)arg1;
- (id)_initWithITunesMetadata:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isProfileValidated;
- (BOOL)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3;
- (void)setProfileValidated:(BOOL)arg1;
- (id)valueForProperty:(id)arg1;

@end