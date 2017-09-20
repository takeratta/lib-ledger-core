// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "LGExtendedKeyAccountCreationInfoCallback+Private.h"
#import "LGExtendedKeyAccountCreationInfoCallback.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "LGError+Private.h"
#import "LGExtendedKeyAccountCreationInfo+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class ExtendedKeyAccountCreationInfoCallback::ObjcProxy final
: public ::ledger::core::api::ExtendedKeyAccountCreationInfoCallback
, public ::djinni::ObjcProxyCache::Handle<ObjcType>
{
public:
    using Handle::Handle;
    void onCallback(const std::experimental::optional<::ledger::core::api::ExtendedKeyAccountCreationInfo> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) override
    {
        @autoreleasepool {
            [Handle::get() onCallback:(::djinni::Optional<std::experimental::optional, ::djinni_generated::ExtendedKeyAccountCreationInfo>::fromCpp(c_result))
                                error:(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(c_error))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto ExtendedKeyAccountCreationInfoCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto ExtendedKeyAccountCreationInfoCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).Handle::get();
}

}  // namespace djinni_generated
