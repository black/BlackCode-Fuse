// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetFileDescriptor;}}}}}
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetManager;}}}}}
namespace g{namespace Android{namespace java{namespace io{struct InputStream;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class AssetManager :501
// {
::g::Android::java::lang::Object_type* AssetManager_typeof();
void AssetManager___Init2_fn();
void AssetManager__open_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::io::InputStream** __retval);
void AssetManager__open_IMPL_3508_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void AssetManager__openFd_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::content::res::AssetFileDescriptor** __retval);
void AssetManager__openFd_IMPL_3510_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct AssetManager : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID open_3508_ID_;
    static jmethodID& open_3508_ID() { return open_3508_ID_; }
    static jmethodID openFd_3510_ID_;
    static jmethodID& openFd_3510_ID() { return openFd_3510_ID_; }

    ::g::Android::java::io::InputStream* open(::g::Android::java::lang::String* arg0);
    ::g::Android::android::content::res::AssetFileDescriptor* openFd(::g::Android::java::lang::String* arg0);
    static void _Init2();
    static uObject* open_IMPL_3508(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* openFd_IMPL_3510(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}}} // ::g::Android::android::content::res
