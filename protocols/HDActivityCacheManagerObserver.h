/* Generated by RuntimeBrowser.
 */

@protocol HDActivityCacheManagerObserver <NSObject>

@required

- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2 currentStatisticsBuilder:(HDActivityCacheStatisticsBuilder *)arg3 updatedFields:(unsigned int)arg4 error:(NSError *)arg5;

@optional

- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2 updatedFields:(unsigned int)arg3 error:(NSError *)arg4;

@end