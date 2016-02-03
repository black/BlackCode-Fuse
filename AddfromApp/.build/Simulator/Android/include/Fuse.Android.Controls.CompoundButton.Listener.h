// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton__Listener;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// private sealed class CompoundButton.Listener :201
// {
struct CompoundButton__Listener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener interface2;
};

CompoundButton__Listener_type* CompoundButton__Listener_typeof();
void CompoundButton__Listener__ctor_4_fn(CompoundButton__Listener* __this, ::g::Fuse::Android::Controls::CompoundButton* s);
void CompoundButton__Listener__New5_fn(::g::Fuse::Android::Controls::CompoundButton* s, CompoundButton__Listener** __retval);
void CompoundButton__Listener__onCheckedChanged_fn(CompoundButton__Listener* __this, ::g::Android::android::widget::CompoundButton* buttonView, bool* isChecked);

struct CompoundButton__Listener : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Fuse::Android::Controls::CompoundButton*> _s;

    void ctor_4(::g::Fuse::Android::Controls::CompoundButton* s);
    void onCheckedChanged(::g::Android::android::widget::CompoundButton* buttonView, bool isChecked);
    static CompoundButton__Listener* New5(::g::Fuse::Android::Controls::CompoundButton* s);
};
// }

}}}} // ::g::Fuse::Android::Controls
