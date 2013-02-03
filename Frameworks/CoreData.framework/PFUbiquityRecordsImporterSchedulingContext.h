/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableSet, NSSet, NSDictionary, NSMutableDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet *_failedLogs;
    NSMutableSet *_ignoredLogs;
    NSMutableDictionary *_logsToEncounteredErrors;
    NSMutableSet *_pendingLogs;
    NSMutableSet *_scheduledLogs;
}

@property(readonly) NSSet * failedLogs;
@property(readonly) NSSet * ignoredLogs;
@property(readonly) NSDictionary * logsToEncounteredErrors;
@property(readonly) NSSet * pendingLogs;
@property(readonly) NSSet * scheduledLogs;

- (void)dealloc;
- (id)description;
- (id)failedLogs;
- (id)ignoredLogs;
- (id)init;
- (id)initWithPendingLogs:(id)arg1;
- (id)logsToEncounteredErrors;
- (id)pendingLogs;
- (id)scheduledLogs;
- (void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2;
- (void)transactionLogAtLocationWasIgnored:(id)arg1;
- (void)transactionLogAtLocationWasScheduled:(id)arg1;

@end