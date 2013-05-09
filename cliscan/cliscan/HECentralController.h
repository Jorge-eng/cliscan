//
//  HECentralController.h
//  Desktop Scanner
//
//  Created by Jonathan Dalrymple on 18/01/2013.
//  Copyright (c) 2013 Hello Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IOBluetooth/IOBluetooth.h>


#define kHelloServiceUUID @"00001e3f-1212-efde-1523-785feabcd123"

@interface HECentralController : NSObject <CBCentralManagerDelegate,CBPeripheralDelegate>

@property (nonatomic,strong,readonly) CBCentralManager *centralManager;

- (id)initWithCentralManager:(CBCentralManager*)aCentralManager;

- (void)parseArguments:(NSArray *)args;

- (void)startScanForDuration:(CGFloat)duration;

- (void)listServicesForDeviceNamed:(NSString *)aDevice;

- (void)listCharacteristicsForService:(NSString *)aService
                          deviceNamed:(NSString *)aDevice;

- (void)readValueForCharacteristic:(NSString *)aCharacteristic
                           service:(NSString *)aService
                       deviceNamed:(NSString*)aDevice;

- (void)subscribeToCharacteristics:(NSString *)aCharacteristic
                           service:(NSString *)aService
                       deviceNamed:(NSString*)aDevice;

@end