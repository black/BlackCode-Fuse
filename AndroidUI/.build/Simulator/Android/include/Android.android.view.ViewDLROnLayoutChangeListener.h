// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnLayoutChangeListener :27266
// {
uInterfaceType* ViewDLROnLayoutChangeListener_typeof();

struct ViewDLROnLayoutChangeListener
{
    void(*fp_onLayoutChange)(uObject*, ::g::Android::android::view::View*, int*, int*, int*, int*, int*, int*, int*, int*);
    static void onLayoutChange(const uInterface& __this, ::g::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) { __this.VTable<ViewDLROnLayoutChangeListener>()->fp_onLayoutChange(__this, arg0, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8); }
};
// }

}}}} // ::g::Android::android::view
