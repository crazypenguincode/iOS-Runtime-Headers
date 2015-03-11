/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSSettings, NSArray, NSSet;

@interface FBSSceneSettings : NSObject <NSCopying, NSMutableCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGPoint { 
        double x; 
        double y; 
    } _contentOffset;
    } _frame;
    NSSet *_ignoreOcclusionReasons;
    long long _interfaceOrientation;
    double _level;
    NSArray *_occlusions;
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
    bool_backgrounded;
    bool_occluded;
    bool_occludedHasBeenCalculated;
}

@property(getter=isBackgrounded,readonly) bool backgrounded;
@property(readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(readonly) long long interfaceOrientation;
@property(readonly) double level;
@property(copy,readonly) NSArray * occlusions;

+ (bool)_isMutable;
+ (id)settings;

- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)ignoreOcclusionReasons;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isBackgrounded;
- (bool)isEqual:(id)arg1;
- (bool)isIgnoringOcclusions;
- (bool)isOccluded;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (double)level;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (id)transientLocalSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end