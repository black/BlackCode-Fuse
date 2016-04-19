// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Permissions.h>
#include <Android.Base.PlatPermission.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.JavaVMPtr.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Versions.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[7];
static uType* TYPES[2];

namespace g{
namespace Android{
namespace Base{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Android\Source\Base\$.uno(27)
// ------------------------------------------------------------------------------------------

// public static extern class AndroidBindingMacros :27
// {
uClassType* AndroidBindingMacros_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.AndroidBindingMacros", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Android\Source\Base\$.uno(30)
// ------------------------------------------------------------------------------------------

// public static extern class JNI :30
// {
uClassType* JNI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.JNI", options);
    ::STRINGS[0] = uString::Const("\n"
        "");
    ::TYPES[0] = JNI__RefType_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::_getUnoRefMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Base::JNI::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Wrappers::JWrapper_typeof(), (uintptr_t)&::g::Android::Base::JNI::_rootActivityWrapped_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::Activity_getClassLoader_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::ClassLoader_loadClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::exceptionClass_, uFieldFlagsStatic);
    return type;
}

// public static extern void CheckException() :185
void JNI__CheckException_fn()
{
    JNI::CheckException();
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) :173
void JNI__CheckException1_fn(JNIEnv** jni)
{
    JNI::CheckException1(*jni);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :178
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage)
{
    JNI::CheckException2(*jni, appendMessage);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) :148
void JNI__DeleteGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteGlobalRef(*obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) :241
void JNI__DeleteLocalRef_fn(jclass* obj)
{
    JNI::DeleteLocalRef(*obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) :235
void JNI__DeleteLocalRef1_fn(jobject* obj)
{
    JNI::DeleteLocalRef1(*obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) :151
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteWeakGlobalRef(*obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() :53
void JNI__GetActivityClass_fn(jclass* __retval)
{
    *__retval = JNI::GetActivityClass();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() :50
void JNI__GetActivityObject_fn(jobject* __retval)
{
    *__retval = JNI::GetActivityObject();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) :254
void JNI__GetArrayLength_fn(jobject* array_, int* __retval)
{
    *__retval = JNI::GetArrayLength(*array_);
}

// public static extern bool GetBooleanArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :274
void JNI__GetBooleanArrayElement_fn(uObject* obj_, int* i_, bool* __retval)
{
    *__retval = JNI::GetBooleanArrayElement(obj_, *i_);
}

// public static extern sbyte GetByteArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :276
void JNI__GetByteArrayElement_fn(uObject* obj_, int* i_, int8_t* __retval)
{
    *__retval = JNI::GetByteArrayElement(obj_, *i_);
}

// public static extern char GetCharArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :278
void JNI__GetCharArrayElement_fn(uObject* obj_, int* i_, uChar* __retval)
{
    *__retval = JNI::GetCharArrayElement(obj_, *i_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() :311
void JNI__GetDefaultObject_fn(jobject* __retval)
{
    *__retval = JNI::GetDefaultObject();
}

// public static extern Uno.Type GetDefaultType() :313
void JNI__GetDefaultType_fn(uType** __retval)
{
    *__retval = JNI::GetDefaultType();
}

// public static extern double GetDoubleArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :288
void JNI__GetDoubleArrayElement_fn(uObject* obj_, int* i_, double* __retval)
{
    *__retval = JNI::GetDoubleArrayElement(obj_, *i_);
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() :44
void JNI__GetEnvPtr_fn(JNIEnv** __retval)
{
    *__retval = JNI::GetEnvPtr();
}

// public static extern float GetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :286
void JNI__GetFloatArrayElement_fn(uObject* obj_, int* i_, float* __retval)
{
    *__retval = JNI::GetFloatArrayElement(obj_, *i_);
}

// public static extern int GetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :282
void JNI__GetIntArrayElement_fn(uObject* obj_, int* i_, int* __retval)
{
    *__retval = JNI::GetIntArrayElement(obj_, *i_);
}

// public static extern long GetLongArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :284
void JNI__GetLongArrayElement_fn(uObject* obj_, int* i_, int64_t* __retval)
{
    *__retval = JNI::GetLongArrayElement(obj_, *i_);
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) :193
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetMethodID(*cls, methodName, methodSig);
}

// public static extern Android.Base.Primitives.ujobject GetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :290
void JNI__GetObjectArrayElement_fn(uObject* obj_, int* i_, jobject* __retval)
{
    *__retval = JNI::GetObjectArrayElement(obj_, *i_);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) :71
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType(*jni, *obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) :76
void JNI__GetRefType1_fn(jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType1(*obj);
}

// public static extern short GetShortArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) :280
void JNI__GetShortArrayElement_fn(uObject* obj_, int* i_, int16_t* __retval)
{
    *__retval = JNI::GetShortArrayElement(obj_, *i_);
}

// public static Android.Base.Primitives.jfieldID GetStaticFieldID(Android.Base.Primitives.ujclass cls, string fieldName, string fieldSig) :223
void JNI__GetStaticFieldID_fn(jclass* cls, uString* fieldName, uString* fieldSig, jfieldID* __retval)
{
    *__retval = JNI::GetStaticFieldID(*cls, fieldName, fieldSig);
}

// public static extern int GetStaticIntField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) :1917
void JNI__GetStaticIntField_fn(jclass* obj, jfieldID* fld, int* __retval)
{
    *__retval = JNI::GetStaticIntField(*obj, *fld);
}

// public static extern Android.Base.Primitives.ujobject GetStaticObjectField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) :1887
void JNI__GetStaticObjectField_fn(jclass* obj, jfieldID* fld, jobject* __retval)
{
    *__retval = JNI::GetStaticObjectField(*obj, *fld);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) :316
void JNI__GetUnoRef_fn(jobject* obj_, int64_t* __retval)
{
    *__retval = JNI::GetUnoRef(*obj_);
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() :47
void JNI__GetVM_fn(JavaVM** __retval)
{
    *__retval = JNI::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() :55
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval)
{
    *__retval = JNI::GetWrappedActivityObject();
}

// public static extern void Init() :41
void JNI__Init_fn()
{
    JNI::Init();
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) :154
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval)
{
    *__retval = JNI::IsSameObject(*objA_, *objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) :64
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval)
{
    *__retval = JNI::LoadClass(*jni, *name);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) :81
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass1(*jni, *name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) :97
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass2(*jni, name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) :105
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass3(name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LocalToGlobalRef(Android.Base.Primitives.ujclass obj) :137
void JNI__LocalToGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::LocalToGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject LocalToGlobalRef(Android.Base.Primitives.ujobject obj) :125
void JNI__LocalToGlobalRef1_fn(jobject* obj, jobject* __retval)
{
    *__retval = JNI::LocalToGlobalRef1(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) :268
void JNI__NewFloatArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewFloatArray(*len_);
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) :114
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::NewGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) :111
void JNI__NewGlobalRef1_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewGlobalRef1(*obj_);
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) :264
void JNI__NewIntArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewIntArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0) :358
void JNI__NewObject1_fn(jclass* cls, jmethodID* mtd, jvalue* arg0, jobject* __retval)
{
    *__retval = JNI::NewObject1(*cls, *mtd, *arg0);
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0, Android.Base.Primitives.ujvalue arg1) :354
void JNI__NewObject2_fn(jclass* cls, jmethodID* mtd, jvalue* arg0, jvalue* arg1, jobject* __retval)
{
    *__retval = JNI::NewObject2(*cls, *mtd, *arg0, *arg1);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) :145
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewWeakGlobalRef(*obj_);
}

// public static extern void SetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, float val) :304
void JNI__SetFloatArrayElement_fn(uObject* obj_, int* i_, float* val_)
{
    JNI::SetFloatArrayElement(obj_, *i_, *val_);
}

// public static extern void SetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, int val) :300
void JNI__SetIntArrayElement_fn(uObject* obj_, int* i_, int* val_)
{
    JNI::SetIntArrayElement(obj_, *i_, *val_);
}

// public static extern void SetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, Android.Base.Primitives.ujobject val) :308
void JNI__SetObjectArrayElement_fn(uObject* obj_, int* i_, jobject* val_)
{
    JNI::SetObjectArrayElement(obj_, *i_, *val_);
}

// public static extern void ThrowNewException(string message) :191
void JNI__ThrowNewException_fn(uString* message_)
{
    JNI::ThrowNewException(message_);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :156
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval)
{
    *__retval = JNI::TryGetException(*jni, appendMessage);
}

jmethodID JNI::_getUnoRefMid_;
jclass JNI::_helperCls_;
bool JNI::_inited_;
uSStrong< ::g::Android::Base::Wrappers::JWrapper*> JNI::_rootActivityWrapped_;
jmethodID JNI::Activity_getClassLoader_;
jmethodID JNI::ClassLoader_loadClass_;
jclass JNI::exceptionClass_;

// public static extern void CheckException() [static] :185
void JNI::CheckException()
{
    JNI::CheckException1(JNI::GetEnvPtr());
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) [static] :173
void JNI::CheckException1(JNIEnv* jni)
{
    JNI::CheckException2(jni, NULL);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :178
void JNI::CheckException2(JNIEnv* jni, uString* appendMessage)
{
    ::g::Uno::Exception* excep = JNI::TryGetException(jni, appendMessage);

    if (excep != NULL)
        U_THROW(excep);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) [static] :148
void JNI::DeleteGlobalRef(jobject obj_)
{
    JNI::GetEnvPtr()->DeleteGlobalRef(obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) [static] :241
void JNI::DeleteLocalRef(jclass obj)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) [static] :235
void JNI::DeleteLocalRef1(jobject obj)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :151
void JNI::DeleteWeakGlobalRef(jobject obj_)
{
    JNI::GetEnvPtr()->DeleteWeakGlobalRef(obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() [static] :53
jclass JNI::GetActivityClass()
{
    JniHelper jni;
    return JniHelper::GetActivityClass();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() [static] :50
jobject JNI::GetActivityObject()
{
    JniHelper jni;
    return JniHelper::GetActivity();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) [static] :254
int JNI::GetArrayLength(jobject array_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    return (int)jni->GetArrayLength((jarray)array_);
}

// public static extern bool GetBooleanArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :274
bool JNI::GetBooleanArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jboolean result;
    jni->GetBooleanArrayRegion((jbooleanArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (bool)result;
}

// public static extern sbyte GetByteArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :276
int8_t JNI::GetByteArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jbyte result;
    jni->GetByteArrayRegion((jbyteArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int8_t)result;
}

// public static extern char GetCharArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :278
uChar JNI::GetCharArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jchar result;
    jni->GetCharArrayRegion((jcharArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (uChar)result;
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() [static] :311
jobject JNI::GetDefaultObject()
{
    return (jobject)0;
}

// public static extern Uno.Type GetDefaultType() [static] :313
uType* JNI::GetDefaultType()
{
    return (uType*)0;
}

// public static extern double GetDoubleArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :288
double JNI::GetDoubleArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jdouble result;
    jni->GetDoubleArrayRegion((jdoubleArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (double)result;
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() [static] :44
JNIEnv* JNI::GetEnvPtr()
{
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, NULL);
    return jni;
}

// public static extern float GetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :286
float JNI::GetFloatArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jfloat result;
    jni->GetFloatArrayRegion((jfloatArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (float)result;
}

// public static extern int GetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :282
int JNI::GetIntArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jint result;
    jni->GetIntArrayRegion((jintArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int)result;
}

// public static extern long GetLongArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :284
int64_t JNI::GetLongArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jlong result;
    jni->GetLongArrayRegion((jlongArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int64_t)result;
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static] :193
jmethodID JNI::GetMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    const char* cMethodName = ::uStringToCStr(methodName);
    const char* cMethodSig = ::uStringToCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    return mid;
}

// public static extern Android.Base.Primitives.ujobject GetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :290
jobject JNI::GetObjectArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    return reinterpret_cast<jobject>(jni->NewGlobalRef(jni->GetObjectArrayElement((jobjectArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_)));
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) [static] :71
int JNI::GetRefType(JNIEnv* jni, jobject obj)
{
    return (int)jni->GetObjectRefType(obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) [static] :76
int JNI::GetRefType1(jobject obj)
{
    return JNI::GetRefType(JNI::GetEnvPtr(), obj);
}

// public static extern short GetShortArrayElement(Android.Base.Wrappers.IJWrapper obj, int i) [static] :280
int16_t JNI::GetShortArrayElement(uObject* obj_, int i_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jshort result;
    jni->GetShortArrayRegion((jshortArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &result);
    return (int16_t)result;
}

// public static Android.Base.Primitives.jfieldID GetStaticFieldID(Android.Base.Primitives.ujclass cls, string fieldName, string fieldSig) [static] :223
jfieldID JNI::GetStaticFieldID(jclass cls, uString* fieldName, uString* fieldSig)
{
    JNIEnv* env = JNI::GetEnvPtr();
    const char* cFieldName = ::uStringToCStr(fieldName);
    const char* cFieldSig = ::uStringToCStr(fieldSig);
    jfieldID fid = env->GetStaticFieldID(cls,cFieldName,cFieldSig);
    uFreeCStr(cFieldName);
    uFreeCStr(cFieldSig);
    JNI::CheckException1(env);
    return fid;
}

// public static extern int GetStaticIntField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) [static] :1917
int JNI::GetStaticIntField(jclass obj, jfieldID fld)
{
    return JNI::GetEnvPtr()->GetStaticIntField(obj,fld);
}

// public static extern Android.Base.Primitives.ujobject GetStaticObjectField(Android.Base.Primitives.ujclass obj, Android.Base.Primitives.jfieldID fld) [static] :1887
jobject JNI::GetStaticObjectField(jclass obj, jfieldID fld)
{
    return JNI::GetEnvPtr()->GetStaticObjectField(obj,fld);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) [static] :316
int64_t JNI::GetUnoRef(jobject obj_)
{
    if (obj_) {
        JNIEnv* jni = JNI::GetEnvPtr();
        return (int64_t)jni->CallStaticLongMethod(JNI::_helperCls(), JNI::_getUnoRefMid(), obj_);
    } else {
        return 0;
    }
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() [static] :47
JavaVM* JNI::GetVM()
{
    return JniHelper::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() [static] :55
::g::Android::Base::Wrappers::JWrapper* JNI::GetWrappedActivityObject()
{
    jobject activityObj = JNI::GetActivityObject();

    if (::g::Android::Base::Wrappers::JWrapper::op_Equality(JNI::_rootActivityWrapped(), NULL) || !JNI::IsSameObject(uPtr(JNI::_rootActivityWrapped())->_GetJavaObject(), activityObj))
        JNI::_rootActivityWrapped() = ::g::Android::Base::Wrappers::JWrapper::New1(activityObj, NULL, false, false);

    return JNI::_rootActivityWrapped();
}

// public static extern void Init() [static] :41
void JNI::Init()
{
    if (!JNI::_inited())
    {
    JNI::_inited() = true;
        JNIEnv* jni = JNI::GetEnvPtr();
        JNI::Activity_getClassLoader() = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        JNI::ClassLoader_loadClass() = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        JNI::CheckException1(jni);
        JNI::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(JNI::LoadClass1(JNI::GetEnvPtr(), "com.Bindings.UnoHelper", false)));
        if (!JNI::_helperCls()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
        }
        JNI::exceptionClass() = reinterpret_cast<jclass>(jni->NewGlobalRef(jni->FindClass("java/lang/RuntimeException")));
        JNI::_getUnoRefMid() = jni->GetStaticMethodID(JNI::_helperCls(), "GetUnoObjectRef", "(Ljava/lang/Object;)J");
        if (!JNI::_getUnoRefMid()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache getUnoRefMid", 37)));
        }
    }
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) [static] :154
bool JNI::IsSameObject(jobject objA_, jobject objB_)
{
    return (bool)JNI::GetEnvPtr()->IsSameObject(objA_,objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) [static] :64
jclass JNI::LoadClass(JNIEnv* jni, const char* name)
{
    return JNI::LoadClass1(jni, name, false);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) [static] :81
jclass JNI::LoadClass1(JNIEnv* jni, const char* name, bool systemClass)
{
    JNI::Init();
    jclass result;
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
        result = jni->FindClass(name);
    else
        result = (jclass)jni->CallObjectMethod(jni->CallObjectMethod(JNI::GetActivityObject(), JNI::Activity_getClassLoader()),JNI::ClassLoader_loadClass(),jname);

    jni->DeleteLocalRef(jname);
    JNI::CheckException1(jni);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) [static] :97
jclass JNI::LoadClass2(JNIEnv* jni, uString* name, bool systemClass)
{
    const char* cname = (const char*)::uStringToCStr(name);
    jclass result = JNI::LoadClass1(JNI::GetEnvPtr(), cname, systemClass);
    uFreeCStr(cname);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) [static] :105
jclass JNI::LoadClass3(uString* name, bool systemClass)
{
    return JNI::LoadClass2(JNI::GetEnvPtr(), name, systemClass);
}

// public static extern Android.Base.Primitives.ujclass LocalToGlobalRef(Android.Base.Primitives.ujclass obj) [static] :137
jclass JNI::LocalToGlobalRef(jclass obj)
{
    jclass res = JNI::NewGlobalRef(obj);
    JNI::DeleteLocalRef(obj);
    return res;
}

// public static extern Android.Base.Primitives.ujobject LocalToGlobalRef(Android.Base.Primitives.ujobject obj) [static] :125
jobject JNI::LocalToGlobalRef1(jobject obj)
{
    jobject res = JNI::NewGlobalRef1(obj);
    JNI::DeleteLocalRef1(obj);
    return res;
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) [static] :268
jobject JNI::NewFloatArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewFloatArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) [static] :114
jclass JNI::NewGlobalRef(jclass obj)
{
    return reinterpret_cast<jclass>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) [static] :111
jobject JNI::NewGlobalRef1(jobject obj_)
{
    return reinterpret_cast<jobject>(JNI::GetEnvPtr()->NewGlobalRef(obj_));
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) [static] :264
jobject JNI::NewIntArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewIntArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0) [static] :358
jobject JNI::NewObject1(jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI::GetEnvPtr()->NewObject(cls,mtd,arg0);
}

// public static extern Android.Base.Primitives.ujobject NewObject(Android.Base.Primitives.ujclass cls, Android.Base.Primitives.jmethodID mtd, Android.Base.Primitives.ujvalue arg0, Android.Base.Primitives.ujvalue arg1) [static] :354
jobject JNI::NewObject2(jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI::GetEnvPtr()->NewObject(cls,mtd,arg0,arg1);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :145
jobject JNI::NewWeakGlobalRef(jobject obj_)
{
    return (jobject)reinterpret_cast<jweak>(JNI::GetEnvPtr()->NewWeakGlobalRef(obj_));
}

// public static extern void SetFloatArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, float val) [static] :304
void JNI::SetFloatArrayElement(uObject* obj_, int i_, float val_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jfloat val = (jfloat)val_;
    jni->SetFloatArrayRegion((jfloatArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &val);
}

// public static extern void SetIntArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, int val) [static] :300
void JNI::SetIntArrayElement(uObject* obj_, int i_, int val_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jint val = (jint)val_;
    jni->SetIntArrayRegion((jintArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, 1, &val);
}

// public static extern void SetObjectArrayElement(Android.Base.Wrappers.IJWrapper obj, int i, Android.Base.Primitives.ujobject val) [static] :308
void JNI::SetObjectArrayElement(uObject* obj_, int i_, jobject val_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetObjectArrayElement((jobjectArray)::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(obj_, ::g::Android::Base::Wrappers::IJWrapper_typeof())), i_, val_);
}

// public static extern void ThrowNewException(string message) [static] :191
void JNI::ThrowNewException(uString* message_)
{
    const char* message = uStringToCStr(message_);
    LOGD("%s", message);
    JNI::GetEnvPtr()->ThrowNew(JNI::exceptionClass(), message);
    uFreeCStr(message);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :156
::g::Uno::Exception* JNI::TryGetException(JNIEnv* jni, uString* appendMessage)
{
    jthrowable err = jni->ExceptionOccurred();

    if ((err != NULL))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);

        if (::g::Uno::String::op_Inequality(appendMessage, NULL))
            x = ::g::Uno::String::op_Addition2(x, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(x, ::STRINGS[0/*"\n"*/]), appendMessage));

        return ::g::Uno::Exception::New2(x);
    }

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(164)
// -----------------------------------------------------

// public sealed extern class Permissions :164
// {
uType* Permissions_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Permissions);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Android.Base.Permissions", options);
    return type;
}

// private static extern Android.Base.PlatPermission _call_phone() :389
void Permissions___call_phone_fn(void** __retval)
{
    *__retval = Permissions::_call_phone();
}

// private static extern Android.Base.PlatPermission _internet() :459
void Permissions___internet_fn(void** __retval)
{
    *__retval = Permissions::_internet();
}

// private static extern Android.Base.PlatPermission _vibrate() :587
void Permissions___vibrate_fn(void** __retval)
{
    *__retval = Permissions::_vibrate();
}

// public static Android.Base.PlatPermission get_CALL_PHONE() :202
void Permissions__get_CALL_PHONE_fn(void** __retval)
{
    *__retval = Permissions::CALL_PHONE();
}

// public static Android.Base.PlatPermission get_INTERNET() :237
void Permissions__get_INTERNET_fn(void** __retval)
{
    *__retval = Permissions::INTERNET();
}

// public static void RequestPermission(Android.Base.PlatPermission x) :166
void Permissions__RequestPermission_fn(void* x)
{
    Permissions::RequestPermission(x);
}

// public static Android.Base.PlatPermission get_VIBRATE() :301
void Permissions__get_VIBRATE_fn(void** __retval)
{
    *__retval = Permissions::VIBRATE();
}

// private static extern Android.Base.PlatPermission _call_phone() [static] :389
void* Permissions::_call_phone()
{
    return NULL;
}

// private static extern Android.Base.PlatPermission _internet() [static] :459
void* Permissions::_internet()
{
    return NULL;
}

// private static extern Android.Base.PlatPermission _vibrate() [static] :587
void* Permissions::_vibrate()
{
    return NULL;
}

// public static void RequestPermission(Android.Base.PlatPermission x) [static] :166
void Permissions::RequestPermission(void* x)
{
}

// public static Android.Base.PlatPermission get_CALL_PHONE() [static] :202
void* Permissions::CALL_PHONE()
{
    return Permissions::_call_phone();
}

// public static Android.Base.PlatPermission get_INTERNET() [static] :237
void* Permissions::INTERNET()
{
    return Permissions::_internet();
}

// public static Android.Base.PlatPermission get_VIBRATE() [static] :301
void* Permissions::VIBRATE()
{
    return Permissions::_vibrate();
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(161)
// -----------------------------------------------------

// public class PlatPermission :161
// {
uType* PlatPermission_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PlatPermission);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Android.Base.PlatPermission", options);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Android\Source\Base\$.uno(69)
// ------------------------------------------------------------------------------------------

// public enum JNI.RefType :69
uEnumType* JNI__RefType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Android.Base.JNI.RefType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Android\Source\Base\$.uno(2478)
// --------------------------------------------------------------------------------------------

// public static extern class Versions :2478
// {
// static Versions() :2478
static void Versions__cctor__fn(uType* __type)
{
    Versions::_api_ = -1;
    Versions::_release_ = ::STRINGS[1/*"<unknown>"*/];
}

uClassType* Versions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Versions", options);
    type->fp_cctor_ = Versions__cctor__fn;
    ::STRINGS[1] = uString::Const("<unknown>");
    ::STRINGS[2] = uString::Const("android/os/Build$VERSION");
    ::STRINGS[3] = uString::Const("SDK_INT");
    ::STRINGS[4] = uString::Const("I");
    ::STRINGS[5] = uString::Const("RELEASE");
    ::STRINGS[6] = uString::Const("Ljava/lang/String;");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Android::Base::Versions::_api_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Android::Base::Versions::_release_, uFieldFlagsStatic);
    return type;
}

// public static int get_ApiLevel() :2497
void Versions__get_ApiLevel_fn(int* __retval)
{
    *__retval = Versions::ApiLevel();
}

// private static void Initialize() :2480
void Versions__Initialize_fn()
{
    Versions::Initialize();
}

int Versions::_api_;
uSStrong<uString*> Versions::_release_;

// private static void Initialize() [static] :2480
void Versions::Initialize()
{
    Versions_typeof()->Init();

    if (Versions::_api() == -1)
    {
        jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(::STRINGS[2/*"android/os/...*/], false);
        jfieldID sdk = ::g::Android::Base::JNI::GetStaticFieldID(tmpCls, ::STRINGS[3/*"SDK_INT"*/], ::STRINGS[4/*"I"*/]);
        jfieldID release = ::g::Android::Base::JNI::GetStaticFieldID(tmpCls, ::STRINGS[5/*"RELEASE"*/], ::STRINGS[6/*"Ljava/lang/...*/]);
        Versions::_api() = ::g::Android::Base::JNI::GetStaticIntField(tmpCls, sdk);
        Versions::_release() = ::g::Android::Base::Types::String::JavaToUno1(::g::Android::Base::JNI::GetStaticObjectField(tmpCls, release));
    }
}

// public static int get_ApiLevel() [static] :2497
int Versions::ApiLevel()
{
    Versions_typeof()->Init();

    if (Versions::_api() == -1)
        Versions::Initialize();

    return Versions::_api();
}
// }

}}} // ::g::Android::Base
