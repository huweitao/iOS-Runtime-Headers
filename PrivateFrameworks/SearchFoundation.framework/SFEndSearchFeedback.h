/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFEndSearchFeedback : SFFeedback {
    unsigned int  _cancelSearchEvent;
    BOOL  _isCanceled;
    NSString * _uuid;
}

@property (nonatomic) unsigned int cancelSearchEvent;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic, copy) NSString *uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)cancelSearchEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;
- (BOOL)isCanceled;
- (void)setCancelSearchEvent:(unsigned int)arg1;
- (void)setIsCanceled:(BOOL)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end