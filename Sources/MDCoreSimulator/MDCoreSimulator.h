#import <MDFramework/MDFramework.h>

#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>
#import <MDCoreSimulator/MDSimServiceContextProxy.h>

@interface MDCoreSimulator : NSObject <MDFramework>
@end

@compatibility_alias CoreSimulator MDCoreSimulator;
@compatibility_alias SimDeviceType MDSimDeviceTypeProxy;
@compatibility_alias SimServiceContext MDSimServiceContextProxy;
