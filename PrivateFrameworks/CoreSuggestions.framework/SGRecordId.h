/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {
    long long _internalEntityId;
}

+ (id)recordIdWithInternalEntityId:(long long)arg1;
+ (id)recordIdWithNumericValue:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalEntityId:(long long)arg1;
- (long long)internalEntityId;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecordId:(id)arg1;
- (long long)numericValue;

@end