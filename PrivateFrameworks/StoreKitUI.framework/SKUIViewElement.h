/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElement : IKViewElement {
    <SKUIEntityProviding> * _entityProvider;
    <IKEntityValueProviding> * _entityValueProvider;
    <IKEntityValueProviding> * _explicitEntityValueProvider;
    NSMutableArray * _flattenedChildren;
    BOOL  _hasValidEntityProvider;
    int  _pinStyle;
}

@property (getter=isDynamicContainer, nonatomic, readonly) BOOL dynamicContainer;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) <SKUIEntityProviding> *entityProvider;
@property (nonatomic, readonly) NSSet *entityValueProperties;
@property (nonatomic, retain) <IKEntityValueProviding> *entityValueProvider;
@property (nonatomic, readonly) <SKUIEntityProviding> *explicitEntityProvider;
@property (nonatomic, retain) <IKEntityValueProviding> *explicitEntityValueProvider;
@property (nonatomic, readonly) NSArray *flattenedChildren;
@property (nonatomic, readonly, copy) NSString *indexBarEntryID;
@property (nonatomic, readonly, retain) NSString *itmlID;
@property (nonatomic, readonly) int pageComponentType;
@property (nonatomic, readonly) NSSet *personalizationLibraryItems;
@property (nonatomic, readonly) int pinStyle;
@property (nonatomic, readonly) BOOL rendersWithParallax;
@property (nonatomic, readonly) BOOL rendersWithPerspective;
@property (nonatomic, readonly) <NSCopying> *uniquingMapKey;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_entityValueProviderDidChange;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (id)ancestorElementMatchingPredicate:(id /* block */)arg1;
- (id)ancestorElementOfType:(unsigned int)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (BOOL)canMoveWithinCollection;
- (void)dealloc;
- (BOOL)descendsFromElementWithType:(unsigned int)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)entityProvider;
- (id)entityValueProperties;
- (id)entityValueProvider;
- (void)entityValueProviderDidChange;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)expandableLabelElementForWidth:(float)arg1 context:(id)arg2;
- (id)explicitEntityProvider;
- (id)explicitEntityValueProvider;
- (id)featureWithName:(id)arg1;
- (id)firstChildForElementName:(id)arg1;
- (id)firstChildForElementType:(unsigned int)arg1;
- (id)firstDescendentWithIndexBarEntryID:(id)arg1;
- (id)flattenedChildren;
- (BOOL)handlesBackgroundColorDirectly;
- (id)indexBarEntryID;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isDescendentFromViewElement:(id)arg1;
- (BOOL)isDynamicContainer;
- (BOOL)isEnabled;
- (int)pageComponentType;
- (id)persistenceKey;
- (id)personalizationLibraryItems;
- (int)pinStyle;
- (BOOL)rendersWithParallax;
- (BOOL)rendersWithPerspective;
- (void)setEntityValueProvider:(id)arg1;
- (void)setExplicitEntityValueProvider:(id)arg1;
- (id)uniquingMapKey;

@end
