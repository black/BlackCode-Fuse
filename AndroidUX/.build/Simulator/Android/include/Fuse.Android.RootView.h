// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{struct RootView;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class RootView :685
// {
uType* RootView_typeof();
void RootView__ctor__fn(RootView* __this);
void RootView__ClearRoot_fn();
void RootView__Invalidate_fn(RootView* __this);
void RootView__IsRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view, bool* __retval);
void RootView__New1_fn(RootView** __retval);
void RootView__get_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval);
void RootView__set_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView* value);
void RootView__SetRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view);
void RootView__get_Singleton_fn(RootView** __retval);
void RootView__UpdateRootSize_fn(RootView* __this, ::g::Uno::Float2* size);
void RootView__UpdateSize_fn(::g::Uno::Float2* size);

struct RootView : uObject
{
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;
    uStrong< ::g::Fuse::Android::NativeViews::NativeView*> _root;
    static uSStrong<RootView*> _singleton_;
    static uSStrong<RootView*>& _singleton() { return _singleton_; }

    void ctor_();
    void Invalidate();
    ::g::Fuse::Android::NativeViews::NativeView* Root();
    void Root(::g::Fuse::Android::NativeViews::NativeView* value);
    void UpdateRootSize(::g::Uno::Float2 size);
    static void ClearRoot();
    static bool IsRoot(::g::Fuse::Android::NativeViews::NativeView* view);
    static RootView* New1();
    static void SetRoot(::g::Fuse::Android::NativeViews::NativeView* view);
    static void UpdateSize(::g::Uno::Float2 size);
    static RootView* Singleton();
};
// }

}}} // ::g::Fuse::Android
