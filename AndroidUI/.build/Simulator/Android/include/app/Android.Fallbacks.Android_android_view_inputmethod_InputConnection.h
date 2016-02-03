// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_INPUTMETHOD_INPUT_CONNECTION_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_INPUTMETHOD_INPUT_CONNECTION_H__

#include <app/Android.android.view.inputmethod.InputConnection.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Bundle; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct CompletionInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct CorrectionInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct ExtractedText; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct ExtractedTextRequest; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_inputmethod_InputConnection;

extern jmethodID Android_android_view_inputmethod_InputConnection__beginBatchEdit_21376_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_21379_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__commitCompletion_21371_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__commitCorrection_21372_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__commitText_21370_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__deleteSurroundingText_21366_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__endBatchEdit_21377_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__finishComposingText_21369_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__getCursorCapsMode_21364_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__getExtractedText_21365_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__getSelectedText_21363_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__getTextAfterCursor_21362_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_21361_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__performContextMenuAction_21375_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__performEditorAction_21374_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__performPrivateCommand_21381_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__reportFullscreenMode_21380_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__sendKeyEvent_21378_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__setComposingRegion_21368_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__setComposingText_21367_ID;
extern jmethodID Android_android_view_inputmethod_InputConnection__setSelection_21373_ID;

struct Android_android_view_inputmethod_InputConnection__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::inputmethod::InputConnection __interface_2;
};

Android_android_view_inputmethod_InputConnection__uType* Android_android_view_inputmethod_InputConnection__typeof();

