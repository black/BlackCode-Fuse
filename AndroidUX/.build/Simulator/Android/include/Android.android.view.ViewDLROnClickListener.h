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

// public abstract extern interface ViewDLROnClickListener :27170
// {
uInterfaceType* ViewDLROnClickListener_typeof();

struct ViewDLROnClickListener
{
    void(*fp_onClick)(uObject*, ::g::Android::android::view::View*);
    static void onClick(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewDLROnClickListener>()->fp_onClick(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
