/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMClientCapabilities, NSMutableArray;



@interface GMMOutgoingTile : PBCodable 
{
    NSInteger _tileSize;
    NSMutableArray *_indexs;
    NSInteger _zoom;
    GMMClientCapabilities *_clientCapabilities;
}

@property(readonly) NSInteger indexsCount;
@property(retain) GMMClientCapabilities *clientCapabilities;
@property NSInteger zoom;
@property(retain) NSMutableArray *indexs;
@property NSInteger tileSize;

+ (id)outgoingTileForZoomLevel:(NSUInteger)arg1;
+ (id)outgoingTileForTilePaths:(id)arg1;

- (NSInteger)indexsCount;
- (void)setIndex:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)indexAtIndex:(NSUInteger)arg1;
- (id)clientCapabilities;
- (void)setClientCapabilities:(id)arg1;
- (id)indexs;
- (void)setIndexs:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)zoom;
- (void)setZoom:(NSInteger)arg1;
- (NSInteger)tileSize;
- (id)dictionaryRepresentation;
- (void)addIndex:(id)arg1;
- (void)setTileSize:(NSInteger)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end