/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, NSString, ABRingtoneManager, NSMutableArray;



@interface ABRingtoneTableController : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    id _delegate;
    NSMutableArray *_ringtoneGroupLists;
    NSMutableArray *_ringtoneGroupNames;
    NSIndexPath *_selectedRingtoneIndexPath;
    BOOL _showsNone;
    BOOL _showsDefault;
    NSString *_noneString;
    BOOL _showsNothingSelected;
    ABRingtoneManager *_ringtoneManager;
    id _avController;
    BOOL _startedInteruption;
    BOOL _customAVController;
    BOOL _isTextTone;
}

@property(readonly) BOOL isTextTone;


- (void)addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;
- (NSInteger)compareRingtoneWithIdentifier:(id)arg1 toRingtoneWithIdentifier:(id)arg2;
- (BOOL)isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)isDefaultGroupAtIndexPath:(id)arg1;
- (id)identifierOfRingtoneAtIndexPath:(id)arg1;
- (id)indexPathForRingtoneWithIdentifier:(id)arg1;
- (id)indexPathForDefaultGroup;
- (id)indexPathForNoneGroup;
- (void)loadTextTonesFromPlist;
- (void)processNewRingtoneSelected:(id)arg1;
- (id)copyCurrentPhoneRingtoneName;
- (id)copyCurrentPhoneRingtoneIdentifier;
- (id)copyCurrentPhoneTextToneName;
- (id)copyCurrentPhoneTextToneIdentifier;
- (void)togglePlayWithRingtoneWithIdentifier:(id)arg1;
- (void)playRingtoneWithIdentifier:(id)arg1;
- (void)_setRingtoneManager:(id)arg1;
- (BOOL)isTextTone;
- (id)ringtoneManager;
- (id)indexPathForSelectedRingtone;
- (id)initWithAVController:(id)arg1 asRingtoneController:(BOOL)arg2;
- (void)reloadRingtones;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setShowsNone:(BOOL)arg1;
- (void)setNoneString:(id)arg1;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setSelectedRingtoneIdentifier:(id)arg1;
- (id)selectedRingtoneIdentifier;
- (void)stopPlaying;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (void)finishedWithPicker;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setAVController:(id)arg1;
- (id)avController;
- (id)initWithAVController:(id)arg1;

@end