#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.BitmapDLRConfig.h>
#include <app/Android.android.graphics.BitmapFactory.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.Color.h>
#include <app/Android.android.graphics.LinearGradient.h>
#include <app/Android.android.graphics.Matrix.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.PaintDLRStyle.h>
#include <app/Android.android.graphics.Point.h>
#include <app/Android.android.graphics.PorterDuffDLRMode.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.RectF.h>
#include <app/Android.android.graphics.Region.h>
#include <app/Android.android.graphics.Shader.h>
#include <app/Android.android.graphics.ShaderDLRTileMode.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.FloatArray.h>
#include <app/Android.Runtime.IntArray.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Bitmap___javaClass_2;
jmethodID Bitmap__createBitmap_6455_ID;
jmethodID Bitmap__describeContents_6487_ID;
jmethodID Bitmap__eraseColor_6482_ID;
jmethodID Bitmap__recycle_6445_ID;
jmethodID Bitmap__setHasMipMap_6481_ID;
jmethodID Bitmap__writeToParcel_6488_ID;

Bitmap__uType* Bitmap__typeof()
{
    static ::uStaticStrong<Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Bitmap__uType*)::uAllocClassType(sizeof(Bitmap__uType), "Android.android.graphics.Bitmap", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_describeContents = (int(*)(void*))Bitmap__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Bitmap__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Bitmap__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Bitmap__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Bitmap__uType, __interface_2));

    type->SetFields(7,
        ::uNewField("_javaClass", &Bitmap___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("createBitmap_6455_ID", &Bitmap__createBitmap_6455_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("describeContents_6487_ID", &Bitmap__describeContents_6487_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("eraseColor_6482_ID", &Bitmap__eraseColor_6482_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("recycle_6445_ID", &Bitmap__recycle_6445_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHasMipMap_6481_ID", &Bitmap__setHasMipMap_6481_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_6488_ID", &Bitmap__writeToParcel_6488_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("_Init", Bitmap___Init_2, 0, true),
        ::uNewFunction("createBitmap", Bitmap__createBitmap_6, 0, true, Bitmap__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::graphics::BitmapDLRConfig__typeof()),
        ::uNewFunction("createBitmap_IMPL_6455", Bitmap__createBitmap_IMPL_6455, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("describeContents", Bitmap__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_6487", Bitmap__describeContents_IMPL_6487, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("eraseColor", Bitmap__eraseColor, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("eraseColor_IMPL_6482", Bitmap__eraseColor_IMPL_6482, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("recycle", Bitmap__recycle, 0, false),
        ::uNewFunctionVoid("recycle_IMPL_6445", Bitmap__recycle_IMPL_6445, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("setHasMipMap", Bitmap__setHasMipMap, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setHasMipMap_IMPL_6481", Bitmap__setHasMipMap_IMPL_6481, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("writeToParcel", Bitmap__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_6488", Bitmap__writeToParcel_IMPL_6488, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Bitmap___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Bitmap___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Bitmap___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Bitmap"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Bitmap___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Bitmap'", 47);; }
}

Bitmap* Bitmap__createBitmap_6(::uStatic* __this, int arg0, int arg1, ::app::Android::android::graphics::BitmapDLRConfig* arg2)
{
    return ::uCast< Bitmap*>(Bitmap__createBitmap_IMPL_6455(NULL, arg0, arg1, (::uObject*)arg2), Bitmap__typeof());
}

::uObject* Bitmap__createBitmap_IMPL_6455(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__createBitmap_6455_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"createBitmap","(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.Bitmap.createBitmap could not be cached",79);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__createBitmap_6455_ID, ((jint)arg0_), ((jint)arg1_), _obArg2),result,::app::Android::android::graphics::Bitmap__typeof(),Bitmap*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Bitmap__describeContents(Bitmap* __this)
{
    return Bitmap__describeContents_IMPL_6487(NULL, __this->_subclassed, __this->_javaObject);
}

int Bitmap__describeContents_IMPL_6487(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__describeContents_6487_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.graphics.Bitmap.describeContents could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__describeContents_6487_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Bitmap__describeContents_6487_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Bitmap__eraseColor(Bitmap* __this, int arg0)
{
    Bitmap__eraseColor_IMPL_6482(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Bitmap__eraseColor_IMPL_6482(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__eraseColor_6482_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"eraseColor","(I)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.eraseColor could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__eraseColor_6482_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__eraseColor_6482_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Bitmap__recycle(Bitmap* __this)
{
    Bitmap__recycle_IMPL_6445(NULL, __this->_subclassed, __this->_javaObject);
}

void Bitmap__recycle_IMPL_6445(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__recycle_6445_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"recycle","()V",GetMethodID,"Id for fallback method android.graphics.Bitmap.recycle could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__recycle_6445_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__recycle_6445_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Bitmap__setHasMipMap(Bitmap* __this, bool arg0)
{
    Bitmap__setHasMipMap_IMPL_6481(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Bitmap__setHasMipMap_IMPL_6481(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__setHasMipMap_6481_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"setHasMipMap","(Z)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.setHasMipMap could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__setHasMipMap_6481_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__setHasMipMap_6481_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Bitmap__writeToParcel(Bitmap* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Bitmap__writeToParcel_IMPL_6488(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Bitmap__writeToParcel_IMPL_6488(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__writeToParcel_6488_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.writeToParcel could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__writeToParcel_6488_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__writeToParcel_6488_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass BitmapDLRConfig___javaClass_3;
jfieldID BitmapDLRConfig__ARGB_8888_6432_ID;

BitmapDLRConfig__uType* BitmapDLRConfig__typeof()
{
    static ::uStaticStrong<BitmapDLRConfig__uType*> type;
    if (type != NULL) return type;

    type = (BitmapDLRConfig__uType*)::uAllocClassType(sizeof(BitmapDLRConfig__uType), "Android.android.graphics.BitmapDLRConfig", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BitmapDLRConfig__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BitmapDLRConfig__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &BitmapDLRConfig___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("ARGB_8888_6432_ID", &BitmapDLRConfig__ARGB_8888_6432_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", BitmapDLRConfig___Init_3, 0, true),
        ::uNewFunction("get_ARGB_8888", BitmapDLRConfig__get_ARGB_8888, 0, true, BitmapDLRConfig__typeof()));

    ::uRegisterType(type);
    return type;
}

void BitmapDLRConfig___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::BitmapDLRConfig___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::BitmapDLRConfig___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Bitmap$Config"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::BitmapDLRConfig___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Bitmap$Config'", 54);; }
}

BitmapDLRConfig* BitmapDLRConfig__get_ARGB_8888(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::BitmapDLRConfig___javaClass_3,::app::Android::android::graphics::BitmapDLRConfig___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::BitmapDLRConfig__ARGB_8888_6432_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::BitmapDLRConfig__ARGB_8888_6432_ID,::app::Android::android::graphics::BitmapDLRConfig___javaClass_3,"ARGB_8888","Landroid/graphics/Bitmap$Config;",GetStaticFieldID,"Id for field BitmapDLRConfig.ARGB_8888 could not be cached",58);
    ::uExitCritical();;
    };
    BitmapDLRConfig* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::BitmapDLRConfig___javaClass_3, ::app::Android::android::graphics::BitmapDLRConfig__ARGB_8888_6432_ID),result,::app::Android::android::graphics::BitmapDLRConfig__typeof(),BitmapDLRConfig*,false,true);;
    return ::uCast< BitmapDLRConfig*>(result, BitmapDLRConfig__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass BitmapFactory___javaClass_2;
jmethodID BitmapFactory__decodeFile_6516_ID;
jmethodID BitmapFactory__decodeStream_6523_ID;

BitmapFactory__uType* BitmapFactory__typeof()
{
    static ::uStaticStrong<BitmapFactory__uType*> type;
    if (type != NULL) return type;

    type = (BitmapFactory__uType*)::uAllocClassType(sizeof(BitmapFactory__uType), "Android.android.graphics.BitmapFactory", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BitmapFactory__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BitmapFactory__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &BitmapFactory___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("decodeFile_6516_ID", &BitmapFactory__decodeFile_6516_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("decodeStream_6523_ID", &BitmapFactory__decodeStream_6523_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", BitmapFactory___Init_2, 0, true),
        ::uNewFunction("decodeFile", BitmapFactory__decodeFile, 0, true, ::app::Android::android::graphics::Bitmap__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("decodeFile_IMPL_6516", BitmapFactory__decodeFile_IMPL_6516, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("decodeStream", BitmapFactory__decodeStream, 0, true, ::app::Android::android::graphics::Bitmap__typeof(), ::app::Android::java::io::InputStream__typeof()),
        ::uNewFunction("decodeStream_IMPL_6523", BitmapFactory__decodeStream_IMPL_6523, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void BitmapFactory___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::BitmapFactory___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::BitmapFactory___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/BitmapFactory"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::BitmapFactory___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.BitmapFactory'", 54);; }
}

::app::Android::android::graphics::Bitmap* BitmapFactory__decodeFile(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Bitmap*>(BitmapFactory__decodeFile_IMPL_6516(NULL, (::uObject*)arg0), ::app::Android::android::graphics::Bitmap__typeof());
}

::uObject* BitmapFactory__decodeFile_IMPL_6516(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::BitmapFactory___javaClass_2,::app::Android::android::graphics::BitmapFactory___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::BitmapFactory__decodeFile_6516_ID,::app::Android::android::graphics::BitmapFactory___javaClass_2,"decodeFile","(Ljava/lang/String;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.BitmapFactory.decodeFile could not be cached",84);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::BitmapFactory___javaClass_2, ::app::Android::android::graphics::BitmapFactory__decodeFile_6516_ID, _obArg0),result,::app::Android::android::graphics::Bitmap__typeof(),::app::Android::android::graphics::Bitmap*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::Bitmap* BitmapFactory__decodeStream(::uStatic* __this, ::app::Android::java::io::InputStream* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Bitmap*>(BitmapFactory__decodeStream_IMPL_6523(NULL, (::uObject*)arg0), ::app::Android::android::graphics::Bitmap__typeof());
}

::uObject* BitmapFactory__decodeStream_IMPL_6523(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::BitmapFactory___javaClass_2,::app::Android::android::graphics::BitmapFactory___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::BitmapFactory__decodeStream_6523_ID,::app::Android::android::graphics::BitmapFactory___javaClass_2,"decodeStream","(Ljava/io/InputStream;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.BitmapFactory.decodeStream could not be cached",86);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::BitmapFactory___javaClass_2, ::app::Android::android::graphics::BitmapFactory__decodeStream_6523_ID, _obArg0),result,::app::Android::android::graphics::Bitmap__typeof(),::app::Android::android::graphics::Bitmap*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Canvas___javaClass_2;
jmethodID Canvas__Canvas_6577_ID_c;
jmethodID Canvas__translate_6596_ID;

Canvas__uType* Canvas__typeof()
{
    static ::uStaticStrong<Canvas__uType*> type;
    if (type != NULL) return type;

    type = (Canvas__uType*)::uAllocClassType(sizeof(Canvas__uType), "Android.android.graphics.Canvas", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Canvas__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Canvas__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &Canvas___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("Canvas_6577_ID_c", &Canvas__Canvas_6577_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("translate_6596_ID", &Canvas__translate_6596_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("_Init", Canvas___Init_2, 0, true),
        ::uNewFunction(".ctor", Canvas__New_6, 0, true, Canvas__typeof(), ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunctionVoid("translate", Canvas__translate, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("translate_IMPL_6596", Canvas__translate_IMPL_6596, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Canvas___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Canvas___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Canvas___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Canvas"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Canvas___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Canvas'", 47);; }
}

void Canvas___ObjInit_5(Canvas* __this, ::app::Android::android::graphics::Bitmap* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::Canvas___javaClass_2,::app::Android::android::graphics::Canvas___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::Canvas__Canvas_6577_ID_c,::app::Android::android::graphics::Canvas___javaClass_2,"<init>","(Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.graphics.Canvas.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::Canvas___javaClass_2, ::app::Android::android::graphics::Canvas__Canvas_6577_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

Canvas* Canvas__New_6(::uStatic* __this, ::app::Android::android::graphics::Bitmap* arg0)
{
    Canvas* inst = (Canvas*)::uAllocObject(sizeof(Canvas), Canvas__typeof());
    inst->_ObjInit_5(arg0);
    return inst;
}

void Canvas__translate(Canvas* __this, float arg0, float arg1)
{
    Canvas__translate_IMPL_6596(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Canvas__translate_IMPL_6596(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Canvas___javaClass_2,::app::Android::android::graphics::Canvas___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Canvas__translate_6596_ID,::app::Android::android::graphics::Canvas___javaClass_2,"translate","(FF)V",GetMethodID,"Id for fallback method android.graphics.Canvas.translate could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Canvas___javaClass_2, ::app::Android::android::graphics::Canvas__translate_6596_ID, ((jfloat)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Canvas__translate_6596_ID, ((jfloat)arg2_), ((jfloat)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Color___javaClass_2;
jmethodID Color__argb_6680_ID;

Color__uType* Color__typeof()
{
    static ::uStaticStrong<Color__uType*> type;
    if (type != NULL) return type;

    type = (Color__uType*)::uAllocClassType(sizeof(Color__uType), "Android.android.graphics.Color", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Color__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Color__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Color___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("argb_6680_ID", &Color__argb_6680_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", Color___Init_2, 0, true),
        ::uNewFunction("argb", Color__argb, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("argb_IMPL_6680", Color__argb_IMPL_6680, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Color___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Color___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Color___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Color"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Color___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Color'", 46);; }
}

int Color__argb(::uStatic* __this, int arg0, int arg1, int arg2, int arg3)
{
    return Color__argb_IMPL_6680(NULL, arg0, arg1, arg2, arg3);
}

int Color__argb_IMPL_6680(::uStatic* __this, int arg0_, int arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Color___javaClass_2,::app::Android::android::graphics::Color___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Color__argb_6680_ID,::app::Android::android::graphics::Color___javaClass_2,"argb","(IIII)I",GetStaticMethodID,"Id for fallback method android.graphics.Color.argb could not be cached",70);
    result = ((int)U_JNIVAR->CallStaticIntMethod(::app::Android::android::graphics::Color___javaClass_2, ::app::Android::android::graphics::Color__argb_6680_ID, ((jint)arg0_), ((jint)arg1_), ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass LinearGradient___javaClass_3;
jmethodID LinearGradient__LinearGradient_6745_ID_c;

LinearGradient__uType* LinearGradient__typeof()
{
    static ::uStaticStrong<LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (LinearGradient__uType*)::uAllocClassType(sizeof(LinearGradient__uType), "Android.android.graphics.LinearGradient", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::Shader__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(LinearGradient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LinearGradient__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &LinearGradient___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("LinearGradient_6745_ID_c", &LinearGradient__LinearGradient_6745_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", LinearGradient___Init_3, 0, true),
        ::uNewFunction(".ctor", LinearGradient__New_8, 0, true, LinearGradient__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Android::Runtime::IntArray__typeof(), ::app::Android::Runtime::FloatArray__typeof(), ::app::Android::android::graphics::ShaderDLRTileMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void LinearGradient___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::LinearGradient___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::LinearGradient___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/LinearGradient"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::LinearGradient___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.LinearGradient'", 55);; }
}

void LinearGradient___ObjInit_7(LinearGradient* __this, float arg0, float arg1, float arg2, float arg3, ::app::Android::Runtime::IntArray* arg4, ::app::Android::Runtime::FloatArray* arg5, ::app::Android::android::graphics::ShaderDLRTileMode* arg6)
{
    ::app::Android::android::graphics::Shader___ObjInit_5(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::LinearGradient___javaClass_3,::app::Android::android::graphics::LinearGradient___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::LinearGradient__LinearGradient_6745_ID_c,::app::Android::android::graphics::LinearGradient___javaClass_3,"<init>","(FFFF[I[FLandroid/graphics/Shader$TileMode;)V",GetMethodID,"Id for fallback method android.graphics.LinearGradient.<init> could not be cached",81);;
    jobject _obArg4 = ((!arg4) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4));;
    jobject _obArg5 = ((!arg5) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5));;
    jobject _obArg6 = ((!arg6) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::LinearGradient___javaClass_3, ::app::Android::android::graphics::LinearGradient__LinearGradient_6745_ID_c, ((jfloat)arg0), ((jfloat)arg1), ((jfloat)arg2), ((jfloat)arg3), _obArg4, _obArg5, _obArg6);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

LinearGradient* LinearGradient__New_8(::uStatic* __this, float arg0, float arg1, float arg2, float arg3, ::app::Android::Runtime::IntArray* arg4, ::app::Android::Runtime::FloatArray* arg5, ::app::Android::android::graphics::ShaderDLRTileMode* arg6)
{
    LinearGradient* inst = (LinearGradient*)::uAllocObject(sizeof(LinearGradient), LinearGradient__typeof());
    inst->_ObjInit_7(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Matrix___javaClass_2;
jmethodID Matrix__equals_6769_ID;
jmethodID Matrix__finalize_6814_ID;
jmethodID Matrix__hashCode_6770_ID;
jmethodID Matrix__Matrix_6764_ID_c;
jmethodID Matrix__setValues_6811_ID;
jmethodID Matrix__toString_6812_ID;

Matrix__uType* Matrix__typeof()
{
    static ::uStaticStrong<Matrix__uType*> type;
    if (type != NULL) return type;

    type = (Matrix__uType*)::uAllocClassType(sizeof(Matrix__uType), "Android.android.graphics.Matrix", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Matrix__equals_1;
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Matrix__finalize;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Matrix__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Matrix__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Matrix__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Matrix__uType, __interface_1));

    type->SetFields(7,
        ::uNewField("_javaClass", &Matrix___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("equals_6769_ID", &Matrix__equals_6769_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("finalize_6814_ID", &Matrix__finalize_6814_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_6770_ID", &Matrix__hashCode_6770_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("Matrix_6764_ID_c", &Matrix__Matrix_6764_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setValues_6811_ID", &Matrix__setValues_6811_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_6812_ID", &Matrix__toString_6812_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", Matrix___Init_2, 0, true),
        ::uNewFunction("equals_IMPL_6769", Matrix__equals_IMPL_6769, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("finalize_IMPL_6814", Matrix__finalize_IMPL_6814, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hashCode_IMPL_6770", Matrix__hashCode_IMPL_6770, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", Matrix__New_5, 0, true, Matrix__typeof()),
        ::uNewFunctionVoid("setValues", Matrix__setValues, 0, false, ::app::Android::Runtime::FloatArray__typeof()),
        ::uNewFunctionVoid("setValues_IMPL_6811", Matrix__setValues_IMPL_6811, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("toString_IMPL_6812", Matrix__toString_IMPL_6812, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Matrix___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Matrix___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Matrix___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Matrix"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Matrix___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Matrix'", 47);; }
}

void Matrix___ObjInit_4(Matrix* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__Matrix_6764_ID_c,::app::Android::android::graphics::Matrix___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.graphics.Matrix.<init> could not be cached",73);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__Matrix_6764_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

bool Matrix__equals_1(Matrix* __this, ::app::Android::java::lang::Object* arg0)
{
    return Matrix__equals_IMPL_6769(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Matrix__equals_IMPL_6769(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__equals_6769_ID,::app::Android::android::graphics::Matrix___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.graphics.Matrix.equals could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__equals_6769_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::graphics::Matrix__equals_6769_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Matrix__finalize(Matrix* __this)
{
    Matrix__finalize_IMPL_6814(NULL, __this->_subclassed, __this->_javaObject);
}

void Matrix__finalize_IMPL_6814(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Matrix__finalize_6814_ID,::app::Android::android::graphics::Matrix___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.graphics.Matrix.finalize could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__finalize_6814_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Matrix__finalize_6814_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int Matrix__hashCode_1(Matrix* __this)
{
    return Matrix__hashCode_IMPL_6770(NULL, __this->_subclassed, __this->_javaObject);
}

int Matrix__hashCode_IMPL_6770(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__hashCode_6770_ID,::app::Android::android::graphics::Matrix___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Matrix.hashCode could not be cached",75);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__hashCode_6770_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Matrix__hashCode_6770_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

Matrix* Matrix__New_5(::uStatic* __this)
{
    Matrix* inst = (Matrix*)::uAllocObject(sizeof(Matrix), Matrix__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Matrix__setValues(Matrix* __this, ::app::Android::Runtime::FloatArray* arg0)
{
    Matrix__setValues_IMPL_6811(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Matrix__setValues_IMPL_6811(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Matrix__setValues_6811_ID,::app::Android::android::graphics::Matrix___javaClass_2,"setValues","([F)V",GetMethodID,"Id for fallback method android.graphics.Matrix.setValues could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__setValues_6811_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Matrix__setValues_6811_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Matrix__toString(Matrix* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Matrix__toString_IMPL_6812(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Matrix__toString_IMPL_6812(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__toString_6812_ID,::app::Android::android::graphics::Matrix___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Matrix.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__toString_6812_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Matrix__toString_6812_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Paint___javaClass_2;
jmethodID Paint__finalize_6977_ID;
jmethodID Paint__setAntiAlias_6898_ID;
jmethodID Paint__setARGB_6919_ID;
jmethodID Paint__setColor_6916_ID;
jmethodID Paint__setStrokeWidth_6921_ID;
jmethodID Paint__setStyle_6914_ID;
jmethodID Paint__setTextSize_6950_ID;
jmethodID Paint__setTypeface_6940_ID;

Paint__uType* Paint__typeof()
{
    static ::uStaticStrong<Paint__uType*> type;
    if (type != NULL) return type;

    type = (Paint__uType*)::uAllocClassType(sizeof(Paint__uType), "Android.android.graphics.Paint", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Paint__finalize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Paint__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Paint__uType, __interface_1));

    type->SetFields(9,
        ::uNewField("_javaClass", &Paint___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("finalize_6977_ID", &Paint__finalize_6977_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setAntiAlias_6898_ID", &Paint__setAntiAlias_6898_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setARGB_6919_ID", &Paint__setARGB_6919_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setColor_6916_ID", &Paint__setColor_6916_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setStrokeWidth_6921_ID", &Paint__setStrokeWidth_6921_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setStyle_6914_ID", &Paint__setStyle_6914_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTextSize_6950_ID", &Paint__setTextSize_6950_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTypeface_6940_ID", &Paint__setTypeface_6940_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(16,
        ::uNewFunctionVoid("_Init", Paint___Init_2, 0, true),
        ::uNewFunctionVoid("finalize_IMPL_6977", Paint__finalize_IMPL_6977, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("setAntiAlias", Paint__setAntiAlias, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setAntiAlias_IMPL_6898", Paint__setAntiAlias_IMPL_6898, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setARGB", Paint__setARGB, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setARGB_IMPL_6919", Paint__setARGB_IMPL_6919, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setColor", Paint__setColor, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setColor_IMPL_6916", Paint__setColor_IMPL_6916, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setStrokeWidth", Paint__setStrokeWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("setStrokeWidth_IMPL_6921", Paint__setStrokeWidth_IMPL_6921, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("setStyle", Paint__setStyle, 0, false, ::app::Android::android::graphics::PaintDLRStyle__typeof()),
        ::uNewFunctionVoid("setStyle_IMPL_6914", Paint__setStyle_IMPL_6914, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setTextSize", Paint__setTextSize, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("setTextSize_IMPL_6950", Paint__setTextSize_IMPL_6950, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("setTypeface", Paint__setTypeface, 0, false, ::app::Android::android::graphics::Typeface__typeof(), ::app::Android::android::graphics::Typeface__typeof()),
        ::uNewFunction("setTypeface_IMPL_6940", Paint__setTypeface_IMPL_6940, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Paint___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Paint___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Paint___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Paint"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Paint___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Paint'", 46);; }
}

void Paint___ObjInit_7(Paint* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

void Paint__finalize(Paint* __this)
{
    Paint__finalize_IMPL_6977(NULL, __this->_subclassed, __this->_javaObject);
}

void Paint__finalize_IMPL_6977(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__finalize_6977_ID,::app::Android::android::graphics::Paint___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.graphics.Paint.finalize could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__finalize_6977_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__finalize_6977_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Paint__setAntiAlias(Paint* __this, bool arg0)
{
    Paint__setAntiAlias_IMPL_6898(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setAntiAlias_IMPL_6898(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setAntiAlias_6898_ID,::app::Android::android::graphics::Paint___javaClass_2,"setAntiAlias","(Z)V",GetMethodID,"Id for fallback method android.graphics.Paint.setAntiAlias could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setAntiAlias_6898_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setAntiAlias_6898_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Paint__setARGB(Paint* __this, int arg0, int arg1, int arg2, int arg3)
{
    Paint__setARGB_IMPL_6919(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void Paint__setARGB_IMPL_6919(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setARGB_6919_ID,::app::Android::android::graphics::Paint___javaClass_2,"setARGB","(IIII)V",GetMethodID,"Id for fallback method android.graphics.Paint.setARGB could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setARGB_6919_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setARGB_6919_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Paint__setColor(Paint* __this, int arg0)
{
    Paint__setColor_IMPL_6916(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setColor_IMPL_6916(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setColor_6916_ID,::app::Android::android::graphics::Paint___javaClass_2,"setColor","(I)V",GetMethodID,"Id for fallback method android.graphics.Paint.setColor could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setColor_6916_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setColor_6916_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Paint__setStrokeWidth(Paint* __this, float arg0)
{
    Paint__setStrokeWidth_IMPL_6921(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setStrokeWidth_IMPL_6921(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setStrokeWidth_6921_ID,::app::Android::android::graphics::Paint___javaClass_2,"setStrokeWidth","(F)V",GetMethodID,"Id for fallback method android.graphics.Paint.setStrokeWidth could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setStrokeWidth_6921_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setStrokeWidth_6921_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Paint__setStyle(Paint* __this, ::app::Android::android::graphics::PaintDLRStyle* arg0)
{
    Paint__setStyle_IMPL_6914(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Paint__setStyle_IMPL_6914(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Paint__setStyle_6914_ID,::app::Android::android::graphics::Paint___javaClass_2,"setStyle","(Landroid/graphics/Paint$Style;)V",GetMethodID,"Id for fallback method android.graphics.Paint.setStyle could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setStyle_6914_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setStyle_6914_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Paint__setTextSize(Paint* __this, float arg0)
{
    Paint__setTextSize_IMPL_6950(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setTextSize_IMPL_6950(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setTextSize_6950_ID,::app::Android::android::graphics::Paint___javaClass_2,"setTextSize","(F)V",GetMethodID,"Id for fallback method android.graphics.Paint.setTextSize could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setTextSize_6950_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setTextSize_6950_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::android::graphics::Typeface* Paint__setTypeface(Paint* __this, ::app::Android::android::graphics::Typeface* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Typeface*>(Paint__setTypeface_IMPL_6940(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::graphics::Typeface__typeof());
}

::uObject* Paint__setTypeface_IMPL_6940(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Paint__setTypeface_6940_ID,::app::Android::android::graphics::Paint___javaClass_2,"setTypeface","(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;",GetMethodID,"Id for fallback method android.graphics.Paint.setTypeface could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setTypeface_6940_ID, _obArg2),result,::app::Android::android::graphics::Typeface__typeof(),::app::Android::android::graphics::Typeface*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Paint__setTypeface_6940_ID, _obArg2),result,::app::Android::android::graphics::Typeface__typeof(),::app::Android::android::graphics::Typeface*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass PaintDLRStyle___javaClass_3;
jfieldID PaintDLRStyle__STROKE_6873_ID;

PaintDLRStyle__uType* PaintDLRStyle__typeof()
{
    static ::uStaticStrong<PaintDLRStyle__uType*> type;
    if (type != NULL) return type;

    type = (PaintDLRStyle__uType*)::uAllocClassType(sizeof(PaintDLRStyle__uType), "Android.android.graphics.PaintDLRStyle", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(PaintDLRStyle__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(PaintDLRStyle__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &PaintDLRStyle___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("STROKE_6873_ID", &PaintDLRStyle__STROKE_6873_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", PaintDLRStyle___Init_3, 0, true),
        ::uNewFunction("get_STROKE", PaintDLRStyle__get_STROKE, 0, true, PaintDLRStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void PaintDLRStyle___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::PaintDLRStyle___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::PaintDLRStyle___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Paint$Style"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::PaintDLRStyle___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Paint$Style'", 52);; }
}

PaintDLRStyle* PaintDLRStyle__get_STROKE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::PaintDLRStyle___javaClass_3,::app::Android::android::graphics::PaintDLRStyle___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::PaintDLRStyle__STROKE_6873_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::PaintDLRStyle__STROKE_6873_ID,::app::Android::android::graphics::PaintDLRStyle___javaClass_3,"STROKE","Landroid/graphics/Paint$Style;",GetStaticFieldID,"Id for field PaintDLRStyle.STROKE could not be cached",53);
    ::uExitCritical();;
    };
    PaintDLRStyle* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::PaintDLRStyle___javaClass_3, ::app::Android::android::graphics::PaintDLRStyle__STROKE_6873_ID),result,::app::Android::android::graphics::PaintDLRStyle__typeof(),PaintDLRStyle*,false,true);;
    return ::uCast< PaintDLRStyle*>(result, PaintDLRStyle__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Point___javaClass_2;
jmethodID Point__describeContents_7105_ID;
jmethodID Point__equals_7102_ID;
jmethodID Point__hashCode_7103_ID;
jmethodID Point__toString_7104_ID;
jmethodID Point__writeToParcel_7106_ID;

Point__uType* Point__typeof()
{
    static ::uStaticStrong<Point__uType*> type;
    if (type != NULL) return type;

    type = (Point__uType*)::uAllocClassType(sizeof(Point__uType), "Android.android.graphics.Point", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Point__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Point__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Point__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Point__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Point__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Point__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Point__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Point__uType, __interface_2));

    type->SetFields(6,
        ::uNewField("_javaClass", &Point___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_7105_ID", &Point__describeContents_7105_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_7102_ID", &Point__equals_7102_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_7103_ID", &Point__hashCode_7103_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_7104_ID", &Point__toString_7104_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_7106_ID", &Point__writeToParcel_7106_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", Point___Init_2, 0, true),
        ::uNewFunction("describeContents", Point__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_7105", Point__describeContents_IMPL_7105, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals_IMPL_7102", Point__equals_IMPL_7102, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_7103", Point__hashCode_IMPL_7103, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_7104", Point__toString_IMPL_7104, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Point__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_7106", Point__writeToParcel_IMPL_7106, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Point___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Point___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Point___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Point"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Point___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Point'", 46);; }
}

int Point__describeContents(Point* __this)
{
    return Point__describeContents_IMPL_7105(NULL, __this->_subclassed, __this->_javaObject);
}

int Point__describeContents_IMPL_7105(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Point___javaClass_2,::app::Android::android::graphics::Point___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Point__describeContents_7105_ID,::app::Android::android::graphics::Point___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.graphics.Point.describeContents could not be cached",82);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Point___javaClass_2, ::app::Android::android::graphics::Point__describeContents_7105_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Point__describeContents_7105_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Point__equals_1(Point* __this, ::app::Android::java::lang::Object* arg0)
{
    return Point__equals_IMPL_7102(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Point__equals_IMPL_7102(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Point___javaClass_2,::app::Android::android::graphics::Point___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::graphics::Point__equals_7102_ID,::app::Android::android::graphics::Point___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.graphics.Point.equals could not be cached",72);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::graphics::Point___javaClass_2, ::app::Android::android::graphics::Point__equals_7102_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::graphics::Point__equals_7102_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Point__hashCode_1(Point* __this)
{
    return Point__hashCode_IMPL_7103(NULL, __this->_subclassed, __this->_javaObject);
}

int Point__hashCode_IMPL_7103(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Point___javaClass_2,::app::Android::android::graphics::Point___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Point__hashCode_7103_ID,::app::Android::android::graphics::Point___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Point.hashCode could not be cached",74);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Point___javaClass_2, ::app::Android::android::graphics::Point__hashCode_7103_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Point__hashCode_7103_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Point__toString(Point* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Point__toString_IMPL_7104(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Point__toString_IMPL_7104(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Point___javaClass_2,::app::Android::android::graphics::Point___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Point__toString_7104_ID,::app::Android::android::graphics::Point___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Point.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Point___javaClass_2, ::app::Android::android::graphics::Point__toString_7104_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Point__toString_7104_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Point__writeToParcel(Point* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Point__writeToParcel_IMPL_7106(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Point__writeToParcel_IMPL_7106(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Point___javaClass_2,::app::Android::android::graphics::Point___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Point__writeToParcel_7106_ID,::app::Android::android::graphics::Point___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.graphics.Point.writeToParcel could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Point___javaClass_2, ::app::Android::android::graphics::Point__writeToParcel_7106_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Point__writeToParcel_7106_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass PorterDuffDLRMode___javaClass_3;
jfieldID PorterDuffDLRMode__SRC_IN_7141_ID;

PorterDuffDLRMode__uType* PorterDuffDLRMode__typeof()
{
    static ::uStaticStrong<PorterDuffDLRMode__uType*> type;
    if (type != NULL) return type;

    type = (PorterDuffDLRMode__uType*)::uAllocClassType(sizeof(PorterDuffDLRMode__uType), "Android.android.graphics.PorterDuffDLRMode", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(PorterDuffDLRMode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(PorterDuffDLRMode__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &PorterDuffDLRMode___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("SRC_IN_7141_ID", &PorterDuffDLRMode__SRC_IN_7141_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", PorterDuffDLRMode___Init_3, 0, true),
        ::uNewFunction("get_SRC_IN", PorterDuffDLRMode__get_SRC_IN, 0, true, PorterDuffDLRMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void PorterDuffDLRMode___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/PorterDuff$Mode"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.PorterDuff$Mode'", 56);; }
}

PorterDuffDLRMode* PorterDuffDLRMode__get_SRC_IN(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3,::app::Android::android::graphics::PorterDuffDLRMode___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::PorterDuffDLRMode__SRC_IN_7141_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::PorterDuffDLRMode__SRC_IN_7141_ID,::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3,"SRC_IN","Landroid/graphics/PorterDuff$Mode;",GetStaticFieldID,"Id for field PorterDuffDLRMode.SRC_IN could not be cached",57);
    ::uExitCritical();;
    };
    PorterDuffDLRMode* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3, ::app::Android::android::graphics::PorterDuffDLRMode__SRC_IN_7141_ID),result,::app::Android::android::graphics::PorterDuffDLRMode__typeof(),PorterDuffDLRMode*,false,true);;
    return ::uCast< PorterDuffDLRMode*>(result, PorterDuffDLRMode__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Rect___javaClass_2;
jfieldID Rect__bottom_7157_ID;
jmethodID Rect__describeContents_7193_ID;
jmethodID Rect__equals_7162_ID;
jmethodID Rect__hashCode_7163_ID;
jfieldID Rect__left_7154_ID;
jmethodID Rect__Rect_7159_ID_c;
jfieldID Rect__right_7156_ID;
jfieldID Rect__top_7155_ID;
jmethodID Rect__toString_7164_ID;
jmethodID Rect__writeToParcel_7194_ID;

Rect__uType* Rect__typeof()
{
    static ::uStaticStrong<Rect__uType*> type;
    if (type != NULL) return type;

    type = (Rect__uType*)::uAllocClassType(sizeof(Rect__uType), "Android.android.graphics.Rect", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Rect__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Rect__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Rect__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Rect__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Rect__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Rect__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Rect__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Rect__uType, __interface_2));

    type->SetFields(11,
        ::uNewField("_javaClass", &Rect___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("bottom_7157_ID", &Rect__bottom_7157_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("describeContents_7193_ID", &Rect__describeContents_7193_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_7162_ID", &Rect__equals_7162_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_7163_ID", &Rect__hashCode_7163_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("left_7154_ID", &Rect__left_7154_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("Rect_7159_ID_c", &Rect__Rect_7159_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("right_7156_ID", &Rect__right_7156_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("top_7155_ID", &Rect__top_7155_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("toString_7164_ID", &Rect__toString_7164_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_7194_ID", &Rect__writeToParcel_7194_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(17,
        ::uNewFunctionVoid("_Init", Rect___Init_2, 0, true),
        ::uNewFunction("describeContents", Rect__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_7193", Rect__describeContents_IMPL_7193, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals_IMPL_7162", Rect__equals_IMPL_7162, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("get_bottom", Rect__get_bottom, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_left", Rect__get_left, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_right", Rect__get_right, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_top", Rect__get_top, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("hashCode_IMPL_7163", Rect__hashCode_IMPL_7163, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", Rect__New_5, 0, true, Rect__typeof()),
        ::uNewFunctionVoid("set_bottom", Rect__set_bottom, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_left", Rect__set_left, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_right", Rect__set_right, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_top", Rect__set_top, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_7164", Rect__toString_IMPL_7164, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Rect__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_7194", Rect__writeToParcel_IMPL_7194, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Rect___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Rect___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Rect___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Rect"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Rect___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Rect'", 45);; }
}

void Rect___ObjInit_4(Rect* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::Rect__Rect_7159_ID_c,::app::Android::android::graphics::Rect___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.graphics.Rect.<init> could not be cached",71);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__Rect_7159_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

int Rect__describeContents(Rect* __this)
{
    return Rect__describeContents_IMPL_7193(NULL, __this->_subclassed, __this->_javaObject);
}

int Rect__describeContents_IMPL_7193(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Rect__describeContents_7193_ID,::app::Android::android::graphics::Rect___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.graphics.Rect.describeContents could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__describeContents_7193_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Rect__describeContents_7193_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Rect__equals_1(Rect* __this, ::app::Android::java::lang::Object* arg0)
{
    return Rect__equals_IMPL_7162(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Rect__equals_IMPL_7162(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::graphics::Rect__equals_7162_ID,::app::Android::android::graphics::Rect___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.graphics.Rect.equals could not be cached",71);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__equals_7162_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::graphics::Rect__equals_7162_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Rect__get_bottom(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__bottom_7157_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__bottom_7157_ID,::app::Android::android::graphics::Rect___javaClass_2,"bottom","I",GetFieldID,"Id for field Rect.bottom could not be cached",44);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__bottom_7157_ID));;
    return result;
}

int Rect__get_left(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__left_7154_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__left_7154_ID,::app::Android::android::graphics::Rect___javaClass_2,"left","I",GetFieldID,"Id for field Rect.left could not be cached",42);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__left_7154_ID));;
    return result;
}

int Rect__get_right(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__right_7156_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__right_7156_ID,::app::Android::android::graphics::Rect___javaClass_2,"right","I",GetFieldID,"Id for field Rect.right could not be cached",43);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__right_7156_ID));;
    return result;
}

int Rect__get_top(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__top_7155_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__top_7155_ID,::app::Android::android::graphics::Rect___javaClass_2,"top","I",GetFieldID,"Id for field Rect.top could not be cached",41);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__top_7155_ID));;
    return result;
}

int Rect__hashCode_1(Rect* __this)
{
    return Rect__hashCode_IMPL_7163(NULL, __this->_subclassed, __this->_javaObject);
}

int Rect__hashCode_IMPL_7163(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Rect__hashCode_7163_ID,::app::Android::android::graphics::Rect___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Rect.hashCode could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__hashCode_7163_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Rect__hashCode_7163_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

Rect* Rect__New_5(::uStatic* __this)
{
    Rect* inst = (Rect*)::uAllocObject(sizeof(Rect), Rect__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Rect__set_bottom(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__bottom_7157_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__bottom_7157_ID,::app::Android::android::graphics::Rect___javaClass_2,"bottom","I",GetFieldID,"Id for field Rect.bottom could not be cached",44);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__bottom_7157_ID, ((jint)value));;
}

void Rect__set_left(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__left_7154_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__left_7154_ID,::app::Android::android::graphics::Rect___javaClass_2,"left","I",GetFieldID,"Id for field Rect.left could not be cached",42);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__left_7154_ID, ((jint)value));;
}

void Rect__set_right(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__right_7156_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__right_7156_ID,::app::Android::android::graphics::Rect___javaClass_2,"right","I",GetFieldID,"Id for field Rect.right could not be cached",43);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__right_7156_ID, ((jint)value));;
}

void Rect__set_top(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__top_7155_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__top_7155_ID,::app::Android::android::graphics::Rect___javaClass_2,"top","I",GetFieldID,"Id for field Rect.top could not be cached",41);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__top_7155_ID, ((jint)value));;
}

::app::Android::java::lang::String* Rect__toString(Rect* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Rect__toString_IMPL_7164(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Rect__toString_IMPL_7164(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Rect__toString_7164_ID,::app::Android::android::graphics::Rect___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Rect.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__toString_7164_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Rect__toString_7164_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Rect__writeToParcel(Rect* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Rect__writeToParcel_IMPL_7194(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Rect__writeToParcel_IMPL_7194(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Rect__writeToParcel_7194_ID,::app::Android::android::graphics::Rect___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.graphics.Rect.writeToParcel could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__writeToParcel_7194_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Rect__writeToParcel_7194_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RectF___javaClass_2;
jmethodID RectF__describeContents_7235_ID;
jmethodID RectF__equals_7205_ID;
jmethodID RectF__hashCode_7206_ID;
jmethodID RectF__toString_7207_ID;
jmethodID RectF__writeToParcel_7236_ID;

RectF__uType* RectF__typeof()
{
    static ::uStaticStrong<RectF__uType*> type;
    if (type != NULL) return type;

    type = (RectF__uType*)::uAllocClassType(sizeof(RectF__uType), "Android.android.graphics.RectF", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))RectF__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))RectF__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))RectF__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))RectF__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))RectF__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RectF__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RectF__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(RectF__uType, __interface_2));

    type->SetFields(6,
        ::uNewField("_javaClass", &RectF___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_7235_ID", &RectF__describeContents_7235_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_7205_ID", &RectF__equals_7205_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_7206_ID", &RectF__hashCode_7206_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_7207_ID", &RectF__toString_7207_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_7236_ID", &RectF__writeToParcel_7236_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", RectF___Init_2, 0, true),
        ::uNewFunction("describeContents", RectF__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_7235", RectF__describeContents_IMPL_7235, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals_IMPL_7205", RectF__equals_IMPL_7205, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_7206", RectF__hashCode_IMPL_7206, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_7207", RectF__toString_IMPL_7207, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", RectF__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_7236", RectF__writeToParcel_IMPL_7236, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void RectF___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::RectF___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::RectF___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/RectF"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::RectF___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.RectF'", 46);; }
}

int RectF__describeContents(RectF* __this)
{
    return RectF__describeContents_IMPL_7235(NULL, __this->_subclassed, __this->_javaObject);
}

int RectF__describeContents_IMPL_7235(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::RectF__describeContents_7235_ID,::app::Android::android::graphics::RectF___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.graphics.RectF.describeContents could not be cached",82);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__describeContents_7235_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::RectF__describeContents_7235_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool RectF__equals_1(RectF* __this, ::app::Android::java::lang::Object* arg0)
{
    return RectF__equals_IMPL_7205(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool RectF__equals_IMPL_7205(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::graphics::RectF__equals_7205_ID,::app::Android::android::graphics::RectF___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.graphics.RectF.equals could not be cached",72);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__equals_7205_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::graphics::RectF__equals_7205_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int RectF__hashCode_1(RectF* __this)
{
    return RectF__hashCode_IMPL_7206(NULL, __this->_subclassed, __this->_javaObject);
}

int RectF__hashCode_IMPL_7206(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::RectF__hashCode_7206_ID,::app::Android::android::graphics::RectF___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.RectF.hashCode could not be cached",74);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__hashCode_7206_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::RectF__hashCode_7206_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* RectF__toString(RectF* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(RectF__toString_IMPL_7207(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* RectF__toString_IMPL_7207(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::RectF__toString_7207_ID,::app::Android::android::graphics::RectF___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.RectF.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__toString_7207_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::RectF__toString_7207_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void RectF__writeToParcel(RectF* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    RectF__writeToParcel_IMPL_7236(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void RectF__writeToParcel_IMPL_7236(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::RectF__writeToParcel_7236_ID,::app::Android::android::graphics::RectF___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.graphics.RectF.writeToParcel could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__writeToParcel_7236_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::RectF__writeToParcel_7236_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Region___javaClass_2;
jmethodID Region__describeContents_7278_ID;
jmethodID Region__equals_7280_ID;
jmethodID Region__finalize_7281_ID;
jmethodID Region__toString_7277_ID;
jmethodID Region__writeToParcel_7279_ID;

Region__uType* Region__typeof()
{
    static ::uStaticStrong<Region__uType*> type;
    if (type != NULL) return type;

    type = (Region__uType*)::uAllocClassType(sizeof(Region__uType), "Android.android.graphics.Region", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Region__equals_1;
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Region__finalize;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Region__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Region__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Region__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Region__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Region__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Region__uType, __interface_2));

    type->SetFields(6,
        ::uNewField("_javaClass", &Region___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_7278_ID", &Region__describeContents_7278_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("equals_7280_ID", &Region__equals_7280_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("finalize_7281_ID", &Region__finalize_7281_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_7277_ID", &Region__toString_7277_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_7279_ID", &Region__writeToParcel_7279_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", Region___Init_2, 0, true),
        ::uNewFunction("describeContents", Region__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_7278", Region__describeContents_IMPL_7278, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("equals_IMPL_7280", Region__equals_IMPL_7280, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("finalize_IMPL_7281", Region__finalize_IMPL_7281, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_7277", Region__toString_IMPL_7277, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Region__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_7279", Region__writeToParcel_IMPL_7279, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Region___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Region___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Region___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Region"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Region___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Region'", 47);; }
}

int Region__describeContents(Region* __this)
{
    return Region__describeContents_IMPL_7278(NULL, __this->_subclassed, __this->_javaObject);
}

int Region__describeContents_IMPL_7278(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Region___javaClass_2,::app::Android::android::graphics::Region___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Region__describeContents_7278_ID,::app::Android::android::graphics::Region___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.graphics.Region.describeContents could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Region___javaClass_2, ::app::Android::android::graphics::Region__describeContents_7278_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Region__describeContents_7278_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Region__equals_1(Region* __this, ::app::Android::java::lang::Object* arg0)
{
    return Region__equals_IMPL_7280(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Region__equals_IMPL_7280(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Region___javaClass_2,::app::Android::android::graphics::Region___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::graphics::Region__equals_7280_ID,::app::Android::android::graphics::Region___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.graphics.Region.equals could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::graphics::Region___javaClass_2, ::app::Android::android::graphics::Region__equals_7280_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::graphics::Region__equals_7280_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Region__finalize(Region* __this)
{
    Region__finalize_IMPL_7281(NULL, __this->_subclassed, __this->_javaObject);
}

void Region__finalize_IMPL_7281(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Region___javaClass_2,::app::Android::android::graphics::Region___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Region__finalize_7281_ID,::app::Android::android::graphics::Region___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.graphics.Region.finalize could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Region___javaClass_2, ::app::Android::android::graphics::Region__finalize_7281_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Region__finalize_7281_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Region__toString(Region* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Region__toString_IMPL_7277(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Region__toString_IMPL_7277(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Region___javaClass_2,::app::Android::android::graphics::Region___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Region__toString_7277_ID,::app::Android::android::graphics::Region___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Region.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Region___javaClass_2, ::app::Android::android::graphics::Region__toString_7277_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Region__toString_7277_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Region__writeToParcel(Region* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Region__writeToParcel_IMPL_7279(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Region__writeToParcel_IMPL_7279(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Region___javaClass_2,::app::Android::android::graphics::Region___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Region__writeToParcel_7279_ID,::app::Android::android::graphics::Region___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.graphics.Region.writeToParcel could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Region___javaClass_2, ::app::Android::android::graphics::Region__writeToParcel_7279_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Region__writeToParcel_7279_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Shader___javaClass_2;
jmethodID Shader__finalize_7293_ID;

Shader__uType* Shader__typeof()
{
    static ::uStaticStrong<Shader__uType*> type;
    if (type != NULL) return type;

    type = (Shader__uType*)::uAllocClassType(sizeof(Shader__uType), "Android.android.graphics.Shader", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Shader__finalize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Shader__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Shader__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Shader___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("finalize_7293_ID", &Shader__finalize_7293_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", Shader___Init_2, 0, true),
        ::uNewFunctionVoid("finalize_IMPL_7293", Shader__finalize_IMPL_7293, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shader___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Shader___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Shader___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Shader"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Shader___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Shader'", 47);; }
}

void Shader___ObjInit_5(Shader* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

void Shader__finalize(Shader* __this)
{
    Shader__finalize_IMPL_7293(NULL, __this->_subclassed, __this->_javaObject);
}

void Shader__finalize_IMPL_7293(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Shader___javaClass_2,::app::Android::android::graphics::Shader___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Shader__finalize_7293_ID,::app::Android::android::graphics::Shader___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.graphics.Shader.finalize could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Shader___javaClass_2, ::app::Android::android::graphics::Shader__finalize_7293_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Shader__finalize_7293_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ShaderDLRTileMode___javaClass_3;
jfieldID ShaderDLRTileMode__CLAMP_7285_ID;

ShaderDLRTileMode__uType* ShaderDLRTileMode__typeof()
{
    static ::uStaticStrong<ShaderDLRTileMode__uType*> type;
    if (type != NULL) return type;

    type = (ShaderDLRTileMode__uType*)::uAllocClassType(sizeof(ShaderDLRTileMode__uType), "Android.android.graphics.ShaderDLRTileMode", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ShaderDLRTileMode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ShaderDLRTileMode__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &ShaderDLRTileMode___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("CLAMP_7285_ID", &ShaderDLRTileMode__CLAMP_7285_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", ShaderDLRTileMode___Init_3, 0, true),
        ::uNewFunction("get_CLAMP", ShaderDLRTileMode__get_CLAMP, 0, true, ShaderDLRTileMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShaderDLRTileMode___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::ShaderDLRTileMode___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::ShaderDLRTileMode___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Shader$TileMode"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::ShaderDLRTileMode___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Shader$TileMode'", 56);; }
}

ShaderDLRTileMode* ShaderDLRTileMode__get_CLAMP(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::ShaderDLRTileMode___javaClass_3,::app::Android::android::graphics::ShaderDLRTileMode___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::ShaderDLRTileMode__CLAMP_7285_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::ShaderDLRTileMode__CLAMP_7285_ID,::app::Android::android::graphics::ShaderDLRTileMode___javaClass_3,"CLAMP","Landroid/graphics/Shader$TileMode;",GetStaticFieldID,"Id for field ShaderDLRTileMode.CLAMP could not be cached",56);
    ::uExitCritical();;
    };
    ShaderDLRTileMode* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::ShaderDLRTileMode___javaClass_3, ::app::Android::android::graphics::ShaderDLRTileMode__CLAMP_7285_ID),result,::app::Android::android::graphics::ShaderDLRTileMode__typeof(),ShaderDLRTileMode*,false,true);;
    return ::uCast< ShaderDLRTileMode*>(result, ShaderDLRTileMode__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass SurfaceTexture___javaClass_2;
jmethodID SurfaceTexture__finalize_7309_ID;
jmethodID SurfaceTexture__release_7308_ID;
jmethodID SurfaceTexture__SurfaceTexture_7298_ID_c;

SurfaceTexture__uType* SurfaceTexture__typeof()
{
    static ::uStaticStrong<SurfaceTexture__uType*> type;
    if (type != NULL) return type;

    type = (SurfaceTexture__uType*)::uAllocClassType(sizeof(SurfaceTexture__uType), "Android.android.graphics.SurfaceTexture", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))SurfaceTexture__finalize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(SurfaceTexture__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SurfaceTexture__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &SurfaceTexture___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("finalize_7309_ID", &SurfaceTexture__finalize_7309_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("release_7308_ID", &SurfaceTexture__release_7308_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SurfaceTexture_7298_ID_c", &SurfaceTexture__SurfaceTexture_7298_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", SurfaceTexture___Init_2, 0, true),
        ::uNewFunctionVoid("finalize_IMPL_7309", SurfaceTexture__finalize_IMPL_7309, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", SurfaceTexture__New_5, 0, true, SurfaceTexture__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("release", SurfaceTexture__release, 0, false),
        ::uNewFunctionVoid("release_IMPL_7308", SurfaceTexture__release_IMPL_7308, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void SurfaceTexture___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::SurfaceTexture___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::SurfaceTexture___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/SurfaceTexture"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::SurfaceTexture___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.SurfaceTexture'", 55);; }
}

void SurfaceTexture___ObjInit_4(SurfaceTexture* __this, int arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::SurfaceTexture___javaClass_2,::app::Android::android::graphics::SurfaceTexture___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::SurfaceTexture__SurfaceTexture_7298_ID_c,::app::Android::android::graphics::SurfaceTexture___javaClass_2,"<init>","(I)V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.<init> could not be cached",81);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::SurfaceTexture___javaClass_2, ::app::Android::android::graphics::SurfaceTexture__SurfaceTexture_7298_ID_c, ((jint)arg0));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void SurfaceTexture__finalize(SurfaceTexture* __this)
{
    SurfaceTexture__finalize_IMPL_7309(NULL, __this->_subclassed, __this->_javaObject);
}

void SurfaceTexture__finalize_IMPL_7309(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::SurfaceTexture___javaClass_2,::app::Android::android::graphics::SurfaceTexture___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::SurfaceTexture__finalize_7309_ID,::app::Android::android::graphics::SurfaceTexture___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.finalize could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::SurfaceTexture___javaClass_2, ::app::Android::android::graphics::SurfaceTexture__finalize_7309_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::SurfaceTexture__finalize_7309_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

SurfaceTexture* SurfaceTexture__New_5(::uStatic* __this, int arg0)
{
    SurfaceTexture* inst = (SurfaceTexture*)::uAllocObject(sizeof(SurfaceTexture), SurfaceTexture__typeof());
    inst->_ObjInit_4(arg0);
    return inst;
}

void SurfaceTexture__release(SurfaceTexture* __this)
{
    SurfaceTexture__release_IMPL_7308(NULL, __this->_subclassed, __this->_javaObject);
}

void SurfaceTexture__release_IMPL_7308(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::SurfaceTexture___javaClass_2,::app::Android::android::graphics::SurfaceTexture___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::SurfaceTexture__release_7308_ID,::app::Android::android::graphics::SurfaceTexture___javaClass_2,"release","()V",GetMethodID,"Id for fallback method android.graphics.SurfaceTexture.release could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::SurfaceTexture___javaClass_2, ::app::Android::android::graphics::SurfaceTexture__release_7308_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::SurfaceTexture__release_7308_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Typeface___javaClass_2;
jmethodID Typeface__createFromAsset_7328_ID;
jmethodID Typeface__createFromFile_7330_ID;
jfieldID Typeface__DEFAULT_7312_ID;
jmethodID Typeface__equals_7332_ID;
jmethodID Typeface__finalize_7331_ID;
jmethodID Typeface__hashCode_7333_ID;

Typeface__uType* Typeface__typeof()
{
    static ::uStaticStrong<Typeface__uType*> type;
    if (type != NULL) return type;

    type = (Typeface__uType*)::uAllocClassType(sizeof(Typeface__uType), "Android.android.graphics.Typeface", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Typeface__equals_1;
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Typeface__finalize;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Typeface__hashCode_1;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Typeface__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Typeface__uType, __interface_1));

    type->SetFields(7,
        ::uNewField("_javaClass", &Typeface___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("createFromAsset_7328_ID", &Typeface__createFromAsset_7328_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("createFromFile_7330_ID", &Typeface__createFromFile_7330_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("DEFAULT_7312_ID", &Typeface__DEFAULT_7312_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("equals_7332_ID", &Typeface__equals_7332_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("finalize_7331_ID", &Typeface__finalize_7331_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_7333_ID", &Typeface__hashCode_7333_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("_Init", Typeface___Init_2, 0, true),
        ::uNewFunction("createFromAsset", Typeface__createFromAsset, 0, true, Typeface__typeof(), ::app::Android::android::content::res::AssetManager__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("createFromAsset_IMPL_7328", Typeface__createFromAsset_IMPL_7328, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("createFromFile", Typeface__createFromFile_1, 0, true, Typeface__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("createFromFile_IMPL_7330", Typeface__createFromFile_IMPL_7330, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("equals_IMPL_7332", Typeface__equals_IMPL_7332, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("finalize_IMPL_7331", Typeface__finalize_IMPL_7331, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("get_DEFAULT", Typeface__get_DEFAULT, 0, true, Typeface__typeof()),
        ::uNewFunction("hashCode_IMPL_7333", Typeface__hashCode_IMPL_7333, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Typeface___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Typeface___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Typeface___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Typeface"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Typeface___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Typeface'", 49);; }
}

Typeface* Typeface__createFromAsset(::uStatic* __this, ::app::Android::android::content::res::AssetManager* arg0, ::app::Android::java::lang::String* arg1)
{
    return ::uCast< Typeface*>(Typeface__createFromAsset_IMPL_7328(NULL, (::uObject*)arg0, (::uObject*)arg1), Typeface__typeof());
}

::uObject* Typeface__createFromAsset_IMPL_7328(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    jobject _obArg1 = ((!arg1_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__createFromAsset_7328_ID,::app::Android::android::graphics::Typeface___javaClass_2,"createFromAsset","(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",GetStaticMethodID,"Id for fallback method android.graphics.Typeface.createFromAsset could not be cached",84);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__createFromAsset_7328_ID, _obArg0, _obArg1),result,::app::Android::android::graphics::Typeface__typeof(),Typeface*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

Typeface* Typeface__createFromFile_1(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< Typeface*>(Typeface__createFromFile_IMPL_7330(NULL, (::uObject*)arg0), Typeface__typeof());
}

::uObject* Typeface__createFromFile_IMPL_7330(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__createFromFile_7330_ID,::app::Android::android::graphics::Typeface___javaClass_2,"createFromFile","(Ljava/lang/String;)Landroid/graphics/Typeface;",GetStaticMethodID,"Id for fallback method android.graphics.Typeface.createFromFile could not be cached",83);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__createFromFile_7330_ID, _obArg0),result,::app::Android::android::graphics::Typeface__typeof(),Typeface*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Typeface__equals_1(Typeface* __this, ::app::Android::java::lang::Object* arg0)
{
    return Typeface__equals_IMPL_7332(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Typeface__equals_IMPL_7332(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__equals_7332_ID,::app::Android::android::graphics::Typeface___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.graphics.Typeface.equals could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__equals_7332_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::graphics::Typeface__equals_7332_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Typeface__finalize(Typeface* __this)
{
    Typeface__finalize_IMPL_7331(NULL, __this->_subclassed, __this->_javaObject);
}

void Typeface__finalize_IMPL_7331(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Typeface__finalize_7331_ID,::app::Android::android::graphics::Typeface___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.graphics.Typeface.finalize could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__finalize_7331_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Typeface__finalize_7331_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

Typeface* Typeface__get_DEFAULT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Typeface__DEFAULT_7312_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Typeface__DEFAULT_7312_ID,::app::Android::android::graphics::Typeface___javaClass_2,"DEFAULT","Landroid/graphics/Typeface;",GetStaticFieldID,"Id for field Typeface.DEFAULT could not be cached",49);
    ::uExitCritical();;
    };
    Typeface* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__DEFAULT_7312_ID),result,::app::Android::android::graphics::Typeface__typeof(),Typeface*,false,true);;
    return ::uCast< Typeface*>(result, Typeface__typeof());
}

int Typeface__hashCode_1(Typeface* __this)
{
    return Typeface__hashCode_IMPL_7333(NULL, __this->_subclassed, __this->_javaObject);
}

int Typeface__hashCode_IMPL_7333(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__hashCode_7333_ID,::app::Android::android::graphics::Typeface___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Typeface.hashCode could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__hashCode_7333_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Typeface__hashCode_7333_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}
