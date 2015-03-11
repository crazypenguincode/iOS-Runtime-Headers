/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString;

@interface PRSEngagementFeedback : PRSFeedback {
    NSString *_fbr;
    NSString *_local_result;
    NSString *_parsec_result;
}

@property(retain) NSString * fbr;
@property(retain) NSString * local_result;
@property(retain) NSString * parsec_result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)local_result;
- (id)parsec_result;
- (id)plist;
- (void)setFbr:(id)arg1;
- (void)setLocal_result:(id)arg1;
- (void)setParsec_result:(id)arg1;
- (id)type;
- (void)validate;

@end