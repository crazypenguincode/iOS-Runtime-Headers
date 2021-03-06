/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteIndexDefinition : NSObject {
    NSArray * _columns;
    Class  _entityClass;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly, copy) NSString *disambiguatedName;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)columns;
- (id)creationSQL;
- (id)disambiguatedName;
- (Class)entityClass;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3;
- (id)name;

@end
