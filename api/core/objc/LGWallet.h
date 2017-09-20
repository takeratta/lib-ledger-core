// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGAccountCreationInfo.h"
#import "LGCurrency.h"
#import "LGExtendedKeyAccountCreationInfo.h"
#import "LGWalletType.h"
#import <Foundation/Foundation.h>
@class LGBitcoinLikeWallet;
@class LGEventBus;
@class LGLogger;
@class LGPreferences;
@protocol LGAccountCallback;
@protocol LGAccountCreationInfoCallback;
@protocol LGAccountListCallback;
@protocol LGExtendedKeyAccountCreationInfoCallback;
@protocol LGI32Callback;


@interface LGWallet : NSObject

- (nonnull NSString *)getName;

- (void)getAccount:(int32_t)index
          callback:(nullable id<LGAccountCallback>)callback;

- (void)getAccountCount:(nullable id<LGI32Callback>)callback;

- (void)getAccounts:(int32_t)offset
              count:(int32_t)count
           callback:(nullable id<LGAccountListCallback>)callback;

- (void)getNextAccountIndex:(nullable id<LGI32Callback>)callback;

- (nullable LGEventBus *)getEventBus;

- (BOOL)isSynchronizing;

- (nullable LGEventBus *)synchronize;

- (nullable LGPreferences *)getPreferences;

- (nullable LGLogger *)getLogger;

- (nullable LGPreferences *)getAccountPreferences:(int32_t)index;

/**
 * asBitcoinLikeWallet(): Callback<BitcoinLikeWallet>;
 * asEthereumLikeWallet(): Callback<EthereumLikeWallet>;
 * asRippleLikeWallet(): Callback<RippleLikeWallet>;
 */
- (nullable LGBitcoinLikeWallet *)asBitcoinLikeWallet;

- (nonnull LGCurrency *)getCurrency;

- (BOOL)isInstanceOfBitcoinLikeWallet;

- (BOOL)isInstanceOfEthereumLikeWallet;

- (BOOL)isInstanceOfRippleLikeWallet;

- (LGWalletType)getWalletType;

- (void)getAccountCreationInfo:(int32_t)accountIndex
                      callback:(nullable id<LGAccountCreationInfoCallback>)callback;

- (void)getExtendedKeyAccountCreationInfo:(int32_t)accountIndex
                                 callback:(nullable id<LGExtendedKeyAccountCreationInfoCallback>)callback;

- (void)getNextAccountCreationInfo:(nullable id<LGAccountCreationInfoCallback>)callback;

- (void)getNextExtendedKeyAccountCreationInfo:(nullable id<LGExtendedKeyAccountCreationInfoCallback>)callback;

- (void)newAccountWithInfo:(nonnull LGAccountCreationInfo *)accountCreationInfo
                  callback:(nullable id<LGAccountCallback>)callback;

- (void)newAccountWithExtendedKeyInfo:(nonnull LGExtendedKeyAccountCreationInfo *)extendedKeyAccountCreationInfo
                             callback:(nullable id<LGAccountCallback>)callback;

@end
