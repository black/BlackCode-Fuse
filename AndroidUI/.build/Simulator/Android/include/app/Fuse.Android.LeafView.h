// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_LEAF_VIEW_H__
#define __APP_FUSE_ANDROID_LEAF_VIEW_H__

#include <app/Fuse.Android.NativeView.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Android { struct View; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct LeafView;

struct LeafView__uType : ::app::Fuse::Android::NativeView__uType
{
};

LeafView__uType* LeafView__typeof();

void LeafView___ObjInit_2(LeafView* __this);
::app::Android::android::view::View* LeafView__CreateInternal(LeafView* __this);
::app::Uno::Float2 LeafView__get_Size(LeafView* __this);
::app::Fuse::Android::View* LeafView__get_View(LeafView* __this);
LeafView* LeafView__New_1(::uStatic* __this);

struct LeafView : ::app::Fuse::Android::NativeView
{
    void _ObjInit_2() { LeafView___ObjInit_2(this); }
    ::app::Fuse::Android::View* View() { return LeafView__get_View(this); }
};

}}}


#endif
