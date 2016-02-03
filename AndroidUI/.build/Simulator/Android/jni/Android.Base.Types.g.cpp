// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.Arrays.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[2];
static uType* TYPES[4];

namespace g{
namespace Android{
namespace Base{
namespace Types{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Android\Source\Base\$.uno(2412)
// --------------------------------------------------------------------------------------------

// public static extern class Arrays :2412
// {
uClassType* Arrays_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.Arrays", options);
    ::TYPES[0] = ::g::Uno::Long_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("JavaToUnoByteArray", NULL, (void*)Arrays__JavaToUnoByteArray_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("JavaToUnoFloatArray", NULL, (void*)Arrays__JavaToUnoFloatArray_fn, 0, true, ::g::Uno::Float_typeof()->Array(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("JavaToUnoFloatArray", NULL, (void*)Arrays__JavaToUnoFloatArray1_fn, 0, true, ::g::Uno::Float_typeof()->Array(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof()));
    return type;
}

// public static extern byte[] JavaToUnoByteArray(Android.Base.Primitives.ujobject arr, long len) :2452
void Arrays__JavaToUnoByteArray_fn(jobject* arr_, int64_t* len_, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoByteArray(*arr_, *len_);
}

// public static float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr) :2438
void Arrays__JavaToUnoFloatArray_fn(jobject* arr, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoFloatArray(*arr);
}

// public static extern float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr, long len) :2462
void Arrays__JavaToUnoFloatArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoFloatArray1(*arr_, *len_);
}

// public static extern byte[] JavaToUnoByteArray(Android.Base.Primitives.ujobject arr, long len) [static] :2452
uArray* Arrays::JavaToUnoByteArray(jobject arr_, int64_t len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    jbyteArray jarr = (jbyteArray)arr_;
    long len = len_;
    uArray* arr = uArray::New(::g::Uno::Byte_typeof()->Array(), len);
    jni->GetByteArrayRegion(jarr, 0, len, (jbyte*)arr->_ptr);
    return arr;
}

// public static float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr) [static] :2438
uArray* Arrays::JavaToUnoFloatArray(jobject arr)
{
    return Arrays::JavaToUnoFloatArray1(arr, (int64_t)::g::Android::Base::JNI::GetArrayLength(arr));
}

// public static extern float[] JavaToUnoFloatArray(Android.Base.Primitives.ujobject arr, long len) [static] :2462
uArray* Arrays::JavaToUnoFloatArray1(jobject arr_, int64_t len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    jfloatArray jarr = (jfloatArray)arr_;
    long len = len_;
    uArray* arr = uArray::New(::g::Uno::Float_typeof()->Array(), len);
    jni->GetFloatArrayRegion(jarr, 0, len, (jfloat*)arr->_ptr);
    return arr;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Android\Source\Base\$.uno(2293)
// --------------------------------------------------------------------------------------------

// public static extern class Bridge :2293
// {
uClassType* Bridge_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.Bridge", options);
    ::STRINGS[0] = uString::Const("\n"
        "Tried to find uno class for java type ");
    ::STRINGS[1] = uString::Const("\n"
        "");
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_javaToUnoMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_registerFallbackMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_registerTypeMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Types::Bridge::_unoToJavaMid_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("Init", NULL, (void*)Bridge__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("JavaToUnoType", NULL, (void*)Bridge__JavaToUnoType_fn, 0, true, ::g::Uno::Type_typeof(), 3, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RegisterUnoFallback", NULL, (void*)Bridge__RegisterUnoFallback_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Primitives::ConstCharPtr_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Type_typeof()),
        new uFunction("RegisterUnoType", NULL, (void*)Bridge__RegisterUnoType_fn, 0, true, uVoid_typeof(), 3, ::g::Android::Base::Primitives::ConstCharPtr_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Type_typeof()),
        new uFunction("SetWrapperType", NULL, (void*)Bridge__SetWrapperType_fn, 0, true, uVoid_typeof(), 5, ::g::Android::Base::Wrappers::JWrapper_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public static extern void Init() :2303
void Bridge__Init_fn()
{
    Bridge::Init();
}

// public static Uno.Type JavaToUnoType(Android.Base.Primitives.ujobject javaObj, Uno.Type fallbackType, bool typeHasFallbackClass) :2309
void Bridge__JavaToUnoType_fn(jobject* javaObj, uType* fallbackType, bool* typeHasFallbackClass, uType** __retval)
{
    *__retval = Bridge::JavaToUnoType(*javaObj, fallbackType, *typeHasFallbackClass);
}

// public static extern void RegisterUnoFallback(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) :2307
void Bridge__RegisterUnoFallback_fn(const char** typeName_, int* nameLen_, uType* typePtr_)
{
    Bridge::RegisterUnoFallback(*typeName_, *nameLen_, typePtr_);
}

// public static extern void RegisterUnoType(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) :2305
void Bridge__RegisterUnoType_fn(const char** typeName_, int* nameLen_, uType* typePtr_)
{
    Bridge::RegisterUnoType(*typeName_, *nameLen_, typePtr_);
}

// public static extern void SetWrapperType(Android.Base.Wrappers.JWrapper wrapper, Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :2345
void Bridge__SetWrapperType_fn(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject* obj_, uType* typePtr_, bool* typeHasFallbackClass_, bool* resolveType_)
{
    Bridge::SetWrapperType(wrapper_, *obj_, typePtr_, *typeHasFallbackClass_, *resolveType_);
}

jclass Bridge::_helperCls_;
bool Bridge::_inited_;
jmethodID Bridge::_javaToUnoMid_;
jmethodID Bridge::_registerFallbackMid_;
jmethodID Bridge::_registerTypeMid_;
jmethodID Bridge::_unoToJavaMid_;

// public static extern void Init() [static] :2303
void Bridge::Init()
{
    if (Bridge::_inited()) { return; }
    ::g::Android::Base::JNI::Init();
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    Bridge::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass1(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper", false)));
    if (!Bridge::_helperCls()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
    }
    
    Bridge::_registerTypeMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "RegisterUnoType", "(Ljava/lang/String;J)V");
    Bridge::_registerFallbackMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "RegisterUnoFallback", "(Ljava/lang/String;J)V");
    Bridge::_javaToUnoMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "JavaToUnoType", "(Ljava/lang/Object;JZ)J");
    Bridge::_unoToJavaMid() = jni->GetStaticMethodID(Bridge::_helperCls(), "UnoToJavaType", "(J)Ljava/lang/Class;");
    
    if ((!Bridge::_registerTypeMid()) || (!Bridge::_registerFallbackMid()) || (!Bridge::_javaToUnoMid()) || (!Bridge::_unoToJavaMid())) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache methods for UnoHelper", 37)));
    }
    Bridge::_inited() = true;
}

// public static Uno.Type JavaToUnoType(Android.Base.Primitives.ujobject javaObj, Uno.Type fallbackType, bool typeHasFallbackClass) [static] :2309
uType* Bridge::JavaToUnoType(jobject javaObj, uType* fallbackType, bool typeHasFallbackClass)
{
    if (!Bridge::_inited())
        Bridge::Init();

    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    uType* result = (uType*)jni->CallStaticLongMethod(Bridge::_helperCls(), Bridge::_javaToUnoMid(), javaObj, (jlong)fallbackType, (jboolean)typeHasFallbackClass);
    ::g::Uno::Exception* excep = ::g::Android::Base::JNI::TryGetException(jni, NULL);

    if (excep != NULL)
    {
        jmethodID grabClass = jni->GetMethodID(jni->FindClass("java/lang/Object"), "getClass", "()Ljava/lang/Class;");
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject cls = jni->CallObjectMethod(javaObj, grabClass);
        jobject estring = (jobject)jni->CallObjectMethod(cls, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);
        excep = ::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(excep)->Message(), ::STRINGS[0/*"\nTried to ...*/]), x), ::STRINGS[1/*"\n"*/]));
        U_THROW(excep);
    }

