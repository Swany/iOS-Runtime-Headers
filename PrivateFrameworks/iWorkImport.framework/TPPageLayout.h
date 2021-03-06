/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSFastEnumeration>, <TPMasterDrawableProvider>, <TSWPHeaderFooterProvider>, NSArray, TPBodyLayout, TPFootnoteContainerLayout, TPInflatableFootnoteContainerLayout, TPMarginAdjustLayout, TSURetainedPointerKeyDictionary, TSWPPadding;

@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TPAttachmentLayoutParent> {
    BOOL _childLayoutsValid;
    unsigned int _contentFlags;
    TPInflatableFootnoteContainerLayout *_footnoteContainerLayout;
    <TSWPHeaderFooterProvider> *_headerFooterProvider;
    TPMarginAdjustLayout *_marginAdjustLayout;
    <TPMasterDrawableProvider> *_masterDrawableProvider;
    TSURetainedPointerKeyDictionary *_oldChildLayouts;
    unsigned int _pageCount;
    unsigned int _pageNumber;
}

@property(readonly) BOOL allowsBody;
@property(readonly) BOOL allowsFootnotes;
@property(readonly) BOOL alwaysStartsNewTarget;
@property(readonly) NSArray * anchoredDrawableLayouts;
@property(readonly) TPBodyLayout * bodyLayout;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bodyRect;
@property(readonly) <NSFastEnumeration> * childTextLayoutsForExteriorWrap;
@property(readonly) unsigned int columnCount;
@property(readonly) BOOL columnsAreLeftToRight;
@property(readonly) NSArray * floatingDrawableLayouts;
@property(readonly) TPFootnoteContainerLayout * footnoteContainerLayout;
@property(readonly) TSWPPadding * layoutMargins;
@property(readonly) TPMarginAdjustLayout * marginAdjustLayout;
@property(readonly) <TPMasterDrawableProvider> * masterDrawableProvider;
@property(readonly) unsigned int pageCount;
@property(readonly) unsigned int pageIndex;
@property(readonly) unsigned int pageNumber;
@property(readonly) BOOL shrinkTextToFit;
@property(readonly) float textScaleFactor;

- (void)addAttachmentLayout:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })adjustedInsetsForTarget:(id)arg1;
- (BOOL)allowsBody;
- (BOOL)allowsFootnotes;
- (BOOL)allowsHeaderFooter;
- (BOOL)alwaysStartsNewTarget;
- (id)anchoredDrawableLayouts;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { float x1; float x2; })arg2;
- (id)bodyLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bodyRect;
- (id)childTextLayoutsForExteriorWrap;
- (unsigned int)columnCount;
- (BOOL)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (void)evacuateOldChildLayoutCache;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)floatingDrawableLayouts;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })footnoteContainerFrameWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)footnoteContainerLayout;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (id)headerFooterProvider;
- (BOOL)headerFooterProviderValid;
- (float)heightAvailableForFootnotes;
- (void)inflateFootnotesInFootnoteContainer:(id)arg1;
- (void)invalidateBodyAndMarginLayouts;
- (void)invalidateFootnoteContainers;
- (void)invalidateFootnoteSeparatorLine;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateHeaderFooterLayouts;
- (void)invalidateHeaderFooterLayoutsCache;
- (void)invalidateLayoutsForPageCountChange;
- (void)invalidateSize;
- (BOOL)isReadyForBodyLayout;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)layoutForChildInfo:(id)arg1;
- (id)layoutMargins;
- (id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(BOOL)arg2;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)marginAdjustLayout;
- (id)masterDrawableProvider;
- (float)maxAutoGrowHeightForTextLayout:(id)arg1;
- (float)maxAutoGrowWidthForTextLayout:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2;
- (id)p_existingChildLayoutForInfo:(id)arg1;
- (void)p_insertBodyLayout;
- (id)p_insertChildLayoutForInfo:(id)arg1;
- (void)p_insertFootnoteContainerLayout;
- (id)p_insertValidatedChildLayoutForInfo:(id)arg1;
- (void)p_insertValidatedFloatingLayouts;
- (void)p_insertValidatedMarginAdjustLayout;
- (void)p_insertValidatedMasterLayouts;
- (void)p_invalidatePageControllerForDynamicOperation;
- (id)p_orderedChildInfos;
- (void)p_populateOldChildLayoutsWithLayouts:(id)arg1;
- (void)p_sortChildLayouts;
- (void)p_updateFromLayoutInfoProvider;
- (unsigned int)pageCount;
- (unsigned int)pageCountForAttachment:(id)arg1;
- (unsigned int)pageIndex;
- (id)pageLayout;
- (unsigned int)pageNumber;
- (unsigned int)pageNumberForAttachment:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5;
- (id)primaryLayoutForInfo:(id)arg1;
- (void)processWidowAndInflation;
- (BOOL)providesGuidesForChildLayouts;
- (void)rebuildChildLayoutsOnNextValidation;
- (Class)repClassForTextLayout:(id)arg1;
- (void)resetFootnoteLayoutsForReinflation;
- (BOOL)shouldHeaderFooterBeVisible:(int)arg1;
- (BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned int)arg1;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (BOOL)shrinkTextToFit;
- (BOOL)textIsVertical;
- (void)validate;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (void)wrappableChildInvalidated:(id)arg1;

@end
