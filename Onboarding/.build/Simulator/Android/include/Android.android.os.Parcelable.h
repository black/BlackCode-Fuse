// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public abstract extern interface Parcelable :11241
// {
uInterfaceType* Parcelable_typeof();

struct Parcelable
{
    void(*fp_describeContents)(uObject*, int*);
    void(*fp_writeToParcel)(uObject*, ::g::Android::android::os::Parcel*, int*);
    static int describeContents(const uInterface& __this) { int __retval; return __this.VTable<Parcelable>()->fp_describeContents(__this, &__retval), __retval; }
    static void writeToParcel(const uInterface& __this, ::g::Android::android::os::Parcel* arg0, int arg1) { __this.VTable<Parcelable>()->fp_writeToParcel(__this, arg0, &arg1); }
};
// }

}}}} // ::g::Android::android::os
