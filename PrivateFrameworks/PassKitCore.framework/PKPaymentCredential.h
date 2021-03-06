/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSURL;

@interface PKPaymentCredential : NSObject <NSSecureCoding> {
    NSString *_applicationIdentifier;
    NSString *_cardSecurityCode;
    NSString *_cardholderName;
    int _credentialType;
    int _eligibilityStatus;
    NSString *_expiration;
    NSURL *_iconURL;
    NSString *_identifier;
    NSString *_longDescription;
    NSURL *_passURL;
    NSString *_primaryAccountNumber;
    NSString *_sanitizedPrimaryAccountNumber;
    int _status;
    NSString *_termsID;
    NSURL *_termsURL;
}

@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * cardSecurityCode;
@property(readonly) NSString * cardTypeDescription;
@property(copy) NSString * cardholderName;
@property int credentialType;
@property int eligibilityStatus;
@property(readonly) NSString * eligibilityStatusDescription;
@property(copy) NSString * expiration;
@property(copy) NSURL * iconURL;
@property(copy) NSString * identifier;
@property(copy) NSString * longDescription;
@property(copy) NSURL * passURL;
@property(copy) NSString * primaryAccountNumber;
@property(copy) NSString * sanitizedPrimaryAccountNumber;
@property int status;
@property(readonly) NSString * statusDescription;
@property(copy) NSString * termsID;
@property(copy) NSURL * termsURL;

+ (id)credentialWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)applicationIdentifier;
- (id)cardSecurityCode;
- (id)cardTypeDescription;
- (id)cardholderName;
- (int)credentialType;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (int)eligibilityStatus;
- (id)eligibilityStatusDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)iconURL;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)longDescription;
- (id)passURL;
- (id)primaryAccountNumber;
- (id)sanitizedPrimaryAccountNumber;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCardSecurityCode:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setCredentialType:(int)arg1;
- (void)setEligibilityStatus:(int)arg1;
- (void)setExpiration:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTermsID:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (int)status;
- (id)statusDescription;
- (id)termsID;
- (id)termsURL;

@end
