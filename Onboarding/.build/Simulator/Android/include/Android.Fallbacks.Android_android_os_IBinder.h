// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.IBinder.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_IBinder;}}}
namespace g{namespace Android{namespace java{namespace io{struct FileDescriptor;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_os_IBinder :22014
// {
struct Android_android_os_IBinder_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::os::IBinder interface2;
};

Android_android_os_IBinder_type* Android_android_os_IBinder_typeof();
void Android_android_os_IBinder__dump_fn(Android_android_os_IBinder* __this, ::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1);
void Android_android_os_IBinder__dump_IMPL_13823_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void Android_android_os_IBinder__dumpAsync_fn(Android_android_os_IBinder* __this, ::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1);
void Android_android_os_IBinder__dumpAsync_IMPL_13824_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void Android_android_os_IBinder__getInterfaceDescriptor_fn(Android_android_os_IBinder* __this, ::g::Android::java::lang::String** __retval);
void Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_os_IBinder__isBinderAlive_fn(Android_android_os_IBinder* __this, bool* __retval);
void Android_android_os_IBinder__isBinderAlive_IMPL_13821_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_os_IBinder__linkToDeath_fn(Android_android_os_IBinder* __this, uObject* arg0, int* arg1);
void Android_android_os_IBinder__linkToDeath_IMPL_13826_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void Android_android_os_IBinder__pingBinder_fn(Android_android_os_IBinder* __this, bool* __retval);
void Android_android_os_IBinder__pingBinder_IMPL_13820_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_os_IBinder__queryLocalInterface_fn(Android_android_os_IBinder* __this, ::g::Android::java::lang::String* arg0, uObject** __retval);
void Android_android_os_IBinder__queryLocalInterface_IMPL_13822_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Android_android_os_IBinder__transact_fn(Android_android_os_IBinder* __this, int* arg0, ::g::Android::android::os::Parcel* arg1, ::g::Android::android::os::Parcel* arg2, int* arg3, bool* __retval);
void Android_android_os_IBinder__transact_IMPL_13825_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject* arg4_, int* arg5_, bool* __retval);
void Android_android_os_IBinder__unlinkToDeath_fn(Android_android_os_IBinder* __this, uObject* arg0, int* arg1, bool* __retval);
void Android_android_os_IBinder__unlinkToDeath_IMPL_13827_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);

struct Android_android_os_IBinder : ::g::Android::java::lang::Object
{
    static jmethodID dump_13823_ID_;
    static jmethodID& dump_13823_ID() { return dump_13823_ID_; }
    static jmethodID dumpAsync_13824_ID_;
    static jmethodID& dumpAsync_13824_ID() { return dumpAsync_13824_ID_; }
    static jmethodID getInterfaceDescriptor_13819_ID_;
    static jmethodID& getInterfaceDescriptor_13819_ID() { return getInterfaceDescriptor_13819_ID_; }
    static jmethodID isBinderAlive_13821_ID_;
    static jmethodID& isBinderAlive_13821_ID() { return isBinderAlive_13821_ID_; }
    static jmethodID linkToDeath_13826_ID_;
    static jmethodID& linkToDeath_13826_ID() { return linkToDeath_13826_ID_; }
    static jmethodID pingBinder_13820_ID_;
    static jmethodID& pingBinder_13820_ID() { return pingBinder_13820_ID_; }
    static jmethodID queryLocalInterface_13822_ID_;
    static jmethodID& queryLocalInterface_13822_ID() { return queryLocalInterface_13822_ID_; }
    static jmethodID transact_13825_ID_;
    static jmethodID& transact_13825_ID() { return transact_13825_ID_; }
    static jmethodID unlinkToDeath_13827_ID_;
    static jmethodID& unlinkToDeath_13827_ID() { return unlinkToDeath_13827_ID_; }

    void dump(::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1);
    void dumpAsync(::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1);
    ::g::Android::java::lang::String* getInterfaceDescriptor();
    bool isBinderAlive();
    void linkToDeath(uObject* arg0, int arg1);
    bool pingBinder();
    uObject* queryLocalInterface(::g::Android::java::lang::String* arg0);
    bool transact(int arg0, ::g::Android::android::os::Parcel* arg1, ::g::Android::android::os::Parcel* arg2, int arg3);
    bool unlinkToDeath(uObject* arg0, int arg1);
    static void dump_IMPL_13823(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void dumpAsync_IMPL_13824(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* getInterfaceDescriptor_IMPL_13819(bool arg0_, jobject arg1_);
    static bool isBinderAlive_IMPL_13821(bool arg0_, jobject arg1_);
    static void linkToDeath_IMPL_13826(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool pingBinder_IMPL_13820(bool arg0_, jobject arg1_);
    static uObject* queryLocalInterface_IMPL_13822(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool transact_IMPL_13825(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, uObject* arg4_, int arg5_);
    static bool unlinkToDeath_IMPL_13827(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks
