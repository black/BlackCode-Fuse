// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <android/log.h>
#include <jni.h>
#include <JNIHelper.h>
#include <Uno.Exception.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper;}}}}
namespace g{namespace Android{namespace Base{struct JNI;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Android{
namespace Base{

// public static extern class JNI :30
// {
uClassType* JNI_typeof();
void JNI__CheckException_fn();
void JNI__CheckException1_fn(JNIEnv** jni);
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage);
void JNI__DeleteGlobalRef_fn(jobject* obj_);
void JNI__DeleteLocalRef_fn(jclass* obj);
void JNI__DeleteLocalRef1_fn(jobject* obj);
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_);
void JNI__GetActivityClass_fn(jclass* __retval);
void JNI__GetActivityObject_fn(jobject* __retval);
void JNI__GetArrayLength_fn(jobject* array_, int* __retval);
void JNI__GetBooleanArrayElement_fn(uObject* obj_, int* i_, bool* __retval);
void JNI__GetByteArrayElement_fn(uObject* obj_, int* i_, int8_t* __retval);
void JNI__GetCharArrayElement_fn(uObject* obj_, int* i_, uChar* __retval);
void JNI__GetDefaultObject_fn(jobject* __retval);
void JNI__GetDefaultType_fn(uType** __retval);
void JNI__GetDoubleArrayElement_fn(uObject* obj_, int* i_, double* __retval);
void JNI__GetEnvPtr_fn(JNIEnv** __retval);
void JNI__GetFloatArrayElement_fn(uObject* obj_, int* i_, float* __retval);
void JNI__GetIntArrayElement_fn(uObject* obj_, int* i_, int* __retval);
void JNI__GetLongArrayElement_fn(uObject* obj_, int* i_, int64_t* __retval);
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval);
void JNI__GetObjectArrayElement_fn(uObject* obj_, int* i_, jobject* __retval);
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int* __retval);
void JNI__GetRefType1_fn(jobject* obj, int* __retval);
void JNI__GetShortArrayElement_fn(uObject* obj_, int* i_, int16_t* __retval);
void JNI__GetStaticFieldID_fn(jclass* cls, uString* fieldName, uString* fieldSig, jfieldID* __retval);
void JNI__GetStaticIntField_fn(jclass* obj, jfieldID* fld, int* __retval);
void JNI__GetStaticObjectField_fn(jclass* obj, jfieldID* fld, jobject* __retval);
void JNI__GetUnoRef_fn(jobject* obj_, int64_t* __retval);
void JNI__GetVM_fn(JavaVM** __retval);
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval);
void JNI__Init_fn();
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval);
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval);
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval);
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval);
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval);
void JNI__LocalToGlobalRef_fn(jclass* obj, jclass* __retval);
void JNI__LocalToGlobalRef1_fn(jobject* obj, jobject* __retval);
void JNI__NewFloatArray_fn(int* len_, jobject* __retval);
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval);
void JNI__NewGlobalRef1_fn(jobject* obj_, jobject* __retval);
void JNI__NewIntArray_fn(int* len_, jobject* __retval);
void JNI__NewObject1_fn(jclass* cls, jmethodID* mtd, jvalue* arg0, jobject* __retval);
void JNI__NewObject2_fn(jclass* cls, jmethodID* mtd, jvalue* arg0, jvalue* arg1, jobject* __retval);
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval);
void JNI__SetFloatArrayElement_fn(uObject* obj_, int* i_, float* val_);
void JNI__SetIntArrayElement_fn(uObject* obj_, int* i_, int* val_);
void JNI__SetObjectArrayElement_fn(uObject* obj_, int* i_, jobject* val_);
void JNI__ThrowNewException_fn(uString* message_);
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval);

