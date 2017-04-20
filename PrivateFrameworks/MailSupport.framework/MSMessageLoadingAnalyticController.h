/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSMessageLoadingAnalyticController : NSObject {
    MSDiagnosticManager * _diagnosticManager;
    NSMutableDictionary * _messageLoadTime;
    NSObject<OS_dispatch_queue> * _serialMessageLoadingTimerQueue;
}

@property (nonatomic, retain) MSDiagnosticManager *diagnosticManager;
@property (nonatomic, readonly, copy) NSDictionary *messageLoadTime;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue;

- (void).cxx_destruct;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;
- (void)_endRecordingForMessage:(id)arg1;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;
- (void)_startTimeoutForMessage:(id)arg1;
- (id)diagnosticManager;
- (void)endAllRecording;
- (void)endRecordingForMessage:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1;
- (id)messageLoadTime;
- (id)serialMessageLoadingTimerQueue;
- (void)setDiagnosticManager:(id)arg1;
- (void)setSerialMessageLoadingTimerQueue:(id)arg1;
- (void)startRecordingForMessage:(id)arg1;

@end