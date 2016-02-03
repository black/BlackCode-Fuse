// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.NativeViewHost.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeViewHost;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// public sealed extern class NativeViewHost :570
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* NativeViewHost_typeof();
void NativeViewHost__ctor_3_fn(NativeViewHost* __this);
void NativeViewHost__ChildRooted_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void NativeViewHost__ChildUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void NativeViewHost__CreateInternal_fn(NativeViewHost* __this, ::g::Android::android::view::View** __retval);
void NativeViewHost__New1_fn(NativeViewHost** __retval);
void NativeViewHost__NotifyNewSize_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void NativeViewHost__OnRooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode);
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode);
void NativeViewHost__get_Parent_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval);
void NativeViewHost__get_Transform_fn(NativeViewHost* __this, ::g::Uno::Float4x4* __retval);
void NativeViewHost__Update_fn(NativeViewHost* __this);

struct NativeViewHost : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;
    int _updateWorldTransformVersion;

    void ctor_3();
    void Update();
    static NativeViewHost* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
