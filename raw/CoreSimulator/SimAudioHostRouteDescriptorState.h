//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimAudioHostRouteDescriptorState_h
#define SimAudioHostRouteDescriptorState_h
@import Foundation;

#include "SimAudioDescriptorState-Protocol.h"

@class NSString, NSString",?;
@protocol OS_dispatch_queue>",?;

@interface SimAudioHostRouteDescriptorState : NSObject<SimAudioDescriptorState>

@property (nonatomic) int powerState;
@property (copy, nonatomic) NSString *guestDataPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue>",? *memoizableSerializerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString",? *debugDescription;
@property (readonly, nonatomic) NSString *portIdentifier;

/* class methods */
+ (id)defaultAudioDescriptorStateWithPowerState:(int)state guestDataPath:(id)path;

/* instance methods */
@end

#endif /* SimAudioHostRouteDescriptorState_h */
