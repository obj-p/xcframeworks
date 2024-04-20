//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimDeviceIORuntimeInterface_Protocol_h
#define SimDeviceIORuntimeInterface_Protocol_h
@import Foundation;

@protocol SimDeviceIORuntimeInterface <ROCKMemoizable>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSString *platformIdentifier;
@property (readonly, nonatomic) unsigned int equivalentIOSVersion;
@property (readonly, nonatomic) NSURL *runtimeRootURL;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSURL *platformResourcesURL;
@property (readonly, nonatomic) NSDictionary *requiredHostServices;

/* instance methods */
- (BOOL)supportsFeature:(id)feature;
- (BOOL)supportsFeatureConditionally:(id)conditionally;
@end

#endif /* SimDeviceIORuntimeInterface_Protocol_h */
