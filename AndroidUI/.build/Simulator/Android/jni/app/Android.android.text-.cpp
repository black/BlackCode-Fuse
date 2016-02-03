#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.text.Editable.h>
#include <app/Android.android.text.GetChars.h>
#include <app/Android.android.text.InputFilter.h>
#include <app/Android.android.text.Layout.h>
#include <app/Android.android.text.LayoutDLRAlignment.h>
#include <app/Android.android.text.Spannable.h>
#include <app/Android.android.text.Spanned.h>
#include <app/Android.android.text.StaticLayout.h>
#include <app/Android.android.text.TextPaint.h>
#include <app/Android.android.text.TextUtilsDLRTruncateAt.h>
#include <app/Android.android.text.TextWatcher.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_text_Editable.h>
#include <app/Android.Fallbacks.Android_android_text_GetChars.h>
#include <app/Android.Fallbacks.Android_android_text_InputFilter.h>
#include <app/Android.Fallbacks.Android_android_text_Layout.h>
#include <app/Android.Fallbacks.Android_android_text_Spannable.h>
#include <app/Android.Fallbacks.Android_android_text_Spanned.h>
#include <app/Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.Runtime.CharArray.h>
#include <app/Android.Runtime.ObjectArray__Android_android_text_InputFilter.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_Object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Editable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.text.Editable");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* GetChars__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.text.GetChars");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* InputFilter__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.text.InputFilter");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Layout___javaClass_2;
jmethodID Layout__getDesiredWidth_19893_ID;
jmethodID Layout__getHeight_19902_ID;
jmethodID Layout__getLineBounds_19907_ID;
jmethodID Layout__getLineLeft_19919_ID;
jmethodID Layout__getLineRight_19920_ID;
jmethodID Layout__getWidth_19899_ID;
jmethodID Layout__j_draw_19895_ID;

