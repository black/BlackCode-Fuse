// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.res.AssetFileDescriptor.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_java_io_InputStream.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
static uType* TYPES[7];

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno(184)
// ---------------------------------------------------------------------------------

// public sealed extern class AssetFileDescriptor :184
// {
::g::Android::java::lang::Object_type* AssetFileDescriptor_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AssetFileDescriptor);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.AssetFileDescriptor", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))AssetFileDescriptor__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::java::io::FileDescriptor_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::getFileDescriptor_3479_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::getLength_3482_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::getStartOffset_3480_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetFileDescriptor::toString_3487_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :188
void AssetFileDescriptor___Init2_fn()
{
    AssetFileDescriptor::_Init2();
}

// public Android.java.io.FileDescriptor getFileDescriptor() :265
void AssetFileDescriptor__getFileDescriptor_fn(AssetFileDescriptor* __this, ::g::Android::java::io::FileDescriptor** __retval)
{
    *__retval = __this->getFileDescriptor();
}

// public static extern Android.Base.Wrappers.IJWrapper getFileDescriptor_IMPL_3479(bool arg0, Android.Base.Primitives.ujobject arg1) :337
void AssetFileDescriptor__getFileDescriptor_IMPL_3479_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AssetFileDescriptor::getFileDescriptor_IMPL_3479(*arg0_, *arg1_);
}

// public long getLength() :283
void AssetFileDescriptor__getLength_fn(AssetFileDescriptor* __this, int64_t* __retval)
{
    *__retval = __this->getLength();
}

// public static extern long getLength_IMPL_3482(bool arg0, Android.Base.Primitives.ujobject arg1) :346
void AssetFileDescriptor__getLength_IMPL_3482_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = AssetFileDescriptor::getLength_IMPL_3482(*arg0_, *arg1_);
}

// public long getStartOffset() :271
void AssetFileDescriptor__getStartOffset_fn(AssetFileDescriptor* __this, int64_t* __retval)
{
    *__retval = __this->getStartOffset();
}

