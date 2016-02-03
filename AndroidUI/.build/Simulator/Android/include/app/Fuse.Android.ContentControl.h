// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CONTENT_CONTROL_H__
#define __APP_FUSE_ANDROID_CONTENT_CONTROL_H__

#include <app/Fuse.Android.ParentView__Fuse_Controls_ContentControl.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ContentControl;

struct ContentControl__uType : ::app::Fuse::Android::ParentView__Fuse_Controls_ContentControl__uType
{
};

ContentControl__uType* ContentControl__typeof();

void ContentControl___ObjInit_3(ContentControl* __this);
void ContentControl__ChildRooted(ContentControl* __this, ::app::Fuse::Android::NativeView* child);
void ContentControl__ChildUnrooted(ContentControl* __this, ::app::Fuse::Android::NativeView* child);
::app::Android::android::view::View* ContentControl__CreateInternal(ContentControl* __this);
ContentControl* ContentControl__New_1(::uStatic* __this);
void ContentControl__NotifyNewSize(ContentControl* __this, ::app::Fuse::Android::NativeView* child);

struct ContentControl : ::app::Fuse::Android::ParentView__Fuse_Controls_ContentControl
{
    ::uStrong< ::app::Android::android::widget::RelativeLayout*> _relativeLayout;

    void _ObjInit_3() { ContentControl___ObjInit_3(this); }
};

}}}


#endif
