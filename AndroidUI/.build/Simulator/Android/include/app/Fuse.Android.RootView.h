// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_ROOT_VIEW_H__
#define __APP_FUSE_ANDROID_ROOT_VIEW_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct RootView;

extern ::uStaticStrong< RootView*> RootView___singleton;

struct RootView__uType : ::uClassType
{
};

RootView__uType* RootView__typeof();

void RootView___ObjInit(RootView* __this);
void RootView__ClearRoot(::uStatic* __this);
::app::Fuse::Android::NativeView* RootView__get_Root(RootView* __this);
RootView* RootView__get_Singleton(::uStatic* __this);
void RootView__Invalidate(RootView* __this);
bool RootView__IsRoot(::uStatic* __this, ::app::Fuse::Android::NativeView* view);
RootView* RootView__New_1(::uStatic* __this);
void RootView__set_Root(RootView* __this, ::app::Fuse::Android::NativeView* value);
void RootView__SetRoot(::uStatic* __this, ::app::Fuse::Android::NativeView* view);
void RootView__UpdateRootSize(RootView* __this, ::app::Uno::Float2 size);
void RootView__UpdateSize(::uStatic* __this, ::app::Uno::Float2 size);

struct RootView : ::uObject
{
    ::uStrong< ::app::Android::android::widget::RelativeLayout*> _relativeLayout;
    ::uStrong< ::app::Fuse::Android::NativeView*> _root;

    void _ObjInit() { RootView___ObjInit(this); }
    ::app::Fuse::Android::NativeView* Root() { return RootView__get_Root(this); }
    void Invalidate() { RootView__Invalidate(this); }
    void Root(::app::Fuse::Android::NativeView* value) { RootView__set_Root(this, value); }
    void UpdateRootSize(::app::Uno::Float2 size);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Android {

inline void RootView::UpdateRootSize(::app::Uno::Float2 size) { RootView__UpdateRootSize(this, size); }

}}}


#endif
