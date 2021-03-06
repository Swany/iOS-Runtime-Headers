/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, TICharacterSetDescription, TIKeyEventMap, TIKeyboardBehaviors, TIKeyboardCandidate;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
    union { 
        int integerValue; 
        struct { 
            unsigned int canHandleKeyHitTest : 1; 
            unsigned int ignoresDeadKeys : 1; 
            unsigned int needsKeyHitTestResults : 1; 
            unsigned int shouldExtendPriorWord : 1; 
            unsigned int suppliesCompletions : 1; 
            unsigned int supportsNumberKeySelection : 1; 
            unsigned int supportsSetPhraseBoundary : 1; 
            unsigned int suppressCompletionsForFieldEditor : 1; 
            unsigned int usesAutoDeleteWord : 1; 
            unsigned int usesCandidateSelection : 1; 
            unsigned int commitsAcceptedCandidate : 1; 
            unsigned int nextInputWouldStartSentence : 1; 
            unsigned int inputStringIsExemptFromChecker : 1; 
            unsigned int suppressPlaceholderCandidate : 1; 
            unsigned int usesAutocorrectionLists : 1; 
        } fields; 
    TIKeyboardCandidate *_autocorrectionRecordForInputString;
    unsigned int _initialCandidateBatchCount;
    unsigned int _inputCount;
    unsigned int _inputIndex;
    NSString *_inputString;
    TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription *_inputsToReject;
    TIKeyEventMap *_keyEventMap;
    TIKeyboardBehaviors *_keyboardBehaviors;
    } _mask;
    NSString *_replacementForDoubleSpace;
    NSString *_searchStringForMarkedText;
    NSString *_shadowTyping;
    TICharacterSetDescription *_shortcutCompletions;
    BOOL _shouldAddModifierSymbolsToWordCharacters;
    TICharacterSetDescription *_terminatorsDeletingAutospace;
    TICharacterSetDescription *_terminatorsPreventingAutocorrection;
    TICharacterSetDescription *_wordCharacters;
    NSString *_wordSeparator;
}

@property(retain) TIKeyboardCandidate * autocorrectionRecordForInputString;
@property BOOL canHandleKeyHitTest;
@property BOOL commitsAcceptedCandidate;
@property BOOL ignoresDeadKeys;
@property unsigned int initialCandidateBatchCount;
@property unsigned int inputCount;
@property unsigned int inputIndex;
@property(copy) NSString * inputString;
@property BOOL inputStringIsExemptFromChecker;
@property(copy) TICharacterSetDescription * inputsPreventingAcceptSelectedCandidate;
@property(copy) TICharacterSetDescription * inputsToReject;
@property(retain) TIKeyEventMap * keyEventMap;
@property(retain) TIKeyboardBehaviors * keyboardBehaviors;
@property BOOL needsKeyHitTestResults;
@property BOOL nextInputWouldStartSentence;
@property(copy) NSString * replacementForDoubleSpace;
@property(copy) NSString * searchStringForMarkedText;
@property(copy) NSString * shadowTyping;
@property(copy) TICharacterSetDescription * shortcutCompletions;
@property BOOL shouldAddModifierSymbolsToWordCharacters;
@property BOOL shouldExtendPriorWord;
@property BOOL suppliesCompletions;
@property BOOL supportsNumberKeySelection;
@property BOOL supportsSetPhraseBoundary;
@property BOOL suppressCompletionsForFieldEditor;
@property BOOL suppressPlaceholderCandidate;
@property(copy) TICharacterSetDescription * terminatorsDeletingAutospace;
@property(copy) TICharacterSetDescription * terminatorsPreventingAutocorrection;
@property BOOL usesAutoDeleteWord;
@property BOOL usesAutocorrectionLists;
@property BOOL usesCandidateSelection;
@property(copy) TICharacterSetDescription * wordCharacters;
@property(copy) NSString * wordSeparator;

+ (BOOL)supportsSecureCoding;

- (BOOL)acceptInputString:(id)arg1;
- (id)autocorrectionRecordForInputString;
- (BOOL)canHandleKeyHitTest;
- (BOOL)commitsAcceptedCandidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)ignoresDeadKeys;
- (id)initWithCoder:(id)arg1;
- (unsigned int)initialCandidateBatchCount;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (id)inputString;
- (BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (BOOL)inputStringIsExemptFromChecker;
- (id)inputsPreventingAcceptSelectedCandidate;
- (id)inputsToReject;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (BOOL)needsKeyHitTestResults;
- (BOOL)nextInputWouldStartSentence;
- (id)replacementForDoubleSpace;
- (id)searchStringForMarkedText;
- (void)setAutocorrectionRecordForInputString:(id)arg1;
- (void)setCanHandleKeyHitTest:(BOOL)arg1;
- (void)setCommitsAcceptedCandidate:(BOOL)arg1;
- (void)setIgnoresDeadKeys:(BOOL)arg1;
- (void)setInitialCandidateBatchCount:(unsigned int)arg1;
- (void)setInputCount:(unsigned int)arg1;
- (void)setInputIndex:(unsigned int)arg1;
- (void)setInputString:(id)arg1;
- (void)setInputStringIsExemptFromChecker:(BOOL)arg1;
- (void)setInputsPreventingAcceptSelectedCandidate:(id)arg1;
- (void)setInputsToReject:(id)arg1;
- (void)setKeyEventMap:(id)arg1;
- (void)setKeyboardBehaviors:(id)arg1;
- (void)setNeedsKeyHitTestResults:(BOOL)arg1;
- (void)setNextInputWouldStartSentence:(BOOL)arg1;
- (void)setReplacementForDoubleSpace:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setShadowTyping:(id)arg1;
- (void)setShortcutCompletions:(id)arg1;
- (void)setShouldAddModifierSymbolsToWordCharacters:(BOOL)arg1;
- (void)setShouldExtendPriorWord:(BOOL)arg1;
- (void)setSuppliesCompletions:(BOOL)arg1;
- (void)setSupportsNumberKeySelection:(BOOL)arg1;
- (void)setSupportsSetPhraseBoundary:(BOOL)arg1;
- (void)setSuppressCompletionsForFieldEditor:(BOOL)arg1;
- (void)setSuppressPlaceholderCandidate:(BOOL)arg1;
- (void)setTerminatorsDeletingAutospace:(id)arg1;
- (void)setTerminatorsPreventingAutocorrection:(id)arg1;
- (void)setUsesAutoDeleteWord:(BOOL)arg1;
- (void)setUsesAutocorrectionLists:(BOOL)arg1;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (void)setWordCharacters:(id)arg1;
- (void)setWordSeparator:(id)arg1;
- (id)shadowTyping;
- (id)shortcutCompletions;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (BOOL)shouldExtendPriorWord;
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (BOOL)stringEndsWord:(id)arg1;
- (BOOL)suppliesCompletions;
- (BOOL)supportsNumberKeySelection;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)suppressCompletionsForFieldEditor;
- (BOOL)suppressPlaceholderCandidate;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesAutocorrectionLists;
- (BOOL)usesCandidateSelection;
- (id)wordCharacters;
- (id)wordSeparator;

@end
