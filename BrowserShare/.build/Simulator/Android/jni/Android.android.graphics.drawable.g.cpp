// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.drawable.LayerDrawable.h>
#include <Android.android.graphics.drawable.ShapeDrawable.h>
#include <Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h>
#include <Android.android.graphics.drawable.shapes.Shape.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.PorterDuffDLRMode.h>
#include <Android.android.graphics.Shader.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\drawable\$.uno(62)
// --------------------------------------------------------------------------------------

// public abstract extern class Drawable :62
// {
::g::Android::java::lang::Object_type* Drawable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Drawable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.Drawable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::Drawable::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::Drawable::setColorFilter_6079_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)Drawable___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("setColorFilter", NULL, (void*)Drawable__setColorFilter1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::android::graphics::PorterDuffDLRMode_typeof()),
        new uFunction("setColorFilter_IMPL_6079", NULL, (void*)Drawable__setColorFilter_IMPL_6079_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// protected Drawable(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :67
void Drawable__ctor_5_fn(Drawable* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :66
void Drawable___Init2_fn()
{
    Drawable::_Init2();
}

// public void setColorFilter(int arg0, Android.android.graphics.PorterDuffDLRMode arg1) :183
void Drawable__setColorFilter1_fn(Drawable* __this, int* arg0, ::g::Android::android::graphics::PorterDuffDLRMode* arg1)
{
    __this->setColorFilter1(*arg0, arg1);
}

// public static extern void setColorFilter_IMPL_6079(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :425
void Drawable__setColorFilter_IMPL_6079_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_)
{
    Drawable::setColorFilter_IMPL_6079(*arg0_, *arg1_, *arg2_, arg3_);
}

jclass Drawable::_javaClass2_;
jmethodID Drawable::setColorFilter_6079_ID_;

// protected Drawable(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :67
void Drawable::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public void setColorFilter(int arg0, Android.android.graphics.PorterDuffDLRMode arg1) [instance] :183
void Drawable::setColorFilter1(int arg0, ::g::Android::android::graphics::PorterDuffDLRMode* arg1)
{
    int arg0_ = arg0;
    Drawable::setColorFilter_IMPL_6079(_subclassed, _javaObject, arg0_, (uObject*)arg1);
}

// public static extern new void _Init() [static] :66
void Drawable::_Init2()
{
    if (Drawable::_javaClass2()) { return; }
    INIT_JNI;
    Drawable::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/Drawable"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Drawable::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.Drawable'", 58);; }
}

// public static extern void setColorFilter_IMPL_6079(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :425
void Drawable::setColorFilter_IMPL_6079(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(Drawable::_javaClass2(),Drawable::_Init2());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Drawable::setColorFilter_6079_ID(),Drawable::_javaClass2(),"setColorFilter","(ILandroid/graphics/PorterDuff$Mode;)V",GetMethodID,"Id for fallback method android.graphics.drawable.Drawable.setColorFilter could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Drawable::_javaClass2(), Drawable::setColorFilter_6079_ID(), ((jint)arg2_), _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Drawable::setColorFilter_6079_ID(), ((jint)arg2_), _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\drawable\$.uno(2948)
// ----------------------------------------------------------------------------------------

// public sealed extern class LayerDrawable :2948
// {
::g::Android::java::lang::Object_type* LayerDrawable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayerDrawable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.LayerDrawable", options);
    type->SetBase(::g::Android::android::graphics::drawable::Drawable_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::LayerDrawable::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::LayerDrawable::getDrawable_6241_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::LayerDrawable::getNumberOfLayers_6240_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::LayerDrawable::LayerDrawable_6236_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)LayerDrawable___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getDrawable", NULL, (void*)LayerDrawable__getDrawable_fn, 0, false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getDrawable_IMPL_6241", NULL, (void*)LayerDrawable__getDrawable_IMPL_6241_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getNumberOfLayers", NULL, (void*)LayerDrawable__getNumberOfLayers_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getNumberOfLayers_IMPL_6240", NULL, (void*)LayerDrawable__getNumberOfLayers_IMPL_6240_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)LayerDrawable__New6_fn, 0, true, LayerDrawable_typeof(), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::graphics::drawable::Drawable_typeof())));
    return type;
}

// public LayerDrawable(Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable> arg0) :2955
void LayerDrawable__ctor_7_fn(LayerDrawable* __this, ::g::Android::Runtime::ObjectArray* arg0)
{
    __this->ctor_7(arg0);
}

