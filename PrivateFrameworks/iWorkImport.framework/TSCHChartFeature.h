/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSCHChartType;

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent> {
    NSArray *mCategoryAxisIDs;
    TSCHChartType *mChartType;
    NSArray *mValueAxisIDs;
}

@property(retain,readonly) NSArray * categoryAxisIDs;
@property(retain,readonly) NSArray * valueAxisIDs;

- (id)categoryAxisIDs;
- (id)categoryLabelPositioner;
- (void)clearParent;
- (id)columnShapeUIName;
- (void)dealloc;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (bool)drawValueLabelsForZero;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)initWithChartType:(id)arg1;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg2;
- (bool)isHorizontal;
- (bool)isPie;
- (int)labelOrientation;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (double)maxDepthRatio;
- (void)p_initializeAxisIDs;
- (Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4;
- (Class)presetImagerClass;
- (bool)requiresYAxisOrdinal;
- (bool)reverseSingleColumnLegendOrder;
- (double)sageMaxDepthRatio;
- (int)stackingSignRule;
- (Class)stageClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (bool)supportsBackgroundFill;
- (bool)supportsBorderFrame;
- (bool)supportsBubbleOptions;
- (bool)supportsCategoryAxisMinorTickmarks;
- (bool)supportsCategoryAxisSeriesNames;
- (bool)supportsCategoryLabelsInChartRangeEditor;
- (bool)supportsColumnShape;
- (bool)supportsConnectingLines;
- (bool)supportsEditing;
- (bool)supportsEditingForAxisID:(id)arg1;
- (bool)supportsElementChunking;
- (bool)supportsElementSeriesNames;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsIndividualShadowRendering;
- (bool)supportsInterSetDepthGap;
- (bool)supportsLabelExplosion;
- (bool)supportsMoreThanOneLiveCategory;
- (bool)supportsMultipleSeriesTypes;
- (bool)supportsPercentNumberFormatting;
- (bool)supportsReverseChunking;
- (bool)supportsSeriesLabels;
- (bool)supportsSharedAndSeparateX;
- (bool)supportsShowLabelsInFrontOption;
- (bool)supportsSymbolOverhang;
- (bool)supportsTrendLines;
- (bool)supportsValueLabels;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (id)valueAxisIDs;
- (id)valueLabelPositioner;

@end