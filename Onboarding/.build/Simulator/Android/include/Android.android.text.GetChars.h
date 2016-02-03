// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct CharArray;}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern interface GetChars :4367
// {
uInterfaceType* GetChars_typeof();

struct GetChars
{
    void(*fp_getChars)(uObject*, int*, int*, ::g::Android::Runtime::CharArray*, int*);
    static void getChars(const uInterface& __this, int arg0, int arg1, ::g::Android::Runtime::CharArray* arg2, int arg3) { __this.VTable<GetChars>()->fp_getChars(__this, &arg0, &arg1, arg2, &arg3); }
};
// }

}}}} // ::g::Android::android::text
