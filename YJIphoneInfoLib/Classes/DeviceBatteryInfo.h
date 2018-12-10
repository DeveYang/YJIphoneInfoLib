//
//  DeviceBatteryInfo.h
//  YJIphoneInfoLib
//
//  Created by YangJian on 2018/12/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DeviceBatteryInfoDelegate
- (void)batteryStatusUpdated;
@end

@interface DeviceBatteryInfo : NSObject

@property (nonatomic, weak) id<DeviceBatteryInfoDelegate> delegate;

@property (nonatomic, assign) NSUInteger capacity;
@property (nonatomic, assign) CGFloat voltage;

@property (nonatomic, assign) NSUInteger levelPercent;
@property (nonatomic, assign) NSUInteger levelMAH;
@property (nonatomic, copy)   NSString *status;

+ (instancetype)sharedManager;
/** 开始监测电池电量 */
- (void)startBatteryMonitoring;
/** 停止监测电池电量 */
- (void)stopBatteryMonitoring;

@end

NS_ASSUME_NONNULL_END
