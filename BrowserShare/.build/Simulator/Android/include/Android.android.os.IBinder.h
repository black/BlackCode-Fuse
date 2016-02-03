// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace java{namespace io{struct FileDescriptor;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public abstract extern interface IBinder :11317
// {
uInterfaceType* IBinder_typeof();

struct IBinder
{
    void(*fp_dump)(uObject*, ::g::Android::java::io::FileDescriptor*, ::g::Android::Runtime::ObjectArray*);
    void(*fp_dumpAsync)(uObject*, ::g::Android::java::io::FileDescriptor*, ::g::Android::Runtime::ObjectArray*);
    void(*fp_getInterfaceDescriptor)(uObject*, ::g::Android::java::lang::String**);
    void(*fp_isBinderAlive)(uObject*, bool*);
    void(*fp_linkToDeath)(uObject*, uObject*, int*);
    void(*fp_pingBinder)(uObject*, bool*);
    void(*fp_queryLocalInterface)(uObject*, ::g::Android::java::lang::String*, uObject**);
    void(*fp_transact)(uObject*, int*, ::g::Android::android::os::Parcel*, ::g::Android::android::os::Parcel*, int*, bool*);
    void(*fp_unlinkToDeath)(uObject*, uObject*, int*, bool*);
    static void dump(const uInterface& __this, ::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1) { __this.VTable<IBinder>()->fp_dump(__this, arg0, arg1); }
    static void dumpAsync(const uInterface& __this, ::g::Android::java::io::FileDescriptor* arg0, ::g::Android::Runtime::ObjectArray* arg1) { __this.VTable<IBinder>()->fp_dumpAsync(__this, arg0, arg1); }
    static ::g::Android::java::lang::String* getInterfaceDescriptor(const uInterface& __this) { ::g::Android::java::lang::String* __retval; return __this.VTable<IBinder>()->fp_getInterfaceDescriptor(__this, &__retval), __retval; }
    static bool isBinderAlive(const uInterface& __this) { bool __retval; return __this.VTable<IBinder>()->fp_isBinderAlive(__this, &__retval), __retval; }
    static void linkToDeath(const uInterface& __this, uObject* arg0, int arg1) { __this.VTable<IBinder>()->fp_linkToDeath(__this, arg0, &arg1); }
    static bool pingBinder(const uInterface& __this) { bool __retval; return __this.VTable<IBinder>()->fp_pingBinder(__this, &__retval), __retval; }
    static uObject* queryLocalInterface(const uInterface& __this, ::g::Android::java::lang::String* arg0) { uObject* __retval; return __this.VTable<IBinder>()->fp_queryLocalInterface(__this, arg0, &__retval), __retval; }
    static bool transact(const uInterface& __this, int arg0, ::g::Android::android::os::Parcel* arg1, ::g::Android::android::os::Parcel* arg2, int arg3) { bool __retval; return __this.VTable<IBinder>()->fp_transact(__this, &arg0, arg1, arg2, &arg3, &__retval), __retval; }
    static bool unlinkToDeath(const uInterface& __this, uObject* arg0, int arg1) { bool __retval; return __this.VTable<IBinder>()->fp_unlinkToDeath(__this, arg0, &arg1, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::os
