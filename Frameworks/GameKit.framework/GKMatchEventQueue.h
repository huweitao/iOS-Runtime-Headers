/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject {
    NSMutableDictionary *_connectionInfo;
    BOOL _counted;
    NSInteger _deferedPlayerState;
    NSMutableArray *_events;
    BOOL _hasInitRelayInfo;
    BOOL _hasUpdateRelayInfo;
    BOOL _okToSend;
    NSInteger _playerState;
    BOOL _relayInitiated;
}

@property(retain) NSMutableDictionary *connectionInfo;
@property(retain) NSMutableArray *events;
@property BOOL counted;
@property NSInteger deferedPlayerState;
@property BOOL hasInitRelayInfo;
@property BOOL hasUpdateRelayInfo;
@property BOOL okToSend;
@property NSInteger playerState;
@property BOOL relayInitiated;

- (id)connectionInfo;
- (BOOL)counted;
- (void)dealloc;
- (NSInteger)deferedPlayerState;
- (id)events;
- (BOOL)hasInitRelayInfo;
- (BOOL)hasUpdateRelayInfo;
- (id)init;
- (BOOL)okToSend;
- (NSInteger)playerState;
- (BOOL)relayInitiated;
- (void)setConnectionInfo:(id)arg1;
- (void)setCounted:(BOOL)arg1;
- (void)setDeferedPlayerState:(NSInteger)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasInitRelayInfo:(BOOL)arg1;
- (void)setHasUpdateRelayInfo:(BOOL)arg1;
- (void)setOkToSend:(BOOL)arg1;
- (void)setPlayerState:(NSInteger)arg1;
- (void)setRelayInitiated:(BOOL)arg1;

@end