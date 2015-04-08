/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKFetchSharesOperation : CKDatabaseOperation {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchSharesCompletionBlock;

    NSMutableDictionary *_shareIDErrors;
    NSArray *_shareIDs;
    NSMutableDictionary *_sharesByShareID;
    NSMutableDictionary *_zoneIDErrors;
    NSArray *_zoneIDs;
}

@property(copy) id fetchSharesCompletionBlock;
@property(retain) NSMutableDictionary * shareIDErrors;
@property(readonly) NSArray * shareIDs;
@property(retain) NSMutableDictionary * sharesByShareID;
@property(retain) NSMutableDictionary * zoneIDErrors;
@property(readonly) NSArray * zoneIDs;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)fetchSharesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithShareIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (void)performCKOperation;
- (void)setFetchSharesCompletionBlock:(id)arg1;
- (void)setShareIDErrors:(id)arg1;
- (void)setSharesByShareID:(id)arg1;
- (void)setZoneIDErrors:(id)arg1;
- (id)shareIDErrors;
- (id)shareIDs;
- (id)sharesByShareID;
- (id)zoneIDErrors;
- (id)zoneIDs;

@end