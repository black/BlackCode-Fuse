// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_EDITABLE_H__
#define __APP_ANDROID_ANDROID_TEXT_EDITABLE_H__

#include <app/Android.android.text.GetChars.h>
#include <app/Android.android.text.Spannable.h>
#include <app/Android.android.text.Spanned.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_text_InputFilter; } } }

namespace app {
namespace Android {
namespace android {
namespace text {

::uInterfaceType* Editable__typeof();

struct Editable
{
    ::uObject*(*__fp_append)(void*, ::uChar);
    ::uObject*(*__fp_append_1)(void*, ::uObject*);
    ::uObject*(*__fp_append_2)(void*, ::uObject*, int, int);
    void(*__fp_clear)(void*);
    void(*__fp_clearSpans)(void*);
    ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*(*__fp_getFilters)(void*);
    ::uObject*(*__fp_insert)(void*, int, ::uObject*);
    ::uObject*(*__fp_insert_1)(void*, int, ::uObject*, int, int);
    ::uObject*(*__fp_j_delete)(void*, int, int);
    ::uObject*(*__fp_replace)(void*, int, int, ::uObject*);
    ::uObject*(*__fp_replace_1)(void*, int, int, ::uObject*, int, int);
    void(*__fp_setFilters)(void*, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*);

    static ::uObject* append(::uObject* __this, ::uChar arg0) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_append((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* append_1(::uObject* __this, ::uObject* arg0) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_append_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* append_2(::uObject* __this, ::uObject* arg0, int arg1, int arg2) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_append_2((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void clear(::uObject* __this) { ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void clearSpans(::uObject* __this) { ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_clearSpans((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* getFilters(::uObject* __this) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_getFilters((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* insert(::uObject* __this, int arg0, ::uObject* arg1) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_insert((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::uObject* insert_1(::uObject* __this, int arg0, ::uObject* arg1, int arg2, int arg3) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_insert_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static ::uObject* j_delete(::uObject* __this, int arg0, int arg1) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_j_delete((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::uObject* replace(::uObject* __this, int arg0, int arg1, ::uObject* arg2) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_replace((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static ::uObject* replace_1(::uObject* __this, int arg0, int arg1, ::uObject* arg2, int arg3, int arg4) { return ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_replace_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3, arg4); }
    static void setFilters(::uObject* __this, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* arg0) { ((Editable*)uGetInterfacePtr(__this, Editable__typeof()))->__fp_setFilters((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
