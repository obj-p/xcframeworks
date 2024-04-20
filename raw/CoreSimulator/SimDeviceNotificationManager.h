//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimDeviceNotificationManager_h
#define SimDeviceNotificationManager_h
@import Foundation;

#include "SimDeviceNotifier-Protocol.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SimDeviceNotificationManager : NSObject<SimDeviceNotifier>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlersQueue;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (nonatomic) unsigned long long next_regID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue;

/* instance methods */
- (id)init;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)queue handler:(id /* block */)handler;
- (BOOL)unregisterNotificationHandler:(unsigned long long)handler error:(id *)error;
- (void)sendNotification:(id)notification;
- (void)sendNotification:(id)notification completionQueue:(id)queue completionBlock:(id /* block */)block;
@end

#endif /* SimDeviceNotificationManager_h */