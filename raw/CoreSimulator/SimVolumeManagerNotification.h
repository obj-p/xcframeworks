//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimVolumeManagerNotification_h
#define SimVolumeManagerNotification_h
@import Foundation;

@class NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_group;

@interface SimVolumeManagerNotification : NSObject

@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) struct __CFDictionary * diskInfo;
@property (retain, nonatomic) NSString *bsdDeviceName;
@property (retain, nonatomic) NSString *mountPath;
@property (retain, nonatomic) NSURL *mountURL;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *synchronizingGroup;
@property (retain, nonatomic) NSMutableArray *consequences;
@property (nonatomic) BOOL reportConsequences;
@property (readonly, nonatomic) NSString *volumeName;

/* class methods */
+ (id)notificationWithType:(unsigned long long)type disk:(struct __DADisk *)disk synchronizingGroup:(id)group reportConsequences:(BOOL)consequences;
+ (id)notificationWithTypeCryptexVolumeWillUnmountForMountURL:(id)url;

/* instance methods */
- (void)dealloc;
- (void)noteConsequence:(unsigned long long)consequence onTarget:(unsigned long long)target withIdentifier:(id)identifier atPath:(id)path;
@end

#endif /* SimVolumeManagerNotification_h */