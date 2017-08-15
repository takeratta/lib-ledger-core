// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#ifndef DJINNI_GENERATED_WALLETPOOL_HPP
#define DJINNI_GENERATED_WALLETPOOL_HPP

#include <cstdint>
#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class CurrencyCallback;
class CurrencyListCallback;
class DynamicObject;
class I32Callback;
class Logger;
class Preferences;
class WalletCallback;
class WalletListCallback;
struct Currency;

class WalletPool {
public:
    virtual ~WalletPool() {}

    virtual std::shared_ptr<Logger> getLogger() = 0;

    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    virtual void getWalletCount(const std::shared_ptr<I32Callback> & callback) = 0;

    virtual void getWallets(int32_t from, int32_t size, const std::shared_ptr<WalletListCallback> & callback) = 0;

    virtual void getWallet(const std::string & name, const std::shared_ptr<WalletCallback> & callback) = 0;

    virtual void createWallet(const std::string & name, const Currency & currency, const std::shared_ptr<DynamicObject> & configuration, const std::shared_ptr<WalletCallback> & callback) = 0;

    virtual void getCurrencies(const std::shared_ptr<CurrencyListCallback> & callback) = 0;

    virtual void getCurrency(const std::string & name, const std::shared_ptr<CurrencyCallback> & callback) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_WALLETPOOL_HPP