    return result;
}

// public static extern void RegisterUnoFallback(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) [static] :2307
void Bridge::RegisterUnoFallback(const char* typeName_, int nameLen_, uType* typePtr_)
{
    if (!Bridge::_inited()) { Bridge::Init(); }
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(Bridge::_helperCls(), Bridge::_registerFallbackMid(), javaTypeName, ((jlong)typePtr_));
    ::g::Android::Base::JNI::CheckException1(jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

// public static extern void RegisterUnoType(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) [static] :2305
void Bridge::RegisterUnoType(const char* typeName_, int nameLen_, uType* typePtr_)
{
    if (!Bridge::_inited()) { Bridge::Init(); }
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(Bridge::_helperCls(), Bridge::_registerTypeMid(), javaTypeName, ((jlong)typePtr_));
    ::g::Android::Base::JNI::CheckException1(jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

// public static extern void SetWrapperType(Android.Base.Wrappers.JWrapper wrapper, Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [static] :2345
void Bridge::SetWrapperType(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_)
{
    if (!wrapper_) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Trying to set type of null object",33)));
    } else if ((!obj_) && resolveType_) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Have requested to infer type from jobject but jobject is null",61)));
    } else {
        if (typePtr_) {
            wrapper_->__type = typePtr_;
        }
        if (obj_ && resolveType_) {
            wrapper_->__obj_type = ((uType*)Bridge::JavaToUnoType(obj_, wrapper_->__obj_type, typeHasFallbackClass_));
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Android\Source\Base\$.uno(2349)
// --------------------------------------------------------------------------------------------

// public static extern class ByteBuffer :2349
// {
uClassType* ByteBuffer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.ByteBuffer", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Android\Source\Base\$.uno(2379)
// --------------------------------------------------------------------------------------------

// public static extern class String :2379
// {
uClassType* String_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.String", options);
    ::TYPES[3] = ::g::Android::Base::Primitives::ujobject_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("JavaToUno", NULL, (void*)String__JavaToUno_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("JavaToUno", NULL, (void*)String__JavaToUno1_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("JavaToUno", NULL, (void*)String__JavaToUno2_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("UnoToJava", NULL, (void*)String__UnoToJava_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UnoToJava", NULL, (void*)String__UnoToJava1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public static extern string JavaToUno(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject jstr) :2406
void String__JavaToUno_fn(JNIEnv** jni_, jobject* jstr_, uString** __retval)
{
    *__retval = String::JavaToUno(*jni_, *jstr_);
}

// public static string JavaToUno(Android.Base.Primitives.ujobject jstr) :2389
void String__JavaToUno1_fn(jobject* jstr, uString** __retval)
{
    *__retval = String::JavaToUno1(*jstr);
}

// public static string JavaToUno(Android.Base.Wrappers.IJWrapper jstr) :2381
void String__JavaToUno2_fn(uObject* jstr, uString** __retval)
{
    *__retval = String::JavaToUno2(jstr);
}

// public static extern Android.Base.Primitives.ujobject UnoToJava(Android.Base.Primitives.JNIEnvPtr jni, string str) :2408
void String__UnoToJava_fn(JNIEnv** jni_, uString* str_, jobject* __retval)
{
    *__retval = String::UnoToJava(*jni_, str_);
}

// public static Android.Base.Primitives.ujobject UnoToJava(string str) :2397
void String__UnoToJava1_fn(uString* str, jobject* __retval)
{
    *__retval = String::UnoToJava1(str);
}

// public static extern string JavaToUno(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject jstr) [static] :2406
uString* String::JavaToUno(JNIEnv* jni_, jobject jstr_)
{
    if (!jstr_) { return NULL; }
    jobject str = jni_->NewLocalRef(jstr_);
    const jchar* raw =  jni_->GetStringChars((jstring)str, NULL);
    int len = jni_->GetStringLength((jstring)str);
    int size = len * sizeof(jchar);
    uString* result = uString::New(len);
    memcpy(result->_ptr, (void*)raw, size);
    jni_->ReleaseStringChars((jstring)str, raw);
    jni_->DeleteLocalRef(str);
    return result;
}

// public static string JavaToUno(Android.Base.Primitives.ujobject jstr) [static] :2389
uString* String::JavaToUno1(jobject jstr)
{
    if (::g::Android::Base::Primitives::ujobject::op_Inequality(jstr, ::g::Android::Base::Primitives::ujobject::Null()))
        return String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), jstr);
    else
        return NULL;
}

// public static string JavaToUno(Android.Base.Wrappers.IJWrapper jstr) [static] :2381
uString* String::JavaToUno2(uObject* jstr)
{
    if (jstr != NULL)
        return String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(jstr), ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    else
        return NULL;
}

// public static extern Android.Base.Primitives.ujobject UnoToJava(Android.Base.Primitives.JNIEnvPtr jni, string str) [static] :2408
jobject String::UnoToJava(JNIEnv* jni_, uString* str_)
{
    return (jobject)(jni_->NewString(str_->_ptr, str_->_length));
}

// public static Android.Base.Primitives.ujobject UnoToJava(string str) [static] :2397
jobject String::UnoToJava1(uString* str)
{
    if (::g::Uno::String::op_Inequality(str, NULL))
        return String::UnoToJava(::g::Android::Base::JNI::GetEnvPtr(), str);
    else
        return ::g::Android::Base::Primitives::ujobject::Null();
}
// }

}}}} // ::g::Android::Base::Types