struct JNI : uObject
{
    static jmethodID _getUnoRefMid_;
    static jmethodID& _getUnoRefMid() { return _getUnoRefMid_; }
    static jclass _helperCls_;
    static jclass& _helperCls() { return _helperCls_; }
    static bool _inited_;
    static bool& _inited() { return _inited_; }
    static uSStrong< ::g::Android::Base::Wrappers::JWrapper*> _rootActivityWrapped_;
    static uSStrong< ::g::Android::Base::Wrappers::JWrapper*>& _rootActivityWrapped() { return _rootActivityWrapped_; }
    static jmethodID Activity_getClassLoader_;
    static jmethodID& Activity_getClassLoader() { return Activity_getClassLoader_; }
    static jmethodID ClassLoader_loadClass_;
    static jmethodID& ClassLoader_loadClass() { return ClassLoader_loadClass_; }
    static jclass exceptionClass_;
    static jclass& exceptionClass() { return exceptionClass_; }

    static void CheckException();
    static void CheckException1(JNIEnv* jni);
    static void CheckException2(JNIEnv* jni, uString* appendMessage);
    static void DeleteGlobalRef(jobject obj_);
    static void DeleteLocalRef(jclass obj);
    static void DeleteLocalRef1(jobject obj);
    static void DeleteWeakGlobalRef(jobject obj_);
    static jclass GetActivityClass();
    static jobject GetActivityObject();
    static int GetArrayLength(jobject array_);
    static bool GetBooleanArrayElement(uObject* obj_, int i_);
    static int8_t GetByteArrayElement(uObject* obj_, int i_);
    static uChar GetCharArrayElement(uObject* obj_, int i_);
    static jobject GetDefaultObject();
    static uType* GetDefaultType();
    static double GetDoubleArrayElement(uObject* obj_, int i_);
    static JNIEnv* GetEnvPtr();
    static float GetFloatArrayElement(uObject* obj_, int i_);
    static int GetIntArrayElement(uObject* obj_, int i_);
    static int64_t GetLongArrayElement(uObject* obj_, int i_);
    static jmethodID GetMethodID(jclass cls, uString* methodName, uString* methodSig);
    static jobject GetObjectArrayElement(uObject* obj_, int i_);
    static int GetRefType(JNIEnv* jni, jobject obj);
    static int GetRefType1(jobject obj);
    static int16_t GetShortArrayElement(uObject* obj_, int i_);
    static jfieldID GetStaticFieldID(jclass cls, uString* fieldName, uString* fieldSig);
    static int GetStaticIntField(jclass obj, jfieldID fld);
    static jobject GetStaticObjectField(jclass obj, jfieldID fld);
    static int64_t GetUnoRef(jobject obj_);
    static JavaVM* GetVM();
    static ::g::Android::Base::Wrappers::JWrapper* GetWrappedActivityObject();
    static void Init();
    static bool IsSameObject(jobject objA_, jobject objB_);
    static jclass LoadClass(JNIEnv* jni, const char* name);
    static jclass LoadClass1(JNIEnv* jni, const char* name, bool systemClass);
    static jclass LoadClass2(JNIEnv* jni, uString* name, bool systemClass);
    static jclass LoadClass3(uString* name, bool systemClass);
    static jclass LocalToGlobalRef(jclass obj);
    static jobject LocalToGlobalRef1(jobject obj);
    static jobject NewFloatArray(int len_);
    static jclass NewGlobalRef(jclass obj);
    static jobject NewGlobalRef1(jobject obj_);
    static jobject NewIntArray(int len_);
    static jobject NewObject1(jclass cls, jmethodID mtd, jvalue arg0);
    static jobject NewObject2(jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1);
    static jobject NewWeakGlobalRef(jobject obj_);
    static void SetFloatArrayElement(uObject* obj_, int i_, float val_);
    static void SetIntArrayElement(uObject* obj_, int i_, int val_);
    static void SetObjectArrayElement(uObject* obj_, int i_, jobject val_);
    static void ThrowNewException(uString* message_);
    static ::g::Uno::Exception* TryGetException(JNIEnv* jni, uString* appendMessage);
};
// }

}}} // ::g::Android::Base
