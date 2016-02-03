// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnKeyListener :27250
// {
uInterfaceType* ViewDLROnKeyListener_typeof();

struct ViewDLROnKeyListener
{
    void(*fp_onKey)(uObject*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    static bool onKey(const uInterface& __this, ::g::Android::android::view::View* arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2) { bool __retval; return __this.VTable<ViewDLROnKeyListener>()->fp_onKey(__this, arg0, &arg1, arg2, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
