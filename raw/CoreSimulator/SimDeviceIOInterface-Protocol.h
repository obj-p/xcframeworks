//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimDeviceIOInterface_Protocol_h
#define SimDeviceIOInterface_Protocol_h
@import Foundation;

@protocol SimDeviceIOInterface <ROCKImpersonateable>

@property (readonly, nonatomic) NSUUID *deviceUDID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSObject<SimDeviceIORuntimeInterface> *deviceRuntime;
@property (readonly, nonatomic) NSObject<SimDeviceIODeviceTypeInterface> *deviceType;
@property (readonly, nonatomic) NSURL *deviceDataURL;
@property (readonly, nonatomic) NSURL *deviceLogURL;
@property (readonly, nonatomic) NSArray *ioPorts;

/* instance methods */
- (BOOL)registerPort:(unsigned int)port service:(id)service error:(id *)error;
- (BOOL)unregisterService:(id)service error:(id *)error;
- (BOOL)postDarwinNotification:(id)notification error:(id *)error;
- (BOOL)getDarwinNotificationState:(unsigned long long *)state name:(id)name error:(id *)error;
- (BOOL)setDarwinNotificationState:(unsigned long long)state name:(id)name error:(id *)error;
- (BOOL)postHostNotification:(id)notification portUUID:(id)uuid portClass:(unsigned short)class info:(id)info error:(id *)error;
- (BOOL)supportsFeature:(id)feature;
- (void)connectIOPort:(id)ioport completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)disconnectIOPort:(id)ioport completionQueue:(id)queue completionHandler:(id /* block */)handler;
@end

#endif /* SimDeviceIOInterface_Protocol_h */
