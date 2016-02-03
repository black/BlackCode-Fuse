// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.NativeView.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Element;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct LeafNativeView;}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class LeafNativeView :234
// {
::g::Fuse::Android::NativeViews::NativeView_type* LeafNativeView_typeof();
void LeafNativeView__ctor_2_fn(LeafNativeView* __this);
void LeafNativeView__CreateInternal_fn(LeafNativeView* __this, ::g::Android::android::view::View** __retval);
void LeafNativeView__get_LeafElement_fn(LeafNativeView* __this, ::g::Fuse::Android::Controls::Element** __retval);
void LeafNativeView__New1_fn(LeafNativeView** __retval);
void LeafNativeView__get_Size_fn(LeafNativeView* __this, ::g::Uno::Float2* __retval);

struct LeafNativeView : ::g::Fuse::Android::NativeViews::NativeView
{
    void ctor_2();
    ::g::Fuse::Android::Controls::Element* LeafElement();
    static LeafNativeView* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
