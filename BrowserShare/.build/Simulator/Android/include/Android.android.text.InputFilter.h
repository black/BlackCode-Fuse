// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern interface InputFilter :4351
// {
uInterfaceType* InputFilter_typeof();

struct InputFilter
{
    void(*fp_filter)(uObject*, uObject*, int*, int*, uObject*, int*, int*, uObject**);
    static uObject* filter(const uInterface& __this, uObject* arg0, int arg1, int arg2, uObject* arg3, int arg4, int arg5) { uObject* __retval; return __this.VTable<InputFilter>()->fp_filter(__this, arg0, &arg1, &arg2, arg3, &arg4, &arg5, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::text
