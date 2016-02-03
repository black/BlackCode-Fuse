// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct CompletionInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct CorrectionInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct ExtractedText;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct ExtractedTextRequest;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// public abstract extern interface InputConnection :3228
// {
uInterfaceType* InputConnection_typeof();

struct InputConnection
{
    void(*fp_beginBatchEdit)(uObject*, bool*);
    void(*fp_clearMetaKeyStates)(uObject*, int*, bool*);
    void(*fp_commitCompletion)(uObject*, ::g::Android::android::view::inputmethod::CompletionInfo*, bool*);
    void(*fp_commitCorrection)(uObject*, ::g::Android::android::view::inputmethod::CorrectionInfo*, bool*);
    void(*fp_commitText)(uObject*, uObject*, int*, bool*);
    void(*fp_deleteSurroundingText)(uObject*, int*, int*, bool*);
    void(*fp_endBatchEdit)(uObject*, bool*);
    void(*fp_finishComposingText)(uObject*, bool*);
    void(*fp_getCursorCapsMode)(uObject*, int*, int*);
    void(*fp_getExtractedText)(uObject*, ::g::Android::android::view::inputmethod::ExtractedTextRequest*, int*, ::g::Android::android::view::inputmethod::ExtractedText**);
    void(*fp_getSelectedText)(uObject*, int*, uObject**);
    void(*fp_getTextAfterCursor)(uObject*, int*, int*, uObject**);
    void(*fp_getTextBeforeCursor)(uObject*, int*, int*, uObject**);
    void(*fp_performContextMenuAction)(uObject*, int*, bool*);
    void(*fp_performEditorAction)(uObject*, int*, bool*);
    void(*fp_performPrivateCommand)(uObject*, ::g::Android::java::lang::String*, ::g::Android::android::os::Bundle*, bool*);
    void(*fp_reportFullscreenMode)(uObject*, bool*, bool*);
    void(*fp_sendKeyEvent)(uObject*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_setComposingRegion)(uObject*, int*, int*, bool*);
    void(*fp_setComposingText)(uObject*, uObject*, int*, bool*);
    void(*fp_setSelection)(uObject*, int*, int*, bool*);
    static bool beginBatchEdit(const uInterface& __this) { bool __retval; return __this.VTable<InputConnection>()->fp_beginBatchEdit(__this, &__retval), __retval; }
    static bool clearMetaKeyStates(const uInterface& __this, int arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_clearMetaKeyStates(__this, &arg0, &__retval), __retval; }
    static bool commitCompletion(const uInterface& __this, ::g::Android::android::view::inputmethod::CompletionInfo* arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_commitCompletion(__this, arg0, &__retval), __retval; }
    static bool commitCorrection(const uInterface& __this, ::g::Android::android::view::inputmethod::CorrectionInfo* arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_commitCorrection(__this, arg0, &__retval), __retval; }
    static bool commitText(const uInterface& __this, uObject* arg0, int arg1) { bool __retval; return __this.VTable<InputConnection>()->fp_commitText(__this, arg0, &arg1, &__retval), __retval; }
    static bool deleteSurroundingText(const uInterface& __this, int arg0, int arg1) { bool __retval; return __this.VTable<InputConnection>()->fp_deleteSurroundingText(__this, &arg0, &arg1, &__retval), __retval; }
    static bool endBatchEdit(const uInterface& __this) { bool __retval; return __this.VTable<InputConnection>()->fp_endBatchEdit(__this, &__retval), __retval; }
    static bool finishComposingText(const uInterface& __this) { bool __retval; return __this.VTable<InputConnection>()->fp_finishComposingText(__this, &__retval), __retval; }
    static int getCursorCapsMode(const uInterface& __this, int arg0) { int __retval; return __this.VTable<InputConnection>()->fp_getCursorCapsMode(__this, &arg0, &__retval), __retval; }
    static ::g::Android::android::view::inputmethod::ExtractedText* getExtractedText(const uInterface& __this, ::g::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int arg1) { ::g::Android::android::view::inputmethod::ExtractedText* __retval; return __this.VTable<InputConnection>()->fp_getExtractedText(__this, arg0, &arg1, &__retval), __retval; }
    static uObject* getSelectedText(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<InputConnection>()->fp_getSelectedText(__this, &arg0, &__retval), __retval; }
    static uObject* getTextAfterCursor(const uInterface& __this, int arg0, int arg1) { uObject* __retval; return __this.VTable<InputConnection>()->fp_getTextAfterCursor(__this, &arg0, &arg1, &__retval), __retval; }
    static uObject* getTextBeforeCursor(const uInterface& __this, int arg0, int arg1) { uObject* __retval; return __this.VTable<InputConnection>()->fp_getTextBeforeCursor(__this, &arg0, &arg1, &__retval), __retval; }
    static bool performContextMenuAction(const uInterface& __this, int arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_performContextMenuAction(__this, &arg0, &__retval), __retval; }
    static bool performEditorAction(const uInterface& __this, int arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_performEditorAction(__this, &arg0, &__retval), __retval; }
    static bool performPrivateCommand(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::os::Bundle* arg1) { bool __retval; return __this.VTable<InputConnection>()->fp_performPrivateCommand(__this, arg0, arg1, &__retval), __retval; }
    static bool reportFullscreenMode(const uInterface& __this, bool arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_reportFullscreenMode(__this, &arg0, &__retval), __retval; }
    static bool sendKeyEvent(const uInterface& __this, ::g::Android::android::view::KeyEvent* arg0) { bool __retval; return __this.VTable<InputConnection>()->fp_sendKeyEvent(__this, arg0, &__retval), __retval; }
    static bool setComposingRegion(const uInterface& __this, int arg0, int arg1) { bool __retval; return __this.VTable<InputConnection>()->fp_setComposingRegion(__this, &arg0, &arg1, &__retval), __retval; }
    static bool setComposingText(const uInterface& __this, uObject* arg0, int arg1) { bool __retval; return __this.VTable<InputConnection>()->fp_setComposingText(__this, arg0, &arg1, &__retval), __retval; }
    static bool setSelection(const uInterface& __this, int arg0, int arg1) { bool __retval; return __this.VTable<InputConnection>()->fp_setSelection(__this, &arg0, &arg1, &__retval), __retval; }
};
// }

}}}}} // ::g::Android::android::view::inputmethod
