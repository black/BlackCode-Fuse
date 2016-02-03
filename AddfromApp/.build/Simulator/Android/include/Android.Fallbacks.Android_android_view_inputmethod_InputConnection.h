// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.inputmethod.InputConnection.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct CompletionInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct CorrectionInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct ExtractedText;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct ExtractedTextRequest;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_inputmethod_InputConnection;}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_inputmethod_InputConnection :46037
// {
struct Android_android_view_inputmethod_InputConnection_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::inputmethod::InputConnection interface2;
};

Android_android_view_inputmethod_InputConnection_type* Android_android_view_inputmethod_InputConnection_typeof();
void Android_android_view_inputmethod_InputConnection__beginBatchEdit_fn(Android_android_view_inputmethod_InputConnection* __this, bool* __retval);
void Android_android_view_inputmethod_InputConnection__beginBatchEdit_IMPL_21376_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_IMPL_21379_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__commitCompletion_fn(Android_android_view_inputmethod_InputConnection* __this, ::g::Android::android::view::inputmethod::CompletionInfo* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__commitCompletion_IMPL_21371_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__commitCorrection_fn(Android_android_view_inputmethod_InputConnection* __this, ::g::Android::android::view::inputmethod::CorrectionInfo* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__commitCorrection_IMPL_21372_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__commitText_fn(Android_android_view_inputmethod_InputConnection* __this, uObject* arg0, int* arg1, bool* __retval);
void Android_android_view_inputmethod_InputConnection__commitText_IMPL_21370_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__deleteSurroundingText_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, int* arg1, bool* __retval);
void Android_android_view_inputmethod_InputConnection__deleteSurroundingText_IMPL_21366_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__endBatchEdit_fn(Android_android_view_inputmethod_InputConnection* __this, bool* __retval);
void Android_android_view_inputmethod_InputConnection__endBatchEdit_IMPL_21377_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__finishComposingText_fn(Android_android_view_inputmethod_InputConnection* __this, bool* __retval);
void Android_android_view_inputmethod_InputConnection__finishComposingText_IMPL_21369_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__getCursorCapsMode_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, int* __retval);
void Android_android_view_inputmethod_InputConnection__getCursorCapsMode_IMPL_21364_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval);
void Android_android_view_inputmethod_InputConnection__getExtractedText_fn(Android_android_view_inputmethod_InputConnection* __this, ::g::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int* arg1, ::g::Android::android::view::inputmethod::ExtractedText** __retval);
void Android_android_view_inputmethod_InputConnection__getExtractedText_IMPL_21365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__getSelectedText_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__getSelectedText_IMPL_21363_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__getTextAfterCursor_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, int* arg1, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__getTextAfterCursor_IMPL_21362_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, int* arg1, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_IMPL_21361_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval);
void Android_android_view_inputmethod_InputConnection__performContextMenuAction_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__performContextMenuAction_IMPL_21375_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__performEditorAction_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__performEditorAction_IMPL_21374_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__performPrivateCommand_fn(Android_android_view_inputmethod_InputConnection* __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void Android_android_view_inputmethod_InputConnection__performPrivateCommand_IMPL_21381_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__reportFullscreenMode_fn(Android_android_view_inputmethod_InputConnection* __this, bool* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__reportFullscreenMode_IMPL_21380_fn(bool* arg0_, jobject* arg1_, bool* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__sendKeyEvent_fn(Android_android_view_inputmethod_InputConnection* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void Android_android_view_inputmethod_InputConnection__sendKeyEvent_IMPL_21378_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__setComposingRegion_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, int* arg1, bool* __retval);
void Android_android_view_inputmethod_InputConnection__setComposingRegion_IMPL_21368_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__setComposingText_fn(Android_android_view_inputmethod_InputConnection* __this, uObject* arg0, int* arg1, bool* __retval);
void Android_android_view_inputmethod_InputConnection__setComposingText_IMPL_21367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);
void Android_android_view_inputmethod_InputConnection__setSelection_fn(Android_android_view_inputmethod_InputConnection* __this, int* arg0, int* arg1, bool* __retval);
void Android_android_view_inputmethod_InputConnection__setSelection_IMPL_21373_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval);

struct Android_android_view_inputmethod_InputConnection : ::g::Android::java::lang::Object
{
    static jmethodID beginBatchEdit_21376_ID_;
    static jmethodID& beginBatchEdit_21376_ID() { return beginBatchEdit_21376_ID_; }
    static jmethodID clearMetaKeyStates_21379_ID_;
    static jmethodID& clearMetaKeyStates_21379_ID() { return clearMetaKeyStates_21379_ID_; }
    static jmethodID commitCompletion_21371_ID_;
    static jmethodID& commitCompletion_21371_ID() { return commitCompletion_21371_ID_; }
    static jmethodID commitCorrection_21372_ID_;
    static jmethodID& commitCorrection_21372_ID() { return commitCorrection_21372_ID_; }
    static jmethodID commitText_21370_ID_;
    static jmethodID& commitText_21370_ID() { return commitText_21370_ID_; }
    static jmethodID deleteSurroundingText_21366_ID_;
    static jmethodID& deleteSurroundingText_21366_ID() { return deleteSurroundingText_21366_ID_; }
    static jmethodID endBatchEdit_21377_ID_;
    static jmethodID& endBatchEdit_21377_ID() { return endBatchEdit_21377_ID_; }
    static jmethodID finishComposingText_21369_ID_;
    static jmethodID& finishComposingText_21369_ID() { return finishComposingText_21369_ID_; }
    static jmethodID getCursorCapsMode_21364_ID_;
    static jmethodID& getCursorCapsMode_21364_ID() { return getCursorCapsMode_21364_ID_; }
    static jmethodID getExtractedText_21365_ID_;
    static jmethodID& getExtractedText_21365_ID() { return getExtractedText_21365_ID_; }
    static jmethodID getSelectedText_21363_ID_;
    static jmethodID& getSelectedText_21363_ID() { return getSelectedText_21363_ID_; }
    static jmethodID getTextAfterCursor_21362_ID_;
    static jmethodID& getTextAfterCursor_21362_ID() { return getTextAfterCursor_21362_ID_; }
    static jmethodID getTextBeforeCursor_21361_ID_;
    static jmethodID& getTextBeforeCursor_21361_ID() { return getTextBeforeCursor_21361_ID_; }
    static jmethodID performContextMenuAction_21375_ID_;
    static jmethodID& performContextMenuAction_21375_ID() { return performContextMenuAction_21375_ID_; }
    static jmethodID performEditorAction_21374_ID_;
    static jmethodID& performEditorAction_21374_ID() { return performEditorAction_21374_ID_; }
    static jmethodID performPrivateCommand_21381_ID_;
    static jmethodID& performPrivateCommand_21381_ID() { return performPrivateCommand_21381_ID_; }
    static jmethodID reportFullscreenMode_21380_ID_;
    static jmethodID& reportFullscreenMode_21380_ID() { return reportFullscreenMode_21380_ID_; }
    static jmethodID sendKeyEvent_21378_ID_;
    static jmethodID& sendKeyEvent_21378_ID() { return sendKeyEvent_21378_ID_; }
    static jmethodID setComposingRegion_21368_ID_;
    static jmethodID& setComposingRegion_21368_ID() { return setComposingRegion_21368_ID_; }
    static jmethodID setComposingText_21367_ID_;
    static jmethodID& setComposingText_21367_ID() { return setComposingText_21367_ID_; }
    static jmethodID setSelection_21373_ID_;
    static jmethodID& setSelection_21373_ID() { return setSelection_21373_ID_; }

    bool beginBatchEdit();
    bool clearMetaKeyStates(int arg0);
    bool commitCompletion(::g::Android::android::view::inputmethod::CompletionInfo* arg0);
    bool commitCorrection(::g::Android::android::view::inputmethod::CorrectionInfo* arg0);
    bool commitText(uObject* arg0, int arg1);
    bool deleteSurroundingText(int arg0, int arg1);
    bool endBatchEdit();
    bool finishComposingText();
    int getCursorCapsMode(int arg0);
    ::g::Android::android::view::inputmethod::ExtractedText* getExtractedText(::g::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int arg1);
    uObject* getSelectedText(int arg0);
    uObject* getTextAfterCursor(int arg0, int arg1);
    uObject* getTextBeforeCursor(int arg0, int arg1);
    bool performContextMenuAction(int arg0);
    bool performEditorAction(int arg0);
    bool performPrivateCommand(::g::Android::java::lang::String* arg0, ::g::Android::android::os::Bundle* arg1);
    bool reportFullscreenMode(bool arg0);
    bool sendKeyEvent(::g::Android::android::view::KeyEvent* arg0);
    bool setComposingRegion(int arg0, int arg1);
    bool setComposingText(uObject* arg0, int arg1);
    bool setSelection(int arg0, int arg1);
    static bool beginBatchEdit_IMPL_21376(bool arg0_, jobject arg1_);
    static bool clearMetaKeyStates_IMPL_21379(bool arg0_, jobject arg1_, int arg2_);
    static bool commitCompletion_IMPL_21371(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool commitCorrection_IMPL_21372(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool commitText_IMPL_21370(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool deleteSurroundingText_IMPL_21366(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static bool endBatchEdit_IMPL_21377(bool arg0_, jobject arg1_);
    static bool finishComposingText_IMPL_21369(bool arg0_, jobject arg1_);
    static int getCursorCapsMode_IMPL_21364(bool arg0_, jobject arg1_, int arg2_);
    static uObject* getExtractedText_IMPL_21365(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static uObject* getSelectedText_IMPL_21363(bool arg0_, jobject arg1_, int arg2_);
    static uObject* getTextAfterCursor_IMPL_21362(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* getTextBeforeCursor_IMPL_21361(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static bool performContextMenuAction_IMPL_21375(bool arg0_, jobject arg1_, int arg2_);
    static bool performEditorAction_IMPL_21374(bool arg0_, jobject arg1_, int arg2_);
    static bool performPrivateCommand_IMPL_21381(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool reportFullscreenMode_IMPL_21380(bool arg0_, jobject arg1_, bool arg2_);
    static bool sendKeyEvent_IMPL_21378(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool setComposingRegion_IMPL_21368(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static bool setComposingText_IMPL_21367(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool setSelection_IMPL_21373(bool arg0_, jobject arg1_, int arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks
