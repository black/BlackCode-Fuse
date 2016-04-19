// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.HorizontalScrollView.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct HorizontalScrollView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ScrollView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class HorizontalScrollView :908
// {
::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof();
void HorizontalScrollView__ctor_20_fn(HorizontalScrollView* __this, ::g::Fuse::Android::NativeViews::ScrollView* sv);
void HorizontalScrollView__New17_fn(::g::Fuse::Android::NativeViews::ScrollView* sv, HorizontalScrollView** __retval);
void HorizontalScrollView__onScrollChanged_fn(HorizontalScrollView* __this, int* x, int* y, int* oldx, int* oldy);

struct HorizontalScrollView : ::g::Android::android::widget::HorizontalScrollView
{
    static jclass _javaClass6_;
    static jclass& _javaClass6() { return _javaClass6_; }
    uStrong< ::g::Fuse::Android::NativeViews::ScrollView*> _sv;

    void ctor_20(::g::Fuse::Android::NativeViews::ScrollView* sv);
    static HorizontalScrollView* New17(::g::Fuse::Android::NativeViews::ScrollView* sv);
};
// }

}}}} // ::g::Fuse::Android::NativeViews
