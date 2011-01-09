/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMAnnotationProperties : PBCodable 
{
    NSInteger _horizonHeightFractionE6;
    BOOL _hasHorizonHeightFractionE6;
    NSInteger _annotationHeightFractionE6;
    BOOL _hasAnnotationHeightFractionE6;
    NSMutableArray *_links;
}

@property(readonly) NSInteger linksCount;
@property(retain) NSMutableArray *links;
@property(readonly) BOOL hasAnnotationHeightFractionE6;
@property NSInteger annotationHeightFractionE6;
@property(readonly) BOOL hasHorizonHeightFractionE6;
@property NSInteger horizonHeightFractionE6;


- (void)setHorizonHeightFractionE6:(NSInteger)arg1;
- (void)setAnnotationHeightFractionE6:(NSInteger)arg1;
- (void)setLink:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)writeTo:(id)arg1;
- (void)setLinks:(id)arg1;
- (BOOL)hasAnnotationHeightFractionE6;
- (NSInteger)annotationHeightFractionE6;
- (BOOL)hasHorizonHeightFractionE6;
- (NSInteger)horizonHeightFractionE6;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)linksCount;
- (id)linkAtIndex:(NSUInteger)arg1;
- (void)addLink:(id)arg1;
- (id)dictionaryRepresentation;
- (id)links;
- (id)description;
- (id)init;
- (void)dealloc;

@end