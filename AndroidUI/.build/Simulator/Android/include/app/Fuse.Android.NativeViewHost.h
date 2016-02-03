// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_VIEW_HOST_H__
#define __APP_FUSE_ANDROID_NATIVE_VIEW_HOST_H__

#include <app/Fuse.Android.ParentView__Fuse_Controls_NativeViewHost.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeViewHost;

struct NativeViewHost__uType : ::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost__uType
{
};

NativeViewHost__uType* NativeViewHost__typeof();

void NativeViewHost___ObjInit_3(NativeViewHost* __this);
void NativeViewHost__ChildRooted(NativeViewHost* __this, ::app::Fuse::Android::NativeView* child);
void NativeViewHost__ChildUnrooted(NativeViewHost* __this, ::app::Fuse::Android::NativeView* child);
::app::Android::android::view::View* NativeViewHost__CreateInternal(NativeViewHost* __this);
::app::Fuse::Android::NativeView* NativeViewHost__get_Parent(NativeViewHost* __this);
::app::Uno::Float4x4 NativeViewHost__get_Transform(NativeViewHost* __this);
NativeViewHost* NativeViewHost__New_1(::uStatic* __this);
void NativeViewHost__NotifyNewSize(NativeViewHost* __this, ::app::Fuse::Android::NativeView* child);
void NativeViewHost__OnRooted(NativeViewHost* __this, ::app::Fuse::Node* node);
void NativeViewHost__OnUnrooted(NativeViewHost* __this, ::app::Fuse::Node* node);
void NativeViewHost__Update(NativeViewHost* __this);

struct NativeViewHost : ::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost
{
    ::uStrong< ::app::Android::android::widget::RelativeLayout*> _relativeLayout;

    void _ObjInit_3() { NativeViewHost___ObjInit_3(this); }
    void Update() { NativeViewHost__Update(this); }
};

}}}


#endif
