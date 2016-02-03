// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_INPUT_CONNECTION_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_INPUT_CONNECTION_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
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
namespace android {
namespace view {
namespace inputmethod {

::uInterfaceType* InputConnection__typeof();

struct InputConnection
{
    bool(*__fp_beginBatchEdit)(void*);
    bool(*__fp_clearMetaKeyStates)(void*, int);
    bool(*__fp_commitCompletion)(void*, ::app::Android::android::view::inputmethod::CompletionInfo*);
    bool(*__fp_commitCorrection)(void*, ::app::Android::android::view::inputmethod::CorrectionInfo*);
    bool(*__fp_commitText)(void*, ::uObject*, int);
    bool(*__fp_deleteSurroundingText)(void*, int, int);
    bool(*__fp_endBatchEdit)(void*);
    bool(*__fp_finishComposingText)(void*);
    int(*__fp_getCursorCapsMode)(void*, int);
    ::app::Android::android::view::inputmethod::ExtractedText*(*__fp_getExtractedText)(void*, ::app::Android::android::view::inputmethod::ExtractedTextRequest*, int);
    ::uObject*(*__fp_getSelectedText)(void*, int);
    ::uObject*(*__fp_getTextAfterCursor)(void*, int, int);
    ::uObject*(*__fp_getTextBeforeCursor)(void*, int, int);
    bool(*__fp_performContextMenuAction)(void*, int);
    bool(*__fp_performEditorAction)(void*, int);
    bool(*__fp_performPrivateCommand)(void*, ::app::Android::java::lang::String*, ::app::Android::android::os::Bundle*);
    bool(*__fp_reportFullscreenMode)(void*, bool);
    bool(*__fp_sendKeyEvent)(void*, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_setComposingRegion)(void*, int, int);
    bool(*__fp_setComposingText)(void*, ::uObject*, int);
    bool(*__fp_setSelection)(void*, int, int);

    static bool beginBatchEdit(::uObject* __this) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_beginBatchEdit((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool clearMetaKeyStates(::uObject* __this, int arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_clearMetaKeyStates((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool commitCompletion(::uObject* __this, ::app::Android::android::view::inputmethod::CompletionInfo* arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_commitCompletion((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool commitCorrection(::uObject* __this, ::app::Android::android::view::inputmethod::CorrectionInfo* arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_commitCorrection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool commitText(::uObject* __this, ::uObject* arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_commitText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool deleteSurroundingText(::uObject* __this, int arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_deleteSurroundingText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool endBatchEdit(::uObject* __this) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_endBatchEdit((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool finishComposingText(::uObject* __this) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_finishComposingText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getCursorCapsMode(::uObject* __this, int arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_getCursorCapsMode((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::android::view::inputmethod::ExtractedText* getExtractedText(::uObject* __this, ::app::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_getExtractedText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::uObject* getSelectedText(::uObject* __this, int arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_getSelectedText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* getTextAfterCursor(::uObject* __this, int arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_getTextAfterCursor((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::uObject* getTextBeforeCursor(::uObject* __this, int arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_getTextBeforeCursor((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool performContextMenuAction(::uObject* __this, int arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_performContextMenuAction((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool performEditorAction(::uObject* __this, int arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_performEditorAction((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool performPrivateCommand(::uObject* __this, ::app::Android::java::lang::String* arg0, ::app::Android::android::os::Bundle* arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_performPrivateCommand((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool reportFullscreenMode(::uObject* __this, bool arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_reportFullscreenMode((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool sendKeyEvent(::uObject* __this, ::app::Android::android::view::KeyEvent* arg0) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_sendKeyEvent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool setComposingRegion(::uObject* __this, int arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_setComposingRegion((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool setComposingText(::uObject* __this, ::uObject* arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_setComposingText((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool setSelection(::uObject* __this, int arg0, int arg1) { return ((InputConnection*)uGetInterfacePtr(__this, InputConnection__typeof()))->__fp_setSelection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}}


#endif