Layout__uType* Layout__typeof()
{
    static ::uStaticStrong<Layout__uType*> type;
    if (type != NULL) return type;

    type = (Layout__uType*)::uAllocClassType(sizeof(Layout__uType), "Android.android.text.Layout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Layout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Layout__uType, __interface_1));

    type->SetFields(8,
        ::uNewField("_javaClass", &Layout___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("getDesiredWidth_19893_ID", &Layout__getDesiredWidth_19893_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getHeight_19902_ID", &Layout__getHeight_19902_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLineBounds_19907_ID", &Layout__getLineBounds_19907_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLineLeft_19919_ID", &Layout__getLineLeft_19919_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLineRight_19920_ID", &Layout__getLineRight_19920_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getWidth_19899_ID", &Layout__getWidth_19899_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("j_draw_19895_ID", &Layout__j_draw_19895_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(15,
        ::uNewFunctionVoid("_Init", Layout___Init_2, 0, true),
        ::uNewFunction("getDesiredWidth", Layout__getDesiredWidth_1, 0, true, ::app::Uno::Float__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Android::android::text::TextPaint__typeof()),
        ::uNewFunction("getDesiredWidth_IMPL_19893", Layout__getDesiredWidth_IMPL_19893, 0, true, ::app::Uno::Float__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getHeight", Layout__getHeight, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getHeight_IMPL_19902", Layout__getHeight_IMPL_19902, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getLineBounds", Layout__getLineBounds, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunction("getLineBounds_IMPL_19907", Layout__getLineBounds_IMPL_19907, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getLineLeft", Layout__getLineLeft, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getLineLeft_IMPL_19919", Layout__getLineLeft_IMPL_19919, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getLineRight", Layout__getLineRight, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getLineRight_IMPL_19920", Layout__getLineRight_IMPL_19920, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getWidth", Layout__getWidth, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getWidth_IMPL_19899", Layout__getWidth_IMPL_19899, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("j_draw", Layout__j_draw, 0, false, ::app::Android::android::graphics::Canvas__typeof()),
        ::uNewFunctionVoid("j_draw_IMPL_19895", Layout__j_draw_IMPL_19895, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Layout___Init_2(::uStatic* __this)
{
    if (::app::Android::android::text::Layout___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::text::Layout___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/Layout"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::text::Layout___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.Layout'", 43);; }
}

void Layout___ObjInit_5(Layout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

float Layout__getDesiredWidth_1(::uStatic* __this, ::uObject* arg0, ::app::Android::android::text::TextPaint* arg1)
{
    return Layout__getDesiredWidth_IMPL_19893(NULL, (::uObject*)arg0, (::uObject*)arg1);
}

float Layout__getDesiredWidth_IMPL_19893(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    jobject _obArg1 = ((!arg1_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1_));
    float result;
    CACHE_METHOD(::app::Android::android::text::Layout__getDesiredWidth_19893_ID,::app::Android::android::text::Layout___javaClass_2,"getDesiredWidth","(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F",GetStaticMethodID,"Id for fallback method android.text.Layout.getDesiredWidth could not be cached",78);
    result = ((float)U_JNIVAR->CallStaticFloatMethod(::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__getDesiredWidth_19893_ID, _obArg0, _obArg1));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Layout__getHeight(Layout* __this)
{
    return Layout__getHeight_IMPL_19902(NULL, __this->_subclassed, __this->_javaObject);
}

int Layout__getHeight_IMPL_19902(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::text::Layout__getHeight_19902_ID,::app::Android::android::text::Layout___javaClass_2,"getHeight","()I",GetMethodID,"Id for fallback method android.text.Layout.getHeight could not be cached",72);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__getHeight_19902_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::text::Layout__getHeight_19902_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Layout__getLineBounds(Layout* __this, int arg0, ::app::Android::android::graphics::Rect* arg1)
{
    return Layout__getLineBounds_IMPL_19907(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

int Layout__getLineBounds_IMPL_19907(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    CACHE_METHOD(::app::Android::android::text::Layout__getLineBounds_19907_ID,::app::Android::android::text::Layout___javaClass_2,"getLineBounds","(ILandroid/graphics/Rect;)I",GetMethodID,"Id for fallback method android.text.Layout.getLineBounds could not be cached",76);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__getLineBounds_19907_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::text::Layout__getLineBounds_19907_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float Layout__getLineLeft(Layout* __this, int arg0)
{
    return Layout__getLineLeft_IMPL_19919(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

float Layout__getLineLeft_IMPL_19919(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::text::Layout__getLineLeft_19919_ID,::app::Android::android::text::Layout___javaClass_2,"getLineLeft","(I)F",GetMethodID,"Id for fallback method android.text.Layout.getLineLeft could not be cached",74);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__getLineLeft_19919_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::text::Layout__getLineLeft_19919_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float Layout__getLineRight(Layout* __this, int arg0)
{
    return Layout__getLineRight_IMPL_19920(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

float Layout__getLineRight_IMPL_19920(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::text::Layout__getLineRight_19920_ID,::app::Android::android::text::Layout___javaClass_2,"getLineRight","(I)F",GetMethodID,"Id for fallback method android.text.Layout.getLineRight could not be cached",75);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__getLineRight_19920_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::text::Layout__getLineRight_19920_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Layout__getWidth(Layout* __this)
{
    return Layout__getWidth_IMPL_19899(NULL, __this->_subclassed, __this->_javaObject);
}

int Layout__getWidth_IMPL_19899(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::text::Layout__getWidth_19899_ID,::app::Android::android::text::Layout___javaClass_2,"getWidth","()I",GetMethodID,"Id for fallback method android.text.Layout.getWidth could not be cached",71);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__getWidth_19899_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::text::Layout__getWidth_19899_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Layout__j_draw(Layout* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    Layout__j_draw_IMPL_19895(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Layout__j_draw_IMPL_19895(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::Layout___javaClass_2,::app::Android::android::text::Layout___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::text::Layout__j_draw_19895_ID,::app::Android::android::text::Layout___javaClass_2,"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.text.Layout.draw could not be cached",67);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::text::Layout___javaClass_2, ::app::Android::android::text::Layout__j_draw_19895_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::text::Layout__j_draw_19895_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass LayoutDLRAlignment___javaClass_3;
jfieldID LayoutDLRAlignment__ALIGN_CENTER_19884_ID;
jfieldID LayoutDLRAlignment__ALIGN_NORMAL_19885_ID;
jfieldID LayoutDLRAlignment__ALIGN_OPPOSITE_19886_ID;

LayoutDLRAlignment__uType* LayoutDLRAlignment__typeof()
{
    static ::uStaticStrong<LayoutDLRAlignment__uType*> type;
    if (type != NULL) return type;

    type = (LayoutDLRAlignment__uType*)::uAllocClassType(sizeof(LayoutDLRAlignment__uType), "Android.android.text.LayoutDLRAlignment", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(LayoutDLRAlignment__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LayoutDLRAlignment__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &LayoutDLRAlignment___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("ALIGN_CENTER_19884_ID", &LayoutDLRAlignment__ALIGN_CENTER_19884_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_NORMAL_19885_ID", &LayoutDLRAlignment__ALIGN_NORMAL_19885_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_OPPOSITE_19886_ID", &LayoutDLRAlignment__ALIGN_OPPOSITE_19886_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("_Init", LayoutDLRAlignment___Init_3, 0, true),
        ::uNewFunction("get_ALIGN_CENTER", LayoutDLRAlignment__get_ALIGN_CENTER, 0, true, LayoutDLRAlignment__typeof()),
        ::uNewFunction("get_ALIGN_NORMAL", LayoutDLRAlignment__get_ALIGN_NORMAL, 0, true, LayoutDLRAlignment__typeof()),
        ::uNewFunction("get_ALIGN_OPPOSITE", LayoutDLRAlignment__get_ALIGN_OPPOSITE, 0, true, LayoutDLRAlignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void LayoutDLRAlignment___Init_3(::uStatic* __this)
{
    if (::app::Android::android::text::LayoutDLRAlignment___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::text::LayoutDLRAlignment___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/Layout$Alignment"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::text::LayoutDLRAlignment___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.Layout$Alignment'", 53);; }
}

LayoutDLRAlignment* LayoutDLRAlignment__get_ALIGN_CENTER(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::LayoutDLRAlignment___javaClass_3,::app::Android::android::text::LayoutDLRAlignment___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::text::LayoutDLRAlignment__ALIGN_CENTER_19884_ID)) {;
    CACHE_FIELD(::app::Android::android::text::LayoutDLRAlignment__ALIGN_CENTER_19884_ID,::app::Android::android::text::LayoutDLRAlignment___javaClass_3,"ALIGN_CENTER","Landroid/text/Layout$Alignment;",GetStaticFieldID,"Id for field LayoutDLRAlignment.ALIGN_CENTER could not be cached",64);
    ::uExitCritical();;
    };
    LayoutDLRAlignment* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::text::LayoutDLRAlignment___javaClass_3, ::app::Android::android::text::LayoutDLRAlignment__ALIGN_CENTER_19884_ID),result,::app::Android::android::text::LayoutDLRAlignment__typeof(),LayoutDLRAlignment*,false,true);;
    return ::uCast< LayoutDLRAlignment*>(result, LayoutDLRAlignment__typeof());
}

LayoutDLRAlignment* LayoutDLRAlignment__get_ALIGN_NORMAL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::LayoutDLRAlignment___javaClass_3,::app::Android::android::text::LayoutDLRAlignment___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::text::LayoutDLRAlignment__ALIGN_NORMAL_19885_ID)) {;
    CACHE_FIELD(::app::Android::android::text::LayoutDLRAlignment__ALIGN_NORMAL_19885_ID,::app::Android::android::text::LayoutDLRAlignment___javaClass_3,"ALIGN_NORMAL","Landroid/text/Layout$Alignment;",GetStaticFieldID,"Id for field LayoutDLRAlignment.ALIGN_NORMAL could not be cached",64);
    ::uExitCritical();;
    };
    LayoutDLRAlignment* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::text::LayoutDLRAlignment___javaClass_3, ::app::Android::android::text::LayoutDLRAlignment__ALIGN_NORMAL_19885_ID),result,::app::Android::android::text::LayoutDLRAlignment__typeof(),LayoutDLRAlignment*,false,true);;
    return ::uCast< LayoutDLRAlignment*>(result, LayoutDLRAlignment__typeof());
}

LayoutDLRAlignment* LayoutDLRAlignment__get_ALIGN_OPPOSITE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::LayoutDLRAlignment___javaClass_3,::app::Android::android::text::LayoutDLRAlignment___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::text::LayoutDLRAlignment__ALIGN_OPPOSITE_19886_ID)) {;
    CACHE_FIELD(::app::Android::android::text::LayoutDLRAlignment__ALIGN_OPPOSITE_19886_ID,::app::Android::android::text::LayoutDLRAlignment___javaClass_3,"ALIGN_OPPOSITE","Landroid/text/Layout$Alignment;",GetStaticFieldID,"Id for field LayoutDLRAlignment.ALIGN_OPPOSITE could not be cached",66);
    ::uExitCritical();;
    };
    LayoutDLRAlignment* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::text::LayoutDLRAlignment___javaClass_3, ::app::Android::android::text::LayoutDLRAlignment__ALIGN_OPPOSITE_19886_ID),result,::app::Android::android::text::LayoutDLRAlignment__typeof(),LayoutDLRAlignment*,false,true);;
    return ::uCast< LayoutDLRAlignment*>(result, LayoutDLRAlignment__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Spannable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.text.Spannable");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Spanned__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.text.Spanned");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass StaticLayout___javaClass_3;
jmethodID StaticLayout__getLineCount_20064_ID;
jmethodID StaticLayout__StaticLayout_20060_ID_c;
jmethodID StaticLayout__StaticLayout_20062_ID_c;

StaticLayout__uType* StaticLayout__typeof()
{
    static ::uStaticStrong<StaticLayout__uType*> type;
    if (type != NULL) return type;

    type = (StaticLayout__uType*)::uAllocClassType(sizeof(StaticLayout__uType), "Android.android.text.StaticLayout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::text::Layout__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(StaticLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(StaticLayout__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &StaticLayout___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("getLineCount_20064_ID", &StaticLayout__getLineCount_20064_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("StaticLayout_20060_ID_c", &StaticLayout__StaticLayout_20060_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("StaticLayout_20062_ID_c", &StaticLayout__StaticLayout_20062_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", StaticLayout___Init_3, 0, true),
        ::uNewFunction("getLineCount", StaticLayout__getLineCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getLineCount_IMPL_20064", StaticLayout__getLineCount_IMPL_20064, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", StaticLayout__New_6, 0, true, StaticLayout__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::text::TextPaint__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::text::LayoutDLRAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::android::text::TextUtilsDLRTruncateAt__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", StaticLayout__New_7, 0, true, StaticLayout__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Android::android::text::TextPaint__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::text::LayoutDLRAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void StaticLayout___Init_3(::uStatic* __this)
{
    if (::app::Android::android::text::StaticLayout___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::text::StaticLayout___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/StaticLayout"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::text::StaticLayout___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.StaticLayout'", 49);; }
}

void StaticLayout___ObjInit_7(StaticLayout* __this, ::uObject* arg0, int arg1, int arg2, ::app::Android::android::text::TextPaint* arg3, int arg4, ::app::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10)
{
    ::app::Android::android::text::Layout___ObjInit_5(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::text::StaticLayout___javaClass_3,::app::Android::android::text::StaticLayout___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::text::StaticLayout__StaticLayout_20062_ID_c,::app::Android::android::text::StaticLayout___javaClass_3,"<init>","(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",GetMethodID,"Id for fallback method android.text.StaticLayout.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg3 = ((!arg3) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3));;
    jobject _obArg5 = ((!arg5) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5));;
    jobject _obArg9 = ((!arg9) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg9));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::text::StaticLayout___javaClass_3, ::app::Android::android::text::StaticLayout__StaticLayout_20062_ID_c, _obArg0, ((jint)arg1), ((jint)arg2), _obArg3, ((jint)arg4), _obArg5, ((jfloat)arg6), ((jfloat)arg7), ((jboolean)arg8), _obArg9, ((jint)arg10));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void StaticLayout___ObjInit_8(StaticLayout* __this, ::uObject* arg0, ::app::Android::android::text::TextPaint* arg1, int arg2, ::app::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6)
{
    ::app::Android::android::text::Layout___ObjInit_5(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::text::StaticLayout___javaClass_3,::app::Android::android::text::StaticLayout___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::text::StaticLayout__StaticLayout_20060_ID_c,::app::Android::android::text::StaticLayout___javaClass_3,"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",GetMethodID,"Id for fallback method android.text.StaticLayout.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject _obArg3 = ((!arg3) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::text::StaticLayout___javaClass_3, ::app::Android::android::text::StaticLayout__StaticLayout_20060_ID_c, _obArg0, _obArg1, ((jint)arg2), _obArg3, ((jfloat)arg4), ((jfloat)arg5), ((jboolean)arg6));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

int StaticLayout__getLineCount(StaticLayout* __this)
{
    return StaticLayout__getLineCount_IMPL_20064(NULL, __this->_subclassed, __this->_javaObject);
}

int StaticLayout__getLineCount_IMPL_20064(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::StaticLayout___javaClass_3,::app::Android::android::text::StaticLayout___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::text::StaticLayout__getLineCount_20064_ID,::app::Android::android::text::StaticLayout___javaClass_3,"getLineCount","()I",GetMethodID,"Id for fallback method android.text.StaticLayout.getLineCount could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::text::StaticLayout___javaClass_3, ::app::Android::android::text::StaticLayout__getLineCount_20064_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::text::StaticLayout__getLineCount_20064_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

StaticLayout* StaticLayout__New_6(::uStatic* __this, ::uObject* arg0, int arg1, int arg2, ::app::Android::android::text::TextPaint* arg3, int arg4, ::app::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10)
{
    StaticLayout* inst = (StaticLayout*)::uAllocObject(sizeof(StaticLayout), StaticLayout__typeof());
    inst->_ObjInit_7(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    return inst;
}

StaticLayout* StaticLayout__New_7(::uStatic* __this, ::uObject* arg0, ::app::Android::android::text::TextPaint* arg1, int arg2, ::app::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6)
{
    StaticLayout* inst = (StaticLayout*)::uAllocObject(sizeof(StaticLayout), StaticLayout__typeof());
    inst->_ObjInit_8(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TextPaint___javaClass_3;
jmethodID TextPaint__TextPaint_20090_ID_c;

TextPaint__uType* TextPaint__typeof()
{
    static ::uStaticStrong<TextPaint__uType*> type;
    if (type != NULL) return type;

    type = (TextPaint__uType*)::uAllocClassType(sizeof(TextPaint__uType), "Android.android.text.TextPaint", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::Paint__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TextPaint__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TextPaint__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &TextPaint___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("TextPaint_20090_ID_c", &TextPaint__TextPaint_20090_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", TextPaint___Init_3, 0, true),
        ::uNewFunction(".ctor", TextPaint__New_9, 0, true, TextPaint__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextPaint___Init_3(::uStatic* __this)
{
    if (::app::Android::android::text::TextPaint___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::text::TextPaint___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/TextPaint"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::text::TextPaint___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.TextPaint'", 46);; }
}

void TextPaint___ObjInit_8(TextPaint* __this)
{
    ::app::Android::android::graphics::Paint___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::text::TextPaint___javaClass_3,::app::Android::android::text::TextPaint___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::text::TextPaint__TextPaint_20090_ID_c,::app::Android::android::text::TextPaint___javaClass_3,"<init>","()V",GetMethodID,"Id for fallback method android.text.TextPaint.<init> could not be cached",72);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::text::TextPaint___javaClass_3, ::app::Android::android::text::TextPaint__TextPaint_20090_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

TextPaint* TextPaint__New_9(::uStatic* __this)
{
    TextPaint* inst = (TextPaint*)::uAllocObject(sizeof(TextPaint), TextPaint__typeof());
    inst->_ObjInit_8();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TextUtilsDLRTruncateAt___javaClass_3;
jfieldID TextUtilsDLRTruncateAt__END_20102_ID;

TextUtilsDLRTruncateAt__uType* TextUtilsDLRTruncateAt__typeof()
{
    static ::uStaticStrong<TextUtilsDLRTruncateAt__uType*> type;
    if (type != NULL) return type;

    type = (TextUtilsDLRTruncateAt__uType*)::uAllocClassType(sizeof(TextUtilsDLRTruncateAt__uType), "Android.android.text.TextUtilsDLRTruncateAt", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TextUtilsDLRTruncateAt__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TextUtilsDLRTruncateAt__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &TextUtilsDLRTruncateAt___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("END_20102_ID", &TextUtilsDLRTruncateAt__END_20102_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", TextUtilsDLRTruncateAt___Init_3, 0, true),
        ::uNewFunction("get_END", TextUtilsDLRTruncateAt__get_END, 0, true, TextUtilsDLRTruncateAt__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextUtilsDLRTruncateAt___Init_3(::uStatic* __this)
{
    if (::app::Android::android::text::TextUtilsDLRTruncateAt___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::text::TextUtilsDLRTruncateAt___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/TextUtils$TruncateAt"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::text::TextUtilsDLRTruncateAt___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.TextUtils$TruncateAt'", 57);; }
}

TextUtilsDLRTruncateAt* TextUtilsDLRTruncateAt__get_END(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::text::TextUtilsDLRTruncateAt___javaClass_3,::app::Android::android::text::TextUtilsDLRTruncateAt___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::text::TextUtilsDLRTruncateAt__END_20102_ID)) {;
    CACHE_FIELD(::app::Android::android::text::TextUtilsDLRTruncateAt__END_20102_ID,::app::Android::android::text::TextUtilsDLRTruncateAt___javaClass_3,"END","Landroid/text/TextUtils$TruncateAt;",GetStaticFieldID,"Id for field TextUtilsDLRTruncateAt.END could not be cached",59);
    ::uExitCritical();;
    };
    TextUtilsDLRTruncateAt* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::text::TextUtilsDLRTruncateAt___javaClass_3, ::app::Android::android::text::TextUtilsDLRTruncateAt__END_20102_ID),result,::app::Android::android::text::TextUtilsDLRTruncateAt__typeof(),TextUtilsDLRTruncateAt*,false,true);;
    return ::uCast< TextUtilsDLRTruncateAt*>(result, TextUtilsDLRTruncateAt__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TextWatcher__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.text.TextWatcher");

    ::uRegisterType(type);
    return type;
}

}}}}
