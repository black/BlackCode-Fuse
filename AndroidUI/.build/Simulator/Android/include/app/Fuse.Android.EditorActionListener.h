// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_EDITOR_ACTION_LISTENER_H__
#define __APP_FUSE_ANDROID_EDITOR_ACTION_LISTENER_H__

#include <app/Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct EditorActionListener;

extern jclass EditorActionListener___javaClass_2;

struct EditorActionListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::widget::TextViewDLROnEditorActionListener __interface_2;
};

EditorActionListener__uType* EditorActionListener__typeof();

void EditorActionListener___ObjInit_4(EditorActionListener* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler);
::uObject* EditorActionListener__AddHandler(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler);
bool EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction(EditorActionListener* __this, ::app::Android::android::widget::TextView* v, int actionId, ::app::Android::android::view::KeyEvent* ev);
void EditorActionListener__Dispose_1(EditorActionListener* __this);
EditorActionListener* EditorActionListener__New_5(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler);

struct EditorActionListener : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Android::android::widget::TextView*> _textView;
    ::uStrong< ::uDelegate*> _handler;

    void _ObjInit_4(::app::Android::android::widget::TextView* textView, ::uDelegate* handler) { EditorActionListener___ObjInit_4(this, textView, handler); }
    void Dispose_1() { EditorActionListener__Dispose_1(this); }
};

}}}


#endif
