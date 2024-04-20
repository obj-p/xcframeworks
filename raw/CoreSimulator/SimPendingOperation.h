//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimPendingOperation_h
#define SimPendingOperation_h
@import Foundation;

@class NSUUID;

@interface SimPendingOperation : NSObject

@property (copy, nonatomic) NSUUID *deviceUDID;
@property (copy, nonatomic) id /* block */ block;

/* class methods */
+ (id)operationWithDeviceUDID:(id)udid block:(id /* block */)block;

/* instance methods */
@end

#endif /* SimPendingOperation_h */
