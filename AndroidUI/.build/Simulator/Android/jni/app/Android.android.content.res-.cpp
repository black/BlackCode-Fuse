#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.content.res.ColorStateList.h>
#include <app/Android.android.content.res.Configuration.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.content.res.TypedArray.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Fallbacks.Android_java_io_InputStream.h>
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace content {
namespace res {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AssetManager___javaClass_2;
jmethodID AssetManager__finalize_3516_ID;
jmethodID AssetManager__open_3508_ID;

AssetManager__uType* AssetManager__typeof()
{
    static ::uStaticStrong<AssetManager__uType*> type;
    if (type != NULL) return type;

    type = (AssetManager__uType*)::uAllocClassType(sizeof(AssetManager__uType), "Android.android.content.res.AssetManager", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))AssetManager__finalize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AssetManager__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AssetManager__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &AssetManager___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("finalize_3516_ID", &AssetManager__finalize_3516_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("open_3508_ID", &AssetManager__open_3508_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("_Init", AssetManager___Init_2, 0, true),
        ::uNewFunctionVoid("finalize_IMPL_3516", AssetManager__finalize_IMPL_3516, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("open", AssetManager__open, 0, false, ::app::Android::java::io::InputStream__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("open_IMPL_3508", AssetManager__open_IMPL_3508, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void AssetManager___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::AssetManager___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::AssetManager___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetManager"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::AssetManager___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetManager'", 56);; }
}

void AssetManager__finalize(AssetManager* __this)
{
    AssetManager__finalize_IMPL_3516(NULL, __this->_subclassed, __this->_javaObject);
}

void AssetManager__finalize_IMPL_3516(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::AssetManager___javaClass_2,::app::Android::android::content::res::AssetManager___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::content::res::AssetManager__finalize_3516_ID,::app::Android::android::content::res::AssetManager___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.content.res.AssetManager.finalize could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::content::res::AssetManager___javaClass_2, ::app::Android::android::content::res::AssetManager__finalize_3516_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::content::res::AssetManager__finalize_3516_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::io::InputStream* AssetManager__open(AssetManager* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::io::InputStream*>(AssetManager__open_IMPL_3508(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::io::InputStream__typeof());
}

::uObject* AssetManager__open_IMPL_3508(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::AssetManager___javaClass_2,::app::Android::android::content::res::AssetManager___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::AssetManager__open_3508_ID,::app::Android::android::content::res::AssetManager___javaClass_2,"open","(Ljava/lang/String;)Ljava/io/InputStream;",GetMethodID,"Id for fallback method android.content.res.AssetManager.open could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::AssetManager___javaClass_2, ::app::Android::android::content::res::AssetManager__open_3508_ID, _obArg2),result,::app::Android::Fallbacks::Android_java_io_InputStream__typeof(),::app::Android::java::io::InputStream*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::AssetManager__open_3508_ID, _obArg2),result,::app::Android::Fallbacks::Android_java_io_InputStream__typeof(),::app::Android::java::io::InputStream*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ColorStateList___javaClass_2;
jmethodID ColorStateList__describeContents_3527_ID;
jmethodID ColorStateList__getDefaultColor_3525_ID;
jmethodID ColorStateList__toString_3526_ID;
jmethodID ColorStateList__writeToParcel_3528_ID;

ColorStateList__uType* ColorStateList__typeof()
{
    static ::uStaticStrong<ColorStateList__uType*> type;
    if (type != NULL) return type;

    type = (ColorStateList__uType*)::uAllocClassType(sizeof(ColorStateList__uType), "Android.android.content.res.ColorStateList", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))ColorStateList__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))ColorStateList__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))ColorStateList__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ColorStateList__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ColorStateList__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(ColorStateList__uType, __interface_2));

    type->SetFields(5,
        ::uNewField("_javaClass", &ColorStateList___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_3527_ID", &ColorStateList__describeContents_3527_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getDefaultColor_3525_ID", &ColorStateList__getDefaultColor_3525_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_3526_ID", &ColorStateList__toString_3526_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_3528_ID", &ColorStateList__writeToParcel_3528_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", ColorStateList___Init_2, 0, true),
        ::uNewFunction("describeContents", ColorStateList__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_3527", ColorStateList__describeContents_IMPL_3527, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getDefaultColor", ColorStateList__getDefaultColor, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getDefaultColor_IMPL_3525", ColorStateList__getDefaultColor_IMPL_3525, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_3526", ColorStateList__toString_IMPL_3526, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", ColorStateList__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_3528", ColorStateList__writeToParcel_IMPL_3528, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ColorStateList___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::ColorStateList___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::ColorStateList___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/ColorStateList"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::ColorStateList___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.ColorStateList'", 58);; }
}

int ColorStateList__describeContents(ColorStateList* __this)
{
    return ColorStateList__describeContents_IMPL_3527(NULL, __this->_subclassed, __this->_javaObject);
}

int ColorStateList__describeContents_IMPL_3527(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::ColorStateList___javaClass_2,::app::Android::android::content::res::ColorStateList___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::res::ColorStateList__describeContents_3527_ID,::app::Android::android::content::res::ColorStateList___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.describeContents could not be cached",94);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::res::ColorStateList___javaClass_2, ::app::Android::android::content::res::ColorStateList__describeContents_3527_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::res::ColorStateList__describeContents_3527_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ColorStateList__getDefaultColor(ColorStateList* __this)
{
    return ColorStateList__getDefaultColor_IMPL_3525(NULL, __this->_subclassed, __this->_javaObject);
}

int ColorStateList__getDefaultColor_IMPL_3525(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::ColorStateList___javaClass_2,::app::Android::android::content::res::ColorStateList___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::res::ColorStateList__getDefaultColor_3525_ID,::app::Android::android::content::res::ColorStateList___javaClass_2,"getDefaultColor","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.getDefaultColor could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::res::ColorStateList___javaClass_2, ::app::Android::android::content::res::ColorStateList__getDefaultColor_3525_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::res::ColorStateList__getDefaultColor_3525_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* ColorStateList__toString(ColorStateList* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(ColorStateList__toString_IMPL_3526(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* ColorStateList__toString_IMPL_3526(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::ColorStateList___javaClass_2,::app::Android::android::content::res::ColorStateList___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::ColorStateList__toString_3526_ID,::app::Android::android::content::res::ColorStateList___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.ColorStateList.toString could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::ColorStateList___javaClass_2, ::app::Android::android::content::res::ColorStateList__toString_3526_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::ColorStateList__toString_3526_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ColorStateList__writeToParcel(ColorStateList* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    ColorStateList__writeToParcel_IMPL_3528(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ColorStateList__writeToParcel_IMPL_3528(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::ColorStateList___javaClass_2,::app::Android::android::content::res::ColorStateList___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::content::res::ColorStateList__writeToParcel_3528_ID,::app::Android::android::content::res::ColorStateList___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.res.ColorStateList.writeToParcel could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::content::res::ColorStateList___javaClass_2, ::app::Android::android::content::res::ColorStateList__writeToParcel_3528_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::content::res::ColorStateList__writeToParcel_3528_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Configuration___javaClass_2;
jmethodID Configuration__describeContents_3614_ID;
jmethodID Configuration__equals_3619_ID;
jmethodID Configuration__hashCode_3620_ID;
jmethodID Configuration__toString_3609_ID;
jmethodID Configuration__writeToParcel_3615_ID;

Configuration__uType* Configuration__typeof()
{
    static ::uStaticStrong<Configuration__uType*> type;
    if (type != NULL) return type;

    type = (Configuration__uType*)::uAllocClassType(sizeof(Configuration__uType), "Android.android.content.res.Configuration", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Configuration__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Configuration__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Configuration__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Configuration__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Configuration__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Configuration__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Configuration__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Configuration__uType, __interface_2));

    type->SetFields(6,
        ::uNewField("_javaClass", &Configuration___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_3614_ID", &Configuration__describeContents_3614_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_3619_ID", &Configuration__equals_3619_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_3620_ID", &Configuration__hashCode_3620_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_3609_ID", &Configuration__toString_3609_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_3615_ID", &Configuration__writeToParcel_3615_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", Configuration___Init_2, 0, true),
        ::uNewFunction("describeContents", Configuration__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_3614", Configuration__describeContents_IMPL_3614, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals_IMPL_3619", Configuration__equals_IMPL_3619, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_3620", Configuration__hashCode_IMPL_3620, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_3609", Configuration__toString_IMPL_3609, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Configuration__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_3615", Configuration__writeToParcel_IMPL_3615, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Configuration___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::Configuration___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::Configuration___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Configuration"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::Configuration___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Configuration'", 57);; }
}

int Configuration__describeContents(Configuration* __this)
{
    return Configuration__describeContents_IMPL_3614(NULL, __this->_subclassed, __this->_javaObject);
}

int Configuration__describeContents_IMPL_3614(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::res::Configuration__describeContents_3614_ID,::app::Android::android::content::res::Configuration___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.describeContents could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__describeContents_3614_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::res::Configuration__describeContents_3614_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Configuration__equals_1(Configuration* __this, ::app::Android::java::lang::Object* arg0)
{
    return Configuration__equals_IMPL_3619(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Configuration__equals_IMPL_3619(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::content::res::Configuration__equals_3619_ID,::app::Android::android::content::res::Configuration___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.content.res.Configuration.equals could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__equals_3619_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::content::res::Configuration__equals_3619_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Configuration__hashCode_1(Configuration* __this)
{
    return Configuration__hashCode_IMPL_3620(NULL, __this->_subclassed, __this->_javaObject);
}

int Configuration__hashCode_IMPL_3620(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::res::Configuration__hashCode_3620_ID,::app::Android::android::content::res::Configuration___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.hashCode could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__hashCode_3620_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::res::Configuration__hashCode_3620_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Configuration__toString(Configuration* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Configuration__toString_IMPL_3609(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Configuration__toString_IMPL_3609(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::Configuration__toString_3609_ID,::app::Android::android::content::res::Configuration___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.Configuration.toString could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__toString_3609_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::Configuration__toString_3609_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Configuration__writeToParcel(Configuration* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Configuration__writeToParcel_IMPL_3615(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Configuration__writeToParcel_IMPL_3615(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::content::res::Configuration__writeToParcel_3615_ID,::app::Android::android::content::res::Configuration___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.content.res.Configuration.writeToParcel could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__writeToParcel_3615_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::content::res::Configuration__writeToParcel_3615_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Resources___javaClass_2;
jmethodID Resources__getDrawable_3664_ID;

Resources__uType* Resources__typeof()
{
    static ::uStaticStrong<Resources__uType*> type;
    if (type != NULL) return type;

    type = (Resources__uType*)::uAllocClassType(sizeof(Resources__uType), "Android.android.content.res.Resources", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Resources__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Resources__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Resources___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("getDrawable_3664_ID", &Resources__getDrawable_3664_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", Resources___Init_2, 0, true),
        ::uNewFunction("getDrawable", Resources__getDrawable, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getDrawable_IMPL_3664", Resources__getDrawable_IMPL_3664, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Resources___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::Resources___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::Resources___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Resources"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::Resources___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Resources'", 53);; }
}

::app::Android::android::graphics::drawable::Drawable* Resources__getDrawable(Resources* __this, int arg0)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(Resources__getDrawable_IMPL_3664(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* Resources__getDrawable_IMPL_3664(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Resources___javaClass_2,::app::Android::android::content::res::Resources___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::Resources__getDrawable_3664_ID,::app::Android::android::content::res::Resources___javaClass_2,"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.content.res.Resources.getDrawable could not be cached",84);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::Resources___javaClass_2, ::app::Android::android::content::res::Resources__getDrawable_3664_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::Resources__getDrawable_3664_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TypedArray___javaClass_2;
jmethodID TypedArray__toString_3723_ID;

TypedArray__uType* TypedArray__typeof()
{
    static ::uStaticStrong<TypedArray__uType*> type;
    if (type != NULL) return type;

    type = (TypedArray__uType*)::uAllocClassType(sizeof(TypedArray__uType), "Android.android.content.res.TypedArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))TypedArray__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TypedArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TypedArray__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &TypedArray___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("toString_3723_ID", &TypedArray__toString_3723_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", TypedArray___Init_2, 0, true),
        ::uNewFunction("toString_IMPL_3723", TypedArray__toString_IMPL_3723, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void TypedArray___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::TypedArray___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::TypedArray___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/TypedArray"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::TypedArray___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.TypedArray'", 54);; }
}

::app::Android::java::lang::String* TypedArray__toString(TypedArray* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(TypedArray__toString_IMPL_3723(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* TypedArray__toString_IMPL_3723(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::TypedArray___javaClass_2,::app::Android::android::content::res::TypedArray___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::TypedArray__toString_3723_ID,::app::Android::android::content::res::TypedArray___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.TypedArray.toString could not be cached",82);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::TypedArray___javaClass_2, ::app::Android::android::content::res::TypedArray__toString_3723_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::TypedArray__toString_3723_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}}
