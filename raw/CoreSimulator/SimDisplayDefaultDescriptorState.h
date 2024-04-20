//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimDisplayDefaultDescriptorState_h
#define SimDisplayDefaultDescriptorState_h
@import Foundation;

#include "SimDisplayDescriptorState-Protocol.h"

@class NSString, NSString",?, NSURL;
@protocol OS_dispatch_queue>",?;

@interface SimDisplayDefaultDescriptorState : NSObject<SimDisplayDescriptorState>

@property (nonatomic) int powerState;
@property (nonatomic) unsigned short displayClass;
@property (nonatomic) unsigned int defaultWidthForDisplay;
@property (nonatomic) unsigned int defaultHeightForDisplay;
@property (nonatomic) unsigned int defaultPixelFormat;
@property (retain, nonatomic) NSURL *mask;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue>",? *memoizableSerializerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString",? *debugDescription;
@property (readonly, nonatomic) NSString *portIdentifier;

/* class methods */
+ (id)defaultDisplayDescriptorStateWithPowerState:(int)state displayClass:(unsigned short)class width:(unsigned int)width height:(unsigned int)height pixelFormat:(unsigned int)format mask:(id)mask;

/* instance methods */
@end

#endif /* SimDisplayDefaultDescriptorState_h */