bool Android_android_view_inputmethod_InputConnection__beginBatchEdit(Android_android_view_inputmethod_InputConnection* __this);
bool Android_android_view_inputmethod_InputConnection__beginBatchEdit_IMPL_21376(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_inputmethod_InputConnection__clearMetaKeyStates(Android_android_view_inputmethod_InputConnection* __this, int arg0);
bool Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_IMPL_21379(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool Android_android_view_inputmethod_InputConnection__commitCompletion(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::inputmethod::CompletionInfo* arg0);
bool Android_android_view_inputmethod_InputConnection__commitCompletion_IMPL_21371(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_inputmethod_InputConnection__commitCorrection(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::inputmethod::CorrectionInfo* arg0);
bool Android_android_view_inputmethod_InputConnection__commitCorrection_IMPL_21372(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_inputmethod_InputConnection__commitText(Android_android_view_inputmethod_InputConnection* __this, ::uObject* arg0, int arg1);
bool Android_android_view_inputmethod_InputConnection__commitText_IMPL_21370(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool Android_android_view_inputmethod_InputConnection__deleteSurroundingText(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1);
bool Android_android_view_inputmethod_InputConnection__deleteSurroundingText_IMPL_21366(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
bool Android_android_view_inputmethod_InputConnection__endBatchEdit(Android_android_view_inputmethod_InputConnection* __this);
bool Android_android_view_inputmethod_InputConnection__endBatchEdit_IMPL_21377(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_inputmethod_InputConnection__finishComposingText(Android_android_view_inputmethod_InputConnection* __this);
bool Android_android_view_inputmethod_InputConnection__finishComposingText_IMPL_21369(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_view_inputmethod_InputConnection__getCursorCapsMode(Android_android_view_inputmethod_InputConnection* __this, int arg0);
int Android_android_view_inputmethod_InputConnection__getCursorCapsMode_IMPL_21364(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::app::Android::android::view::inputmethod::ExtractedText* Android_android_view_inputmethod_InputConnection__getExtractedText(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int arg1);
::uObject* Android_android_view_inputmethod_InputConnection__getExtractedText_IMPL_21365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
::uObject* Android_android_view_inputmethod_InputConnection__getSelectedText(Android_android_view_inputmethod_InputConnection* __this, int arg0);
::uObject* Android_android_view_inputmethod_InputConnection__getSelectedText_IMPL_21363(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* Android_android_view_inputmethod_InputConnection__getTextAfterCursor(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1);
::uObject* Android_android_view_inputmethod_InputConnection__getTextAfterCursor_IMPL_21362(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
::uObject* Android_android_view_inputmethod_InputConnection__getTextBeforeCursor(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1);
::uObject* Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_IMPL_21361(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
bool Android_android_view_inputmethod_InputConnection__performContextMenuAction(Android_android_view_inputmethod_InputConnection* __this, int arg0);
bool Android_android_view_inputmethod_InputConnection__performContextMenuAction_IMPL_21375(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool Android_android_view_inputmethod_InputConnection__performEditorAction(Android_android_view_inputmethod_InputConnection* __this, int arg0);
bool Android_android_view_inputmethod_InputConnection__performEditorAction_IMPL_21374(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool Android_android_view_inputmethod_InputConnection__performPrivateCommand(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::java::lang::String* arg0, ::app::Android::android::os::Bundle* arg1);
bool Android_android_view_inputmethod_InputConnection__performPrivateCommand_IMPL_21381(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool Android_android_view_inputmethod_InputConnection__reportFullscreenMode(Android_android_view_inputmethod_InputConnection* __this, bool arg0);
bool Android_android_view_inputmethod_InputConnection__reportFullscreenMode_IMPL_21380(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool Android_android_view_inputmethod_InputConnection__sendKeyEvent(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::KeyEvent* arg0);
bool Android_android_view_inputmethod_InputConnection__sendKeyEvent_IMPL_21378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_inputmethod_InputConnection__setComposingRegion(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1);
bool Android_android_view_inputmethod_InputConnection__setComposingRegion_IMPL_21368(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
bool Android_android_view_inputmethod_InputConnection__setComposingText(Android_android_view_inputmethod_InputConnection* __this, ::uObject* arg0, int arg1);
bool Android_android_view_inputmethod_InputConnection__setComposingText_IMPL_21367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool Android_android_view_inputmethod_InputConnection__setSelection(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1);
bool Android_android_view_inputmethod_InputConnection__setSelection_IMPL_21373(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);

struct Android_android_view_inputmethod_InputConnection : ::app::Android::java::lang::Object
{
    bool beginBatchEdit() { return Android_android_view_inputmethod_InputConnection__beginBatchEdit(this); }
    bool clearMetaKeyStates(int arg0) { return Android_android_view_inputmethod_InputConnection__clearMetaKeyStates(this, arg0); }
    bool commitCompletion(::app::Android::android::view::inputmethod::CompletionInfo* arg0) { return Android_android_view_inputmethod_InputConnection__commitCompletion(this, arg0); }
    bool commitCorrection(::app::Android::android::view::inputmethod::CorrectionInfo* arg0) { return Android_android_view_inputmethod_InputConnection__commitCorrection(this, arg0); }
    bool commitText(::uObject* arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__commitText(this, arg0, arg1); }
    bool deleteSurroundingText(int arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__deleteSurroundingText(this, arg0, arg1); }
    bool endBatchEdit() { return Android_android_view_inputmethod_InputConnection__endBatchEdit(this); }
    bool finishComposingText() { return Android_android_view_inputmethod_InputConnection__finishComposingText(this); }
    int getCursorCapsMode(int arg0) { return Android_android_view_inputmethod_InputConnection__getCursorCapsMode(this, arg0); }
    ::app::Android::android::view::inputmethod::ExtractedText* getExtractedText(::app::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__getExtractedText(this, arg0, arg1); }
    ::uObject* getSelectedText(int arg0) { return Android_android_view_inputmethod_InputConnection__getSelectedText(this, arg0); }
    ::uObject* getTextAfterCursor(int arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__getTextAfterCursor(this, arg0, arg1); }
    ::uObject* getTextBeforeCursor(int arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__getTextBeforeCursor(this, arg0, arg1); }
    bool performContextMenuAction(int arg0) { return Android_android_view_inputmethod_InputConnection__performContextMenuAction(this, arg0); }
    bool performEditorAction(int arg0) { return Android_android_view_inputmethod_InputConnection__performEditorAction(this, arg0); }
    bool performPrivateCommand(::app::Android::java::lang::String* arg0, ::app::Android::android::os::Bundle* arg1) { return Android_android_view_inputmethod_InputConnection__performPrivateCommand(this, arg0, arg1); }
    bool reportFullscreenMode(bool arg0) { return Android_android_view_inputmethod_InputConnection__reportFullscreenMode(this, arg0); }
    bool sendKeyEvent(::app::Android::android::view::KeyEvent* arg0) { return Android_android_view_inputmethod_InputConnection__sendKeyEvent(this, arg0); }
    bool setComposingRegion(int arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__setComposingRegion(this, arg0, arg1); }
    bool setComposingText(::uObject* arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__setComposingText(this, arg0, arg1); }
    bool setSelection(int arg0, int arg1) { return Android_android_view_inputmethod_InputConnection__setSelection(this, arg0, arg1); }
};

}}}


#endif
