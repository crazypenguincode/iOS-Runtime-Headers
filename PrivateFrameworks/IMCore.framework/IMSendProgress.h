/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSendProgress : NSObject {
    float  _cachedSendProgress;
    id  _context;
    <IMSendProgressDelegate> * _delegate;
    NSTimer * _sendProgressTimer;
    NSDictionary * _sendingItems;
    BOOL  _startSendProgressImmediately;
    BOOL  _wasShowing;
}

@property (nonatomic) id context;
@property (nonatomic) <IMSendProgressDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *sendingItems;
@property (nonatomic) BOOL startSendProgressImmediately;

- (void).cxx_destruct;
- (BOOL)_hasSendingMessages;
- (void)_resetSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_sendProgressTimerFired:(id)arg1;
- (void)_updateSendProgress;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (id)sendingItems;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSendingItems:(id)arg1;
- (void)setStartSendProgressImmediately:(BOOL)arg1;
- (BOOL)startSendProgressImmediately;
- (void)updateForItems:(id)arg1 forced:(BOOL)arg2;

@end
