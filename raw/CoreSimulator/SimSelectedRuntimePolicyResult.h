//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.463, BuildCommit: 58445e79785a177ff4da5bb2a954f4f416f21788)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 13.0, SDK: 14.4, Tool: ld (1053.12)
//    - LC_SOURCE_VERSION: 947.13.0.0.0
//
#ifndef SimSelectedRuntimePolicyResult_h
#define SimSelectedRuntimePolicyResult_h
@import Foundation;

#include "SimRuntime.h"

@class NSString, NSURL;

@interface SimSelectedRuntimePolicyResult : NSObject

@property (retain, nonatomic) NSURL *platformDirectory;
@property (retain, nonatomic) NSURL *SDKDirectory;
@property (copy, nonatomic) NSString *platformIdentifier;
@property (copy, nonatomic) NSString *SDKCanonicalName;
@property (nonatomic) unsigned int SDKVersion;
@property (copy, nonatomic) NSString *SDKVersionString;
@property (copy, nonatomic) NSString *SDKBuild;
@property (copy, nonatomic) NSString *chosenRuntimeBuild;
@property (weak, nonatomic) SimRuntime *chosenRuntime;
@property (copy, nonatomic) NSString *userOverridenRuntimeBuild;
@property (weak, nonatomic) SimRuntime *userOverriddenRuntime;
@property (copy, nonatomic) NSString *preferredRuntimeBuild;
@property (weak, nonatomic) SimRuntime *preferredRuntime;
@property (copy, nonatomic) NSString *defaultRuntimeBuild;
@property (weak, nonatomic) SimRuntime *defaultRuntime;

/* instance methods */
- (id)initWithPlatformDirectory:(id)directory sdkDirectory:(id)directory platformIdentifier:(id)identifier sdkCanonicalName:(id)name sdkVersion:(unsigned int)version sdkVersionString:(id)string sdkBuild:(id)build chosenRuntimeBuild:(id)build chosenRuntime:(id)runtime userOverriddenRuntimeBuild:(id)build userOverriddenRuntime:(id)runtime preferredRuntimeBuild:(id)build preferredRuntime:(id)runtime defaultRuntimeBuild:(id)build defaultRuntime:(id)runtime;
@end

#endif /* SimSelectedRuntimePolicyResult_h */