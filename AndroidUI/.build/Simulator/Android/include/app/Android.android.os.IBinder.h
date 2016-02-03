// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_I_BINDER_H__
#define __APP_ANDROID_ANDROID_OS_I_BINDER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace io { struct FileDescriptor; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_String; } } }

namespace app {
namespace Android {
namespace android {
namespace os {

::uInterfaceType* IBinder__typeof();

struct IBinder
{
    void(*__fp_dump)(void*, ::app::Android::java::io::FileDescriptor*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*);
    void(*__fp_dumpAsync)(void*, ::app::Android::java::io::FileDescriptor*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*);
    ::app::Android::java::lang::String*(*__fp_getInterfaceDescriptor)(void*);
    bool(*__fp_isBinderAlive)(void*);
    void(*__fp_linkToDeath)(void*, ::uObject*, int);
    bool(*__fp_pingBinder)(void*);
    ::uObject*(*__fp_queryLocalInterface)(void*, ::app::Android::java::lang::String*);
    bool(*__fp_transact)(void*, int, ::app::Android::android::os::Parcel*, ::app::Android::android::os::Parcel*, int);
    bool(*__fp_unlinkToDeath)(void*, ::uObject*, int);

    static void dump(::uObject* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1) { ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_dump((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void dumpAsync(::uObject* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1) { ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_dumpAsync((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::app::Android::java::lang::String* getInterfaceDescriptor(::uObject* __this) { return ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_getInterfaceDescriptor((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isBinderAlive(::uObject* __this) { return ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_isBinderAlive((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void linkToDeath(::uObject* __this, ::uObject* arg0, int arg1) { ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_linkToDeath((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool pingBinder(::uObject* __this) { return ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_pingBinder((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* queryLocalInterface(::uObject* __this, ::app::Android::java::lang::String* arg0) { return ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_queryLocalInterface((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool transact(::uObject* __this, int arg0, ::app::Android::android::os::Parcel* arg1, ::app::Android::android::os::Parcel* arg2, int arg3) { return ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_transact((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static bool unlinkToDeath(::uObject* __this, ::uObject* arg0, int arg1) { return ((IBinder*)uGetInterfacePtr(__this, IBinder__typeof()))->__fp_unlinkToDeath((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
