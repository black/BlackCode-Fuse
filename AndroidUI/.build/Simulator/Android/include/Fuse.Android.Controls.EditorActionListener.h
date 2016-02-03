// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct EditorActionListener;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class EditorActionListener :532
// {
struct EditorActionListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::TextViewDLROnEditorActionListener interface2;
};

EditorActionListener_type* EditorActionListener_typeof();
void EditorActionListener__ctor_4_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler);
void EditorActionListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval);
void EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* v, int* actionId, ::g::Android::android::view::KeyEvent* ev, bool* __retval);
void EditorActionListener__Dispose1_fn(EditorActionListener* __this);
void EditorActionListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, EditorActionListener** __retval);

struct EditorActionListener : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::widget::TextView*> _textView;

    void ctor_4(::g::Android::android::widget::TextView* textView, uDelegate* handler);
    void Dispose1();
    static uObject* AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler);
    static EditorActionListener* New5(::g::Android::android::widget::TextView* textView, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Android::Controls
