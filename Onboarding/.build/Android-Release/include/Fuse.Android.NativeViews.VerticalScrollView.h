// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.ScrollView.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ScrollView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct VerticalScrollView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class VerticalScrollView :892
// {
::g::Android::android::view::ViewGroup_type* VerticalScrollView_typeof();
void VerticalScrollView__ctor_20_fn(VerticalScrollView* __this, ::g::Fuse::Android::NativeViews::ScrollView* sv);
void VerticalScrollView__New17_fn(::g::Fuse::Android::NativeViews::ScrollView* sv, VerticalScrollView** __retval);
void VerticalScrollView__onScrollChanged_fn(VerticalScrollView* __this, int* x, int* y, int* oldx, int* oldy);

struct VerticalScrollView : ::g::Android::android::widget::ScrollView
{
    static jclass _javaClass6_;
    static jclass& _javaClass6() { return _javaClass6_; }
    uStrong< ::g::Fuse::Android::NativeViews::ScrollView*> _sv;

    void ctor_20(::g::Fuse::Android::NativeViews::ScrollView* sv);
    static VerticalScrollView* New17(::g::Fuse::Android::NativeViews::ScrollView* sv);
};
// }

}}}} // ::g::Fuse::Android::NativeViews