// public static extern long getStartOffset_IMPL_3480(bool arg0, Android.Base.Primitives.ujobject arg1) :340
void AssetFileDescriptor__getStartOffset_IMPL_3480_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = AssetFileDescriptor::getStartOffset_IMPL_3480(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :313
void AssetFileDescriptor__toString_fn(AssetFileDescriptor* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(AssetFileDescriptor::toString_IMPL_3487(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3487(bool arg0, Android.Base.Primitives.ujobject arg1) :361
void AssetFileDescriptor__toString_IMPL_3487_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AssetFileDescriptor::toString_IMPL_3487(*arg0_, *arg1_);
}

jclass AssetFileDescriptor::_javaClass2_;
jmethodID AssetFileDescriptor::getFileDescriptor_3479_ID_;
jmethodID AssetFileDescriptor::getLength_3482_ID_;
jmethodID AssetFileDescriptor::getStartOffset_3480_ID_;
jmethodID AssetFileDescriptor::toString_3487_ID_;

// public Android.java.io.FileDescriptor getFileDescriptor() [instance] :265
::g::Android::java::io::FileDescriptor* AssetFileDescriptor::getFileDescriptor()
{
    return uCast< ::g::Android::java::io::FileDescriptor*>(AssetFileDescriptor::getFileDescriptor_IMPL_3479(_subclassed, _javaObject), ::TYPES[0/*Android.java.io.FileDescriptor*/]);
}

// public long getLength() [instance] :283
int64_t AssetFileDescriptor::getLength()
{
    return AssetFileDescriptor::getLength_IMPL_3482(_subclassed, _javaObject);
}

// public long getStartOffset() [instance] :271
int64_t AssetFileDescriptor::getStartOffset()
{
    return AssetFileDescriptor::getStartOffset_IMPL_3480(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :188
void AssetFileDescriptor::_Init2()
{
    if (AssetFileDescriptor::_javaClass2()) { return; }
    INIT_JNI;
    AssetFileDescriptor::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetFileDescriptor"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AssetFileDescriptor::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetFileDescriptor'", 63);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getFileDescriptor_IMPL_3479(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :337
uObject* AssetFileDescriptor::getFileDescriptor_IMPL_3479(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    uObject* result;
    CACHE_METHOD(AssetFileDescriptor::getFileDescriptor_3479_ID(),AssetFileDescriptor::_javaClass2(),"getFileDescriptor","()Ljava/io/FileDescriptor;",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.getFileDescriptor could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::getFileDescriptor_3479_ID()),result,::g::Android::java::io::FileDescriptor_typeof(),::g::Android::java::io::FileDescriptor*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetFileDescriptor::getFileDescriptor_3479_ID()),result,::g::Android::java::io::FileDescriptor_typeof(),::g::Android::java::io::FileDescriptor*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getLength_IMPL_3482(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :346
int64_t AssetFileDescriptor::getLength_IMPL_3482(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    int64_t result;
    CACHE_METHOD(AssetFileDescriptor::getLength_3482_ID(),AssetFileDescriptor::_javaClass2(),"getLength","()J",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.getLength could not be cached",92);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::getLength_3482_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, AssetFileDescriptor::getLength_3482_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getStartOffset_IMPL_3480(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :340
int64_t AssetFileDescriptor::getStartOffset_IMPL_3480(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    int64_t result;
    CACHE_METHOD(AssetFileDescriptor::getStartOffset_3480_ID(),AssetFileDescriptor::_javaClass2(),"getStartOffset","()J",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.getStartOffset could not be cached",97);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::getStartOffset_3480_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, AssetFileDescriptor::getStartOffset_3480_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3487(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :361
uObject* AssetFileDescriptor::toString_IMPL_3487(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AssetFileDescriptor::_javaClass2(),AssetFileDescriptor::_Init2());
    
    uObject* result;
    CACHE_METHOD(AssetFileDescriptor::toString_3487_ID(),AssetFileDescriptor::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.AssetFileDescriptor.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetFileDescriptor::_javaClass2(), AssetFileDescriptor::toString_3487_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetFileDescriptor::toString_3487_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno(501)
// ---------------------------------------------------------------------------------

// public sealed extern class AssetManager :501
// {
::g::Android::java::lang::Object_type* AssetManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AssetManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.AssetManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[3] = ::g::Android::java::io::InputStream_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[4] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[5] = ::g::Android::android::content::res::AssetFileDescriptor_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::open_3508_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::openFd_3510_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :505
void AssetManager___Init2_fn()
{
    AssetManager::_Init2();
}

// public Android.java.io.InputStream open(Android.java.lang.String arg0) :582
void AssetManager__open_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::io::InputStream** __retval)
{
    *__retval = __this->open(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper open_IMPL_3508(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :646
void AssetManager__open_IMPL_3508_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AssetManager::open_IMPL_3508(*arg0_, *arg1_, arg2_);
}

// public Android.android.content.res.AssetFileDescriptor openFd(Android.java.lang.String arg0) :594
void AssetManager__openFd_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::content::res::AssetFileDescriptor** __retval)
{
    *__retval = __this->openFd(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper openFd_IMPL_3510(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :652
void AssetManager__openFd_IMPL_3510_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AssetManager::openFd_IMPL_3510(*arg0_, *arg1_, arg2_);
}

jclass AssetManager::_javaClass2_;
jmethodID AssetManager::open_3508_ID_;
jmethodID AssetManager::openFd_3510_ID_;

// public Android.java.io.InputStream open(Android.java.lang.String arg0) [instance] :582
::g::Android::java::io::InputStream* AssetManager::open(::g::Android::java::lang::String* arg0)
{
    return uCast< ::g::Android::java::io::InputStream*>(AssetManager::open_IMPL_3508(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[3/*Android.java.io.InputStream*/]);
}

// public Android.android.content.res.AssetFileDescriptor openFd(Android.java.lang.String arg0) [instance] :594
::g::Android::android::content::res::AssetFileDescriptor* AssetManager::openFd(::g::Android::java::lang::String* arg0)
{
    return uCast< ::g::Android::android::content::res::AssetFileDescriptor*>(AssetManager::openFd_IMPL_3510(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[5/*Android.android.content.res.AssetFileDescriptor*/]);
}

// public static extern new void _Init() [static] :505
void AssetManager::_Init2()
{
    if (AssetManager::_javaClass2()) { return; }
    INIT_JNI;
    AssetManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AssetManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetManager'", 56);; }
}

// public static extern Android.Base.Wrappers.IJWrapper open_IMPL_3508(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :646
uObject* AssetManager::open_IMPL_3508(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AssetManager::_javaClass2(),AssetManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AssetManager::open_3508_ID(),AssetManager::_javaClass2(),"open","(Ljava/lang/String;)Ljava/io/InputStream;",GetMethodID,"Id for fallback method android.content.res.AssetManager.open could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetManager::_javaClass2(), AssetManager::open_3508_ID(), _obArg2),result,::g::Android::Fallbacks::Android_java_io_InputStream_typeof(),::g::Android::java::io::InputStream*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetManager::open_3508_ID(), _obArg2),result,::g::Android::Fallbacks::Android_java_io_InputStream_typeof(),::g::Android::java::io::InputStream*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper openFd_IMPL_3510(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :652
uObject* AssetManager::openFd_IMPL_3510(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AssetManager::_javaClass2(),AssetManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AssetManager::openFd_3510_ID(),AssetManager::_javaClass2(),"openFd","(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",GetMethodID,"Id for fallback method android.content.res.AssetManager.openFd could not be cached",82);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetManager::_javaClass2(), AssetManager::openFd_3510_ID(), _obArg2),result,::g::Android::android::content::res::AssetFileDescriptor_typeof(),::g::Android::android::content::res::AssetFileDescriptor*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetManager::openFd_3510_ID(), _obArg2),result,::g::Android::android::content::res::AssetFileDescriptor_typeof(),::g::Android::android::content::res::AssetFileDescriptor*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno(688)
// ---------------------------------------------------------------------------------

// public sealed extern class ColorStateList :688
// {
::g::Android::java::lang::Object_type* ColorStateList_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ColorStateList);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.ColorStateList", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ColorStateList__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::getDefaultColor_3525_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::toString_3526_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :692
void ColorStateList___Init2_fn()
{
    ColorStateList::_Init2();
}

// public int getDefaultColor() :760
void ColorStateList__getDefaultColor_fn(ColorStateList* __this, int* __retval)
{
    *__retval = __this->getDefaultColor();
}

// public static extern int getDefaultColor_IMPL_3525(bool arg0, Android.Base.Primitives.ujobject arg1) :801
void ColorStateList__getDefaultColor_IMPL_3525_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ColorStateList::getDefaultColor_IMPL_3525(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :766
void ColorStateList__toString_fn(ColorStateList* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(ColorStateList::toString_IMPL_3526(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3526(bool arg0, Android.Base.Primitives.ujobject arg1) :804
void ColorStateList__toString_IMPL_3526_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ColorStateList::toString_IMPL_3526(*arg0_, *arg1_);
}

jclass ColorStateList::_javaClass2_;
jmethodID ColorStateList::getDefaultColor_3525_ID_;
jmethodID ColorStateList::toString_3526_ID_;

// public int getDefaultColor() [instance] :760
int ColorStateList::getDefaultColor()
{
    return ColorStateList::getDefaultColor_IMPL_3525(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :692
void ColorStateList::_Init2()
{
    if (ColorStateList::_javaClass2()) { return; }
    INIT_JNI;
    ColorStateList::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/ColorStateList"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ColorStateList::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.ColorStateList'", 58);; }
}

// public static extern int getDefaultColor_IMPL_3525(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :801
int ColorStateList::getDefaultColor_IMPL_3525(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    int result;
    CACHE_METHOD(ColorStateList::getDefaultColor_3525_ID(),ColorStateList::_javaClass2(),"getDefaultColor","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.getDefaultColor could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::getDefaultColor_3525_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ColorStateList::getDefaultColor_3525_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3526(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :804
uObject* ColorStateList::toString_IMPL_3526(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    uObject* result;
    CACHE_METHOD(ColorStateList::toString_3526_ID(),ColorStateList::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.ColorStateList.toString could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::toString_3526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ColorStateList::toString_3526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno(825)
// ---------------------------------------------------------------------------------

// public sealed extern class Configuration :825
// {
::g::Android::java::lang::Object_type* Configuration_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Configuration);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.Configuration", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Configuration__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Configuration__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::hashCode_3620_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::toString_3609_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :829
void Configuration___Init2_fn()
{
    Configuration::_Init2();
}

// public override sealed int hashCode() :2370
void Configuration__hashCode1_fn(Configuration* __this, int* __retval)
{
    return *__retval = Configuration::hashCode_IMPL_3620(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) :2442
void Configuration__hashCode_IMPL_3620_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Configuration::hashCode_IMPL_3620(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :2304
void Configuration__toString_fn(Configuration* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Configuration::toString_IMPL_3609(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) :2409
void Configuration__toString_IMPL_3609_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Configuration::toString_IMPL_3609(*arg0_, *arg1_);
}

jclass Configuration::_javaClass2_;
jmethodID Configuration::hashCode_3620_ID_;
jmethodID Configuration::toString_3609_ID_;

// public static extern new void _Init() [static] :829
void Configuration::_Init2()
{
    if (Configuration::_javaClass2()) { return; }
    INIT_JNI;
    Configuration::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Configuration"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Configuration::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Configuration'", 57);; }
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2442
int Configuration::hashCode_IMPL_3620(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    int result;
    CACHE_METHOD(Configuration::hashCode_3620_ID(),Configuration::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.hashCode could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Configuration::_javaClass2(), Configuration::hashCode_3620_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Configuration::hashCode_3620_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2409
uObject* Configuration::toString_IMPL_3609(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    uObject* result;
    CACHE_METHOD(Configuration::toString_3609_ID(),Configuration::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.Configuration.toString could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Configuration::_javaClass2(), Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno(2825)
// ----------------------------------------------------------------------------------

// public sealed extern class Resources :2825
// {
::g::Android::java::lang::Object_type* Resources_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Resources);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.Resources", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[6] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Resources::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Resources::getDrawable_3664_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :2829
void Resources___Init2_fn()
{
    Resources::_Init2();
}

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) :2946
void Resources__getDrawable_fn(Resources* __this, int* arg0, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getDrawable(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_3664(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :3182
void Resources__getDrawable_IMPL_3664_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Resources::getDrawable_IMPL_3664(*arg0_, *arg1_, *arg2_);
}

jclass Resources::_javaClass2_;
jmethodID Resources::getDrawable_3664_ID_;

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) [instance] :2946
::g::Android::android::graphics::drawable::Drawable* Resources::getDrawable(int arg0)
{
    int arg0_ = arg0;
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(Resources::getDrawable_IMPL_3664(_subclassed, _javaObject, arg0_), ::TYPES[6/*Android.android.graphics.drawable.Drawable*/]);
}

// public static extern new void _Init() [static] :2829
void Resources::_Init2()
{
    if (Resources::_javaClass2()) { return; }
    INIT_JNI;
    Resources::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Resources"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Resources::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Resources'", 53);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_3664(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :3182
uObject* Resources::getDrawable_IMPL_3664(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(Resources::_javaClass2(),Resources::_Init2());
    
    uObject* result;
    CACHE_METHOD(Resources::getDrawable_3664_ID(),Resources::_javaClass2(),"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.content.res.Resources.getDrawable could not be cached",84);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Resources::_javaClass2(), Resources::getDrawable_3664_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Resources::getDrawable_3664_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::android::content::res