// public static extern new void _Init() :2952
void LayerDrawable___Init3_fn()
{
    LayerDrawable::_Init3();
}

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) :2995
void LayerDrawable__getDrawable_fn(LayerDrawable* __this, int* arg0, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getDrawable(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_6241(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :3171
void LayerDrawable__getDrawable_IMPL_6241_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = LayerDrawable::getDrawable_IMPL_6241(*arg0_, *arg1_, *arg2_);
}

// public int getNumberOfLayers() :2989
void LayerDrawable__getNumberOfLayers_fn(LayerDrawable* __this, int* __retval)
{
    *__retval = __this->getNumberOfLayers();
}

// public static extern int getNumberOfLayers_IMPL_6240(bool arg0, Android.Base.Primitives.ujobject arg1) :3168
void LayerDrawable__getNumberOfLayers_IMPL_6240_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = LayerDrawable::getNumberOfLayers_IMPL_6240(*arg0_, *arg1_);
}

// public LayerDrawable New(Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable> arg0) :2955
void LayerDrawable__New6_fn(::g::Android::Runtime::ObjectArray* arg0, LayerDrawable** __retval)
{
    *__retval = LayerDrawable::New6(arg0);
}

jclass LayerDrawable::_javaClass3_;
jmethodID LayerDrawable::getDrawable_6241_ID_;
jmethodID LayerDrawable::getNumberOfLayers_6240_ID_;
jmethodID LayerDrawable::LayerDrawable_6236_ID_c_;

// public LayerDrawable(Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable> arg0) [instance] :2955
void LayerDrawable::ctor_7(::g::Android::Runtime::ObjectArray* arg0)
{
    ctor_5(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(LayerDrawable::_javaClass3(),LayerDrawable::_Init3());;
    CACHE_METHOD(LayerDrawable::LayerDrawable_6236_ID_c(),LayerDrawable::_javaClass3(),"<init>","([Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.graphics.drawable.LayerDrawable.<init> could not be cached",89);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(LayerDrawable::_javaClass3(), LayerDrawable::LayerDrawable_6236_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) [instance] :2995
::g::Android::android::graphics::drawable::Drawable* LayerDrawable::getDrawable(int arg0)
{
    int arg0_ = arg0;
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(LayerDrawable::getDrawable_IMPL_6241(_subclassed, _javaObject, arg0_), ::TYPES[2/*Android.android.graphics.drawable.Drawable*/]);
}

// public int getNumberOfLayers() [instance] :2989
int LayerDrawable::getNumberOfLayers()
{
    return LayerDrawable::getNumberOfLayers_IMPL_6240(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :2952
void LayerDrawable::_Init3()
{
    if (LayerDrawable::_javaClass3()) { return; }
    INIT_JNI;
    LayerDrawable::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/LayerDrawable"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!LayerDrawable::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.LayerDrawable'", 63);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_6241(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :3171
uObject* LayerDrawable::getDrawable_IMPL_6241(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(LayerDrawable::_javaClass3(),LayerDrawable::_Init3());
    
    uObject* result;
    CACHE_METHOD(LayerDrawable::getDrawable_6241_ID(),LayerDrawable::_javaClass3(),"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.graphics.drawable.LayerDrawable.getDrawable could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, LayerDrawable::_javaClass3(), LayerDrawable::getDrawable_6241_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, LayerDrawable::getDrawable_6241_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getNumberOfLayers_IMPL_6240(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3168
int LayerDrawable::getNumberOfLayers_IMPL_6240(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(LayerDrawable::_javaClass3(),LayerDrawable::_Init3());
    
    int result;
    CACHE_METHOD(LayerDrawable::getNumberOfLayers_6240_ID(),LayerDrawable::_javaClass3(),"getNumberOfLayers","()I",GetMethodID,"Id for fallback method android.graphics.drawable.LayerDrawable.getNumberOfLayers could not be cached",100);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, LayerDrawable::_javaClass3(), LayerDrawable::getNumberOfLayers_6240_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, LayerDrawable::getNumberOfLayers_6240_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public LayerDrawable New(Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable> arg0) [static] :2955
LayerDrawable* LayerDrawable::New6(::g::Android::Runtime::ObjectArray* arg0)
{
    LayerDrawable* obj2 = (LayerDrawable*)uNew(LayerDrawable_typeof());
    obj2->ctor_7(arg0);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\drawable\$.uno(3639)
// ----------------------------------------------------------------------------------------

// public sealed extern class ShapeDrawable :3639
// {
::g::Android::java::lang::Object_type* ShapeDrawable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ShapeDrawable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.graphics.drawable.ShapeDrawable", options);
    type->SetBase(::g::Android::android::graphics::drawable::Drawable_typeof());
    type->fp_ctor_ = (void*)ShapeDrawable__New5_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::android::graphics::Paint_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawable::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawable::getPaint_6368_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawable::setShaderFactory_6366_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawable::setShape_6365_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawable::ShapeDrawable_6362_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("_Init", NULL, (void*)ShapeDrawable___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getPaint", NULL, (void*)ShapeDrawable__getPaint_fn, 0, false, ::g::Android::android::graphics::Paint_typeof(), 0),
        new uFunction("getPaint_IMPL_6368", NULL, (void*)ShapeDrawable__getPaint_IMPL_6368_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)ShapeDrawable__New5_fn, 0, true, ShapeDrawable_typeof(), 0),
        new uFunction("setShaderFactory", NULL, (void*)ShapeDrawable__setShaderFactory_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_typeof()),
        new uFunction("setShaderFactory_IMPL_6366", NULL, (void*)ShapeDrawable__setShaderFactory_IMPL_6366_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setShape", NULL, (void*)ShapeDrawable__setShape_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::drawable::shapes::Shape_typeof()),
        new uFunction("setShape_IMPL_6365", NULL, (void*)ShapeDrawable__setShape_IMPL_6365_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public ShapeDrawable() :3646
void ShapeDrawable__ctor_6_fn(ShapeDrawable* __this)
{
    __this->ctor_6();
}

// public static extern new void _Init() :3643
void ShapeDrawable___Init3_fn()
{
    ShapeDrawable::_Init3();
}

// public Android.android.graphics.Paint getPaint() :3701
void ShapeDrawable__getPaint_fn(ShapeDrawable* __this, ::g::Android::android::graphics::Paint** __retval)
{
    *__retval = __this->getPaint();
}

// public static extern Android.Base.Wrappers.IJWrapper getPaint_IMPL_6368(bool arg0, Android.Base.Primitives.ujobject arg1) :3842
void ShapeDrawable__getPaint_IMPL_6368_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ShapeDrawable::getPaint_IMPL_6368(*arg0_, *arg1_);
}

// public ShapeDrawable New() :3646
void ShapeDrawable__New5_fn(ShapeDrawable** __retval)
{
    *__retval = ShapeDrawable::New5();
}

// public void setShaderFactory(Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory arg0) :3689
void ShapeDrawable__setShaderFactory_fn(ShapeDrawable* __this, ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory* arg0)
{
    __this->setShaderFactory(arg0);
}

// public static extern void setShaderFactory_IMPL_6366(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3836
void ShapeDrawable__setShaderFactory_IMPL_6366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ShapeDrawable::setShaderFactory_IMPL_6366(*arg0_, *arg1_, arg2_);
}

// public void setShape(Android.android.graphics.drawable.shapes.Shape arg0) :3683
void ShapeDrawable__setShape_fn(ShapeDrawable* __this, ::g::Android::android::graphics::drawable::shapes::Shape* arg0)
{
    __this->setShape(arg0);
}

// public static extern void setShape_IMPL_6365(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3833
void ShapeDrawable__setShape_IMPL_6365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ShapeDrawable::setShape_IMPL_6365(*arg0_, *arg1_, arg2_);
}

jclass ShapeDrawable::_javaClass3_;
jmethodID ShapeDrawable::getPaint_6368_ID_;
jmethodID ShapeDrawable::setShaderFactory_6366_ID_;
jmethodID ShapeDrawable::setShape_6365_ID_;
jmethodID ShapeDrawable::ShapeDrawable_6362_ID_c_;

// public ShapeDrawable() [instance] :3646
void ShapeDrawable::ctor_6()
{
    ctor_5(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ShapeDrawable::_javaClass3(),ShapeDrawable::_Init3());;
    CACHE_METHOD(ShapeDrawable::ShapeDrawable_6362_ID_c(),ShapeDrawable::_javaClass3(),"<init>","()V",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.<init> could not be cached",89);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ShapeDrawable::_javaClass3(), ShapeDrawable::ShapeDrawable_6362_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Android.android.graphics.Paint getPaint() [instance] :3701
::g::Android::android::graphics::Paint* ShapeDrawable::getPaint()
{
    return uCast< ::g::Android::android::graphics::Paint*>(ShapeDrawable::getPaint_IMPL_6368(_subclassed, _javaObject), ::TYPES[3/*Android.android.graphics.Paint*/]);
}

// public void setShaderFactory(Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory arg0) [instance] :3689
void ShapeDrawable::setShaderFactory(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory* arg0)
{
    ShapeDrawable::setShaderFactory_IMPL_6366(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setShape(Android.android.graphics.drawable.shapes.Shape arg0) [instance] :3683
void ShapeDrawable::setShape(::g::Android::android::graphics::drawable::shapes::Shape* arg0)
{
    ShapeDrawable::setShape_IMPL_6365(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :3643
void ShapeDrawable::_Init3()
{
    if (ShapeDrawable::_javaClass3()) { return; }
    INIT_JNI;
    ShapeDrawable::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/ShapeDrawable"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ShapeDrawable::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.ShapeDrawable'", 63);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getPaint_IMPL_6368(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3842
uObject* ShapeDrawable::getPaint_IMPL_6368(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ShapeDrawable::_javaClass3(),ShapeDrawable::_Init3());
    
    uObject* result;
    CACHE_METHOD(ShapeDrawable::getPaint_6368_ID(),ShapeDrawable::_javaClass3(),"getPaint","()Landroid/graphics/Paint;",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.getPaint could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ShapeDrawable::_javaClass3(), ShapeDrawable::getPaint_6368_ID()),result,::g::Android::android::graphics::Paint_typeof(),::g::Android::android::graphics::Paint*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ShapeDrawable::getPaint_6368_ID()),result,::g::Android::android::graphics::Paint_typeof(),::g::Android::android::graphics::Paint*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public ShapeDrawable New() [static] :3646
ShapeDrawable* ShapeDrawable::New5()
{
    ShapeDrawable* obj2 = (ShapeDrawable*)uNew(ShapeDrawable_typeof());
    obj2->ctor_6();
    return obj2;
}

// public static extern void setShaderFactory_IMPL_6366(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3836
void ShapeDrawable::setShaderFactory_IMPL_6366(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ShapeDrawable::_javaClass3(),ShapeDrawable::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ShapeDrawable::setShaderFactory_6366_ID(),ShapeDrawable::_javaClass3(),"setShaderFactory","(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.setShaderFactory could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ShapeDrawable::_javaClass3(), ShapeDrawable::setShaderFactory_6366_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ShapeDrawable::setShaderFactory_6366_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setShape_IMPL_6365(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3833
void ShapeDrawable::setShape_IMPL_6365(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ShapeDrawable::_javaClass3(),ShapeDrawable::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ShapeDrawable::setShape_6365_ID(),ShapeDrawable::_javaClass3(),"setShape","(Landroid/graphics/drawable/shapes/Shape;)V",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.setShape could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ShapeDrawable::_javaClass3(), ShapeDrawable::setShape_6365_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ShapeDrawable::setShape_6365_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\drawable\$.uno(760)
// ---------------------------------------------------------------------------------------

// public abstract extern class ShapeDrawableDLRShaderFactory :760
// {
ShapeDrawableDLRShaderFactory_type* ShapeDrawableDLRShaderFactory_typeof()
{
    static uSStrong<ShapeDrawableDLRShaderFactory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ShapeDrawableDLRShaderFactory);
    options.TypeSize = sizeof(ShapeDrawableDLRShaderFactory_type);
    type = (ShapeDrawableDLRShaderFactory_type*)uClassType::New("Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ShapeDrawableDLRShaderFactory_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ShapeDrawableDLRShaderFactory_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory::ShapeDrawableDLRShaderFactory_6360_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)ShapeDrawableDLRShaderFactory___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("resize", NULL, NULL, offsetof(ShapeDrawableDLRShaderFactory_type, fp_resize), false, ::g::Android::android::graphics::Shader_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// protected ShapeDrawableDLRShaderFactory() :767
void ShapeDrawableDLRShaderFactory__ctor_4_fn(ShapeDrawableDLRShaderFactory* __this)
{
    __this->ctor_4();
}

// protected ShapeDrawableDLRShaderFactory(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :765
void ShapeDrawableDLRShaderFactory__ctor_5_fn(ShapeDrawableDLRShaderFactory* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :764
void ShapeDrawableDLRShaderFactory___Init2_fn()
{
    ShapeDrawableDLRShaderFactory::_Init2();
}

jclass ShapeDrawableDLRShaderFactory::_javaClass2_;
jmethodID ShapeDrawableDLRShaderFactory::ShapeDrawableDLRShaderFactory_6360_ID_c_;

// protected ShapeDrawableDLRShaderFactory() [instance] :767
void ShapeDrawableDLRShaderFactory::ctor_4()
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ShapeDrawableDLRShaderFactory::_javaClass2(),ShapeDrawableDLRShaderFactory::_Init2());;
    CACHE_METHOD(ShapeDrawableDLRShaderFactory::ShapeDrawableDLRShaderFactory_6360_ID_c(),ShapeDrawableDLRShaderFactory::_javaClass2(),"<init>","()V",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable$ShaderFactory.<init> could not be cached",103);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ShapeDrawableDLRShaderFactory::_javaClass2(), ShapeDrawableDLRShaderFactory::ShapeDrawableDLRShaderFactory_6360_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// protected ShapeDrawableDLRShaderFactory(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :765
void ShapeDrawableDLRShaderFactory::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :764
void ShapeDrawableDLRShaderFactory::_Init2()
{
    if (ShapeDrawableDLRShaderFactory::_javaClass2()) { return; }
    INIT_JNI;
    ShapeDrawableDLRShaderFactory::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/ShapeDrawable$ShaderFactory"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ShapeDrawableDLRShaderFactory::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.ShapeDrawable$ShaderFactory'", 77);; }
}
// }

}}}}} // ::g::Android::android::graphics::drawable
