// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.idl

#include "ExecutionContext.hpp"  // my header
#include "Runnable.hpp"

namespace djinni_generated {

ExecutionContext::ExecutionContext() : ::djinni::JniInterface<::ExecutionContext, ExecutionContext>() {}

ExecutionContext::~ExecutionContext() = default;

ExecutionContext::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

ExecutionContext::JavaProxy::~JavaProxy() = default;

void ExecutionContext::JavaProxy::execute(const std::shared_ptr<::Runnable> & c_runnable) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::ExecutionContext>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_execute,
                           ::djinni::get(::djinni_generated::Runnable::fromCpp(jniEnv, c_runnable)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
