// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
#include <Uno/Platform2.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{struct BindingView;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class BindingView :176
// {
uClassType* BindingView_typeof();
void BindingView__GetNativeViewHandle_fn(::g::Android::android::view::View* view, uPlatform2::ViewNativeHandle* __retval);

struct BindingView : uObject
{
    static uPlatform2::ViewNativeHandle GetNativeViewHandle(::g::Android::android::view::View* view);
};
// }

}}} // ::g::Fuse::Android
