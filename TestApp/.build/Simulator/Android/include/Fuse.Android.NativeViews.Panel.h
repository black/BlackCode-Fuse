// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.Panel.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct Panel;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class Panel :678
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* Panel_typeof();
void Panel__ctor_3_fn(Panel* __this);
void Panel__ApplyZOrder_fn(Panel* __this);
void Panel__Attach_fn(Panel* __this);
void Panel__ChildRooted_fn(Panel* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void Panel__ChildUnrooted_fn(Panel* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void Panel__CreateInternal_fn(Panel* __this, ::g::Android::android::view::View** __retval);
void Panel__Detach_fn(Panel* __this);
void Panel__New1_fn(Panel** __retval);
void Panel__NotifyNewSize_fn(Panel* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void Panel__OnZOrderChanged_fn(Panel* __this, uObject* s, uObject* a);

struct Panel : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;

    void ctor_3();
    void ApplyZOrder();
    void OnZOrderChanged(uObject* s, uObject* a);
    static Panel* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
