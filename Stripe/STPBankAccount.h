//
//  STPBankAccount.h
//  Stripe
//
//  Created by Charles Scalesse on 10/1/14.
//
//

#import <Foundation/Foundation.h>
#import "STPFormEncodeProtocol.h"

@interface STPBankAccount : NSObject <STPFormEncodeProtocol>

@property (nonatomic) NSString *accountNumber;
@property (nonatomic) NSString *routingNumber;
@property (nonatomic) NSString *country;

@property (nonatomic, readonly) NSString *last4;
@property (nonatomic, readonly) NSString *bankName;
@property (nonatomic, readonly) BOOL validated;
@property (nonatomic, readonly) NSString *fingerprint;

- (instancetype)initWithAttributeDictionary:(NSDictionary *)attributeDictionary;

- (BOOL)isEqualToBankAccount:(STPBankAccount *)bankAccount;

@end