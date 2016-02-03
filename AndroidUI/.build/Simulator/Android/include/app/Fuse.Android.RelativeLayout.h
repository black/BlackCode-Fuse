// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_RELATIVE_LAYOUT_H__
#define __APP_FUSE_ANDROID_RELATIVE_LAYOUT_H__

#include <app/Fuse.Android.ParentView__Fuse_Controls_Panel.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }

namespace app {
namespace Fuse {
namespace Android {

struct RelativeLayout;

struct RelativeLayout__uType : ::app::Fuse::Android::ParentView__Fuse_Controls_Panel__uType
{
};

RelativeLayout__uType* RelativeLayout__typeof();

void RelativeLayout___ObjInit_3(RelativeLayout* __this);
void RelativeLayout__ApplyZOrder(RelativeLayout* __this);
void RelativeLayout__Attach(RelativeLayout* __this);
void RelativeLayout__ChildRooted(RelativeLayout* __this, ::app::Fuse::Android::NativeView* child);
void RelativeLayout__ChildUnrooted(RelativeLayout* __this, ::app::Fuse::Android::NativeView* child);
::app::Android::android::view::View* RelativeLayout__CreateInternal(RelativeLayout* __this);
void RelativeLayout__Detach(RelativeLayout* __this);
RelativeLayout* RelativeLayout__New_1(::uStatic* __this);
void RelativeLayout__NotifyNewSize(RelativeLayout* __this, ::app::Fuse::Android::NativeView* child);
void RelativeLayout__OnZOrderChanged(RelativeLayout* __this, ::uObject* s, ::uObject* a);

struct RelativeLayout : ::app::Fuse::Android::ParentView__Fuse_Controls_Panel
{
    ::uStrong< ::app::Android::android::widget::RelativeLayout*> _relativeLayout;

    void _ObjInit_3() { RelativeLayout___ObjInit_3(this); }
    void ApplyZOrder() { RelativeLayout__ApplyZOrder(this); }
    void OnZOrderChanged(::uObject* s, ::uObject* a) { RelativeLayout__OnZOrderChanged(this, s, a); }
};

}}}


#endif
