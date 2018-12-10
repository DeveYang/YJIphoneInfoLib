//
//  DeviceNetWorkInfo.h
//  YJIphoneInfoLib
//
//  Created by YangJian on 2018/12/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceNetWorkInfo : NSObject


/** 获取ip */
- (NSString *)getDeviceIPAddresses;

- (NSString *)getIpAddressWIFI;
- (NSString *)getIpAddressCell;
@end

NS_ASSUME_NONNULL_END
