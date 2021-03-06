/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class <AAUIFamilySetupPageDelegate>, NSString;

@interface AAUIFamilySetupOrganizerViewController : AAUIConfirmIdentityViewController <AAUIFamilySetupPage> {
    <AAUIFamilySetupPageDelegate> *_delegate;
}

@property(copy,readonly) NSString * debugDescription;
@property <AAUIFamilySetupPageDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (void)continueButtonWasTapped:(id)arg1;
- (id)delegate;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)instructions;
- (id)pageTitle;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)viewDidLoad;

@end
