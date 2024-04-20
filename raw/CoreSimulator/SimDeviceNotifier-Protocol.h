//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimDeviceNotifier_Protocol_h
#define SimDeviceNotifier_Protocol_h
@import Foundation;

@protocol SimDeviceNotifier 
/* instance methods */
- (unsigned long long)registerNotificationHandlerOnQueue:(id)queue handler:(id /* block */)handler;
- (BOOL)unregisterNotificationHandler:(unsigned long long)handler error:(id *)error;
@end

#endif /* SimDeviceNotifier_Protocol_h */
