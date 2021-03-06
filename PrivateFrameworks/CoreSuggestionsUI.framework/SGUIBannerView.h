/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIBannerView : UIView <EKEventViewDelegate, EKEventViewDelegatePrivate, SGUIEventsAndContactsTableViewControllerDelegate> {
    UIButton * _addButton;
    UIImageView * _bannerImageView;
    NSLayoutConstraint * _buttonBaselineConstraint;
    UIButton * _closeButton;
    SGRealtimeContact * _currentContactSuggestion;
    SGRealtimeEvent * _currentEventSuggestion;
    <SGUIBannerViewDelegate> * _delegate;
    UIImageView * _disclosureImageView;
    NSMutableSet * _doneSuggestions;
    NSArray * _multipleBannerImageConstraints;
    NSArray * _orderedSuggestions;
    UIImageView * _secondaryBannerImageView;
    NSArray * _singleBannerImageConstraints;
    NSLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _suggestionPrefixText;
    UILabel * _suggestionText;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSLayoutConstraint * _titleBaselineConstraint;
}

@property (nonatomic, retain) UIButton *addButton;
@property (nonatomic, readonly, copy) UIImage *bannerImage;
@property (nonatomic, retain) UIImageView *bannerImageView;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, readonly, copy) NSArray *currentSuggestionGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SGUIBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) UIImage *disclosureImage;
@property (nonatomic, retain) UIImageView *disclosureImageView;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *orderedSuggestions;
@property (nonatomic, readonly, copy) UIImage *secondaryBannerImage;
@property (nonatomic, retain) UIImageView *secondaryBannerImageView;
@property (nonatomic, retain) UILabel *suggestionPrefixText;
@property (nonatomic, retain) UILabel *suggestionText;
@property (readonly) Class superclass;

+ (id)_calendarImage;
+ (id)_cancelImage;
+ (id)_contactsImage;
+ (id)_disclosureChevronImage:(BOOL)arg1;
+ (id)_suggestionsService;
+ (float)bannerHeightConstant;
+ (id)bannerViewForEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
+ (id)buttonFont;
+ (float)interLabelBaselineDeltaConstant;
+ (id)subtitleFont;
+ (id)titleFont;
+ (float)topMarginConstant;

- (void).cxx_destruct;
- (void)_confirmSuggestion:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_dismissBannerRejectSuggestion:(BOOL)arg1;
- (id)_filterRealtimeSuggestions:(id)arg1 forClass:(Class)arg2;
- (id)_findSuggestionsOfClass:(Class)arg1;
- (void)_installLayoutConstraints;
- (void)_rejectSuggestion:(id)arg1;
- (void)_setupViews;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_update;
- (void)_updateUI;
- (id)addButton;
- (BOOL)areMultipleSuggestionsPresent;
- (id)bannerImage;
- (id)bannerImageView;
- (id)closeButton;
- (void)confirmContactSuggestion;
- (void)confirmEventSuggestion;
- (void)controller:(id)arg1 doneWithSuggestion:(id)arg2;
- (void)controller:(id)arg1 wantsToConfirmSuggestion:(id)arg2;
- (void)controller:(id)arg1 wantsToIgnoreSuggestion:(id)arg2;
- (id)currentSuggestionGroup;
- (id)delegate;
- (id)disclosureImage;
- (id)disclosureImagePressed;
- (id)disclosureImageView;
- (void)dismissBanner:(id)arg1;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (id)initWithEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (unsigned int)numberOfSuggestions;
- (id)orderedSuggestions;
- (id)popoverSourceView;
- (id)secondaryBannerImage;
- (id)secondaryBannerImageView;
- (void)setAddButton:(id)arg1;
- (void)setBannerImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureImageView:(id)arg1;
- (void)setOrderedSuggestions:(id)arg1;
- (void)setSecondaryBannerImageView:(id)arg1;
- (void)setSuggestionPrefixText:(id)arg1;
- (void)setSuggestionText:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)suggestionPrefixText;
- (id)suggestionText;

@end
