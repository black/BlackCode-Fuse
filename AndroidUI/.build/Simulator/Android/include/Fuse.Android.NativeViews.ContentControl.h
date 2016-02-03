// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.ContentControl.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ContentControl;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class ContentControl :22
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* ContentControl_typeof();
void ContentControl__ctor_3_fn(ContentControl* __this);
void ContentControl__ChildRooted_fn(ContentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ContentControl__ChildUnrooted_fn(ContentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ContentControl__CreateInternal_fn(ContentControl* __this, ::g::Android::android::view::View** __retval);
void ContentControl__New1_fn(ContentControl** __retval);
void ContentControl__NotifyNewSize_fn(ContentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child);

struct ContentControl : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;

    void ctor_3();
    static ContentControl* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
