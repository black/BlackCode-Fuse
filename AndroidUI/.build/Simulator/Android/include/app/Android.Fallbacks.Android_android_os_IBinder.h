// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_I_BINDER_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_OS_I_BINDER_H__

#include <app/Android.android.os.IBinder.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace io { struct FileDescriptor; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_String; } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_os_IBinder;

extern jmethodID Android_android_os_IBinder__dump_13823_ID;
extern jmethodID Android_android_os_IBinder__dumpAsync_13824_ID;
extern jmethodID Android_android_os_IBinder__getInterfaceDescriptor_13819_ID;
extern jmethodID Android_android_os_IBinder__isBinderAlive_13821_ID;
extern jmethodID Android_android_os_IBinder__linkToDeath_13826_ID;
extern jmethodID Android_android_os_IBinder__pingBinder_13820_ID;
extern jmethodID Android_android_os_IBinder__queryLocalInterface_13822_ID;
extern jmethodID Android_android_os_IBinder__transact_13825_ID;
extern jmethodID Android_android_os_IBinder__unlinkToDeath_13827_ID;

struct Android_android_os_IBinder__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::os::IBinder __interface_2;
};

Android_android_os_IBinder__uType* Android_android_os_IBinder__typeof();

void Android_android_os_IBinder__dump(Android_android_os_IBinder* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1);
void Android_android_os_IBinder__dump_IMPL_13823(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void Android_android_os_IBinder__dumpAsync(Android_android_os_IBinder* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1);
void Android_android_os_IBinder__dumpAsync_IMPL_13824(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
::app::Android::java::lang::String* Android_android_os_IBinder__getInterfaceDescriptor(Android_android_os_IBinder* __this);
::uObject* Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_os_IBinder__isBinderAlive(Android_android_os_IBinder* __this);
bool Android_android_os_IBinder__isBinderAlive_IMPL_13821(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_os_IBinder__linkToDeath(Android_android_os_IBinder* __this, ::uObject* arg0, int arg1);
void Android_android_os_IBinder__linkToDeath_IMPL_13826(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool Android_android_os_IBinder__pingBinder(Android_android_os_IBinder* __this);
bool Android_android_os_IBinder__pingBinder_IMPL_13820(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_os_IBinder__queryLocalInterface(Android_android_os_IBinder* __this, ::app::Android::java::lang::String* arg0);
::uObject* Android_android_os_IBinder__queryLocalInterface_IMPL_13822(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_os_IBinder__transact(Android_android_os_IBinder* __this, int arg0, ::app::Android::android::os::Parcel* arg1, ::app::Android::android::os::Parcel* arg2, int arg3);
bool Android_android_os_IBinder__transact_IMPL_13825(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, ::uObject* arg4_, int arg5_);
bool Android_android_os_IBinder__unlinkToDeath(Android_android_os_IBinder* __this, ::uObject* arg0, int arg1);
bool Android_android_os_IBinder__unlinkToDeath_IMPL_13827(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct Android_android_os_IBinder : ::app::Android::java::lang::Object
{
    void dump(::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1) { Android_android_os_IBinder__dump(this, arg0, arg1); }
    void dumpAsync(::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1) { Android_android_os_IBinder__dumpAsync(this, arg0, arg1); }
    ::app::Android::java::lang::String* getInterfaceDescriptor() { return Android_android_os_IBinder__getInterfaceDescriptor(this); }
    bool isBinderAlive() { return Android_android_os_IBinder__isBinderAlive(this); }
    void linkToDeath(::uObject* arg0, int arg1) { Android_android_os_IBinder__linkToDeath(this, arg0, arg1); }
    bool pingBinder() { return Android_android_os_IBinder__pingBinder(this); }
    ::uObject* queryLocalInterface(::app::Android::java::lang::String* arg0) { return Android_android_os_IBinder__queryLocalInterface(this, arg0); }
    bool transact(int arg0, ::app::Android::android::os::Parcel* arg1, ::app::Android::android::os::Parcel* arg2, int arg3) { return Android_android_os_IBinder__transact(this, arg0, arg1, arg2, arg3); }
    bool unlinkToDeath(::uObject* arg0, int arg1) { return Android_android_os_IBinder__unlinkToDeath(this, arg0, arg1); }
};

}}}


#endif
