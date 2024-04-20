//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimDeviceIOClient_h
#define SimDeviceIOClient_h
@import Foundation;

#include "SimDeviceIO.h"
#include "SimDeviceIOClientProtocol-Protocol.h"

@class NSArray, NSString, NSString",?;
@protocol OS_dispatch_queue;

@interface SimDeviceIOClient : SimDeviceIO<SimDeviceIOClientProtocol>

@property (retain, nonatomic) NSArray *deviceIOPorts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic) unsigned long long bootGeneration;
@property (readonly, nonatomic) NSArray *ioPorts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString",? *debugDescription;

/* instance methods */
- (id)initWithDevice:(id)device errorQueue:(id)queue errorHandler:(id /* block */)handler;
- (void)updateIOPorts;
- (BOOL)_handleXPCNotification:(id)xpcnotification;
@end

#endif /* SimDeviceIOClient_h */