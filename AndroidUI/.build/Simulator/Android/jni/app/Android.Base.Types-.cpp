#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ConstCharPtr.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Types.Arrays.h>
#include <app/Android.Base.Types.Bridge.h>
#include <app/Android.Base.Types.ByteBuffer.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.Long.h>
#include <app/Uno.Runtime.Implementation.DirectBuffer.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace Base {
namespace Types {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Arrays__uType* Arrays__typeof()
{
    static ::uStaticStrong<Arrays__uType*> type;
    if (type != NULL) return type;

    type = (Arrays__uType*)::uAllocClassType(sizeof(Arrays__uType), "Android.Base.Types.Arrays");

    type->SetFunctions(17,
        ::uNewFunction("JavaToUnoBoolArray", Arrays__JavaToUnoBoolArray, 0, true, ::uGetArrayType(::app::Uno::Bool__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoBoolArray", Arrays__JavaToUnoBoolArray_1, 0, true, ::uGetArrayType(::app::Uno::Bool__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoByteArray", Arrays__JavaToUnoByteArray, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoCharArray", Arrays__JavaToUnoCharArray, 0, true, ::uGetArrayType(::app::Uno::Char__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoCharArray", Arrays__JavaToUnoCharArray_1, 0, true, ::uGetArrayType(::app::Uno::Char__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoDoubleArray", Arrays__JavaToUnoDoubleArray, 0, true, ::uGetArrayType(::app::Uno::Double__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoDoubleArray", Arrays__JavaToUnoDoubleArray_1, 0, true, ::uGetArrayType(::app::Uno::Double__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoFloatArray", Arrays__JavaToUnoFloatArray, 0, true, ::uGetArrayType(::app::Uno::Float__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoFloatArray", Arrays__JavaToUnoFloatArray_1, 0, true, ::uGetArrayType(::app::Uno::Float__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoIntArray", Arrays__JavaToUnoIntArray, 0, true, ::uGetArrayType(::app::Uno::Int__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoIntArray", Arrays__JavaToUnoIntArray_1, 0, true, ::uGetArrayType(::app::Uno::Int__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoLongArray", Arrays__JavaToUnoLongArray, 0, true, ::uGetArrayType(::app::Uno::Long__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoLongArray", Arrays__JavaToUnoLongArray_1, 0, true, ::uGetArrayType(::app::Uno::Long__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoSByteArray", Arrays__JavaToUnoSByteArray, 0, true, ::uGetArrayType(::app::Uno::SByte__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoSByteArray", Arrays__JavaToUnoSByteArray_1, 0, true, ::uGetArrayType(::app::Uno::SByte__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("JavaToUnoShortArray", Arrays__JavaToUnoShortArray, 0, true, ::uGetArrayType(::app::Uno::Short__typeof()), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUnoShortArray", Arrays__JavaToUnoShortArray_1, 0, true, ::uGetArrayType(::app::Uno::Short__typeof()), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

::uArray* Arrays__JavaToUnoBoolArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoBoolArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoBoolArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jbooleanArray jarr = (jbooleanArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Bool__typeof(), len);
    jni->GetBooleanArrayRegion(jarr, 0, len, (jboolean*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoByteArray(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jbyteArray jarr = (jbyteArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Byte__typeof(), len);
    jni->GetByteArrayRegion(jarr, 0, len, (jbyte*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoCharArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoCharArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoCharArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jcharArray jarr = (jcharArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Char__typeof(), len);
    jni->GetCharArrayRegion(jarr, 0, len, (jchar*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoDoubleArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoDoubleArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoDoubleArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jdoubleArray jarr = (jdoubleArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Double__typeof(), len);
    jni->GetDoubleArrayRegion(jarr, 0, len, (jdouble*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoFloatArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoFloatArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoFloatArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jfloatArray jarr = (jfloatArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Float__typeof(), len);
    jni->GetFloatArrayRegion(jarr, 0, len, (jfloat*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoIntArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoIntArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoIntArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jintArray jarr = (jintArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Int__typeof(), len);
    jni->GetIntArrayRegion(jarr, 0, len, (jint*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoLongArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoLongArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoLongArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jlongArray jarr = (jlongArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Long__typeof(), len);
    jni->GetLongArrayRegion(jarr, 0, len, (jlong*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoSByteArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoSByteArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoSByteArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jbyteArray jarr = (jbyteArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::SByte__typeof(), len);
    jni->GetByteArrayRegion(jarr, 0, len, (jbyte*)arr->_ptr);
    return arr;
}

::uArray* Arrays__JavaToUnoShortArray(::uStatic* __this, jobject arr)
{
    return Arrays__JavaToUnoShortArray_1(NULL, arr, (::uLong)::app::Android::Base::JNI__GetArrayLength(NULL, arr));
}

::uArray* Arrays__JavaToUnoShortArray_1(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jshortArray jarr = (jshortArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Short__typeof(), len);
    jni->GetShortArrayRegion(jarr, 0, len, (jshort*)arr->_ptr);
    return arr;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Bridge___helperCls;
bool Bridge___inited;
jmethodID Bridge___javaToUnoMid;
jmethodID Bridge___registerFallbackMid;
jmethodID Bridge___registerTypeMid;
jmethodID Bridge___unoToJavaMid;

Bridge__uType* Bridge__typeof()
{
    static ::uStaticStrong<Bridge__uType*> type;
    if (type != NULL) return type;

    type = (Bridge__uType*)::uAllocClassType(sizeof(Bridge__uType), "Android.Base.Types.Bridge");

    type->SetFields(6,
        ::uNewField("_helperCls", &Bridge___helperCls, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_inited", &Bridge___inited, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_javaToUnoMid", &Bridge___javaToUnoMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("_registerFallbackMid", &Bridge___registerFallbackMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("_registerTypeMid", &Bridge___registerTypeMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("_unoToJavaMid", &Bridge___unoToJavaMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("Init", Bridge__Init, 0, true),
        ::uNewFunction("JavaToUnoType", Bridge__JavaToUnoType, 0, true, ::uType__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("RegisterUnoFallback", Bridge__RegisterUnoFallback, 0, true, ::app::Android::Base::Primitives::ConstCharPtr__typeof(), ::app::Uno::Int__typeof(), ::uType__typeof()),
        ::uNewFunctionVoid("RegisterUnoType", Bridge__RegisterUnoType, 0, true, ::app::Android::Base::Primitives::ConstCharPtr__typeof(), ::app::Uno::Int__typeof(), ::uType__typeof()),
        ::uNewFunctionVoid("SetWrapperType", Bridge__SetWrapperType, 0, true, ::app::Android::Base::Wrappers::JWrapper__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("UnoToJavaType", Bridge__UnoToJavaType, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::uType__typeof()));

    ::uRegisterType(type);
    return type;
}

void Bridge__Init(::uStatic* __this)
{
    if (::app::Android::Base::Types::Bridge___inited) { return; }
    ::app::Android::Base::JNI__Init(NULL);
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    ::app::Android::Base::Types::Bridge___helperCls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper", false)));
    if (!::app::Android::Base::Types::Bridge___helperCls) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache class for UnoHelper",35)));
    }
    
    ::app::Android::Base::Types::Bridge___registerTypeMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "RegisterUnoType", "(Ljava/lang/String;J)V");
    ::app::Android::Base::Types::Bridge___registerFallbackMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "RegisterUnoFallback", "(Ljava/lang/String;J)V");
    ::app::Android::Base::Types::Bridge___javaToUnoMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "JavaToUnoType", "(Ljava/lang/Object;JZ)J");
    ::app::Android::Base::Types::Bridge___unoToJavaMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "UnoToJavaType", "(J)Ljava/lang/Class;");
    
    if ((!::app::Android::Base::Types::Bridge___registerTypeMid) || (!::app::Android::Base::Types::Bridge___registerFallbackMid) || (!::app::Android::Base::Types::Bridge___javaToUnoMid) || (!::app::Android::Base::Types::Bridge___unoToJavaMid)) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache methods for UnoHelper", 37)));
    }
    ::app::Android::Base::Types::Bridge___inited = true;
}

::uType* Bridge__JavaToUnoType(::uStatic* __this, jobject javaObj, ::uType* fallbackType, bool typeHasFallbackClass)
{
    if (!Bridge___inited)
    {
        Bridge__Init(NULL);
    }

    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    ::uType* result = (::uType*)jni->CallStaticLongMethod(Bridge___helperCls, Bridge___javaToUnoMid, javaObj, (jlong)fallbackType, (jboolean)typeHasFallbackClass);
    ::app::Uno::Exception* excep = ::app::Android::Base::JNI__TryGetException(NULL, jni, NULL);

    if (excep != NULL)
    {
        jmethodID grabClass = jni->GetMethodID(jni->FindClass("java/lang/Object"), "getClass", "()Ljava/lang/Class;");
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject cls = jni->CallObjectMethod(javaObj, grabClass);
        jobject estring = (jobject)jni->CallObjectMethod(cls, toString);
        ::uString* x = ::app::Android::Base::Types::String__JavaToUno_2(NULL, estring);
        excep = ::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Uno::Exception*>(excep)->Message(), ::uGetConstString("\nTried to find uno class for java type ")), x), ::uGetConstString("\n")));
        U_THROW(excep);
    }

    return result;
}

void Bridge__RegisterUnoFallback(::uStatic* __this, const char* typeName_, int nameLen_, ::uType* typePtr_)
{
    if (!::app::Android::Base::Types::Bridge___inited) { ::app::Android::Base::Types::Bridge__Init(NULL); }
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(::app::Android::Base::Types::Bridge___helperCls, ::app::Android::Base::Types::Bridge___registerFallbackMid, javaTypeName, ((jlong)typePtr_));
    ::app::Android::Base::JNI__CheckException_1(NULL, jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

void Bridge__RegisterUnoType(::uStatic* __this, const char* typeName_, int nameLen_, ::uType* typePtr_)
{
    if (!::app::Android::Base::Types::Bridge___inited) { ::app::Android::Base::Types::Bridge__Init(NULL); }
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(::app::Android::Base::Types::Bridge___helperCls, ::app::Android::Base::Types::Bridge___registerTypeMid, javaTypeName, ((jlong)typePtr_));
    ::app::Android::Base::JNI__CheckException_1(NULL, jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

void Bridge__SetWrapperType(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, ::uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_)
{
    if (!wrapper_) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Trying to set type of null object",33)));
    } else if ((!obj_) && resolveType_) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Have requested to infer type from jobject but jobject is null",61)));
    } else {
        if (typePtr_) {
            wrapper_->__obj_type = typePtr_;
        }
        if (obj_ && resolveType_) {
            wrapper_->__obj_type = ((uType*)::app::Android::Base::Types::Bridge__JavaToUnoType(NULL, obj_, wrapper_->__obj_type, typeHasFallbackClass_));
        }
    }
}

jclass Bridge__UnoToJavaType(::uStatic* __this, ::uType* unoTypePtr)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jclass result = (jclass)jni->CallStaticObjectMethod(Bridge___helperCls, Bridge___registerFallbackMid, (jlong)unoTypePtr);
    ::app::Uno::Exception* excep = ::app::Android::Base::JNI__TryGetException(NULL, jni, NULL);

    if (excep != NULL)
    {
        excep = ::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Uno::Exception*>(excep)->Message(), ::uGetConstString(" !!!test!!!")));
        U_THROW(excep);
    }

    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ByteBuffer__uType* ByteBuffer__typeof()
{
    static ::uStaticStrong<ByteBuffer__uType*> type;
    if (type != NULL) return type;

    type = (ByteBuffer__uType*)::uAllocClassType(sizeof(ByteBuffer__uType), "Android.Base.Types.ByteBuffer");

    type->SetFunctions(7,
        ::uNewFunction("GetDirectBufferAddress", ByteBuffer__GetDirectBufferAddress, 0, true, ::app::Uno::IntPtr__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetDirectBufferCapacity", ByteBuffer__GetDirectBufferCapacity, 0, true, ::app::Uno::Long__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("NewDirectByteBuffer", ByteBuffer__NewDirectByteBuffer, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("NewDirectByteBuffer", ByteBuffer__NewDirectByteBuffer_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::uGetArrayType(::app::Uno::SByte__typeof())),
        ::uNewFunction("NewDirectByteBuffer", ByteBuffer__NewDirectByteBuffer_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("ValidDirectByteBuffer", ByteBuffer__ValidDirectByteBuffer, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("WrappedToUnoDirect", ByteBuffer__WrappedToUnoDirect, 0, true, ::app::Uno::Runtime::Implementation::DirectBuffer__typeof(), ::app::Android::Base::Wrappers::JWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void* ByteBuffer__GetDirectBufferAddress(::uStatic* __this, jobject directByteBuffer_)
{
    if (!directByteBuffer_) return NULL;
    return (void*)::app::Android::Base::JNI__GetEnvPtr(NULL)->GetDirectBufferAddress(directByteBuffer_);
}

::uLong ByteBuffer__GetDirectBufferCapacity(::uStatic* __this, jobject directByteBuffer_)
{
    return (::uLong)::app::Android::Base::JNI__GetEnvPtr(NULL)->GetDirectBufferCapacity(directByteBuffer_);
}

jobject ByteBuffer__NewDirectByteBuffer(::uStatic* __this, ::uArray* data_)
{
    if (!data_) return NULL;
    return ::app::Android::Base::JNI__GetEnvPtr(NULL)->NewDirectByteBuffer(data_->Ptr(), (jlong)data_->Length());
}

jobject ByteBuffer__NewDirectByteBuffer_1(::uStatic* __this, ::uArray* data_)
{
    if (!data_) return NULL;
    return ::app::Android::Base::JNI__GetEnvPtr(NULL)->NewDirectByteBuffer(data_->Ptr(), (jlong)data_->Length());
}

jobject ByteBuffer__NewDirectByteBuffer_2(::uStatic* __this, void* data_, ::uLong capacity_)
{
    if (!data_) return NULL;
    return ::app::Android::Base::JNI__GetEnvPtr(NULL)->NewDirectByteBuffer(data_, (jlong)capacity_);
}

bool ByteBuffer__ValidDirectByteBuffer(::uStatic* __this, jobject directByteBuffer_)
{
    return (::app::Android::Base::JNI__GetEnvPtr(NULL)->GetDirectBufferAddress(directByteBuffer_) != NULL);
}

::app::Uno::Runtime::Implementation::DirectBuffer* ByteBuffer__WrappedToUnoDirect(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* directByteBuffer)
{
    jobject obj = ::uPtr< ::app::Android::Base::Wrappers::JWrapper*>(directByteBuffer)->_GetJavaObject();
    void* addr = ByteBuffer__GetDirectBufferAddress(NULL, obj);
    ::uLong len = ByteBuffer__GetDirectBufferCapacity(NULL, obj);
    return ::app::Uno::Runtime::Implementation::DirectBuffer__Create_1(NULL, addr, len, (::uObject*)directByteBuffer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

String__uType* String__typeof()
{
    static ::uStaticStrong<String__uType*> type;
    if (type != NULL) return type;

    type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Android.Base.Types.String");

    type->SetFunctions(5,
        ::uNewFunction("JavaToUno", String__JavaToUno, 0, true, ::app::Uno::String__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("JavaToUno", String__JavaToUno_1, 0, true, ::app::Uno::String__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("JavaToUno", String__JavaToUno_2, 0, true, ::app::Uno::String__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("UnoToJava", String__UnoToJava, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("UnoToJava", String__UnoToJava_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::uString* String__JavaToUno(::uStatic* __this, ::uObject* jstr)
{
    if (jstr != NULL)
    {
        return String__JavaToUno_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(jstr)));
    }
    else
    {
        return NULL;
    }
}

::uString* String__JavaToUno_1(::uStatic* __this, JNIEnv* jni_, jobject jstr_)
{
    if (!jstr_) { return NULL; }
    jobject str = jni_->NewLocalRef(jstr_);
    const jchar* raw =  jni_->GetStringChars((jstring)str, NULL);
    int len = jni_->GetStringLength((jstring)str);
    int size = len * sizeof(jchar);
    uString* result = ::uAllocString(len);
    memcpy(result->_ptr, (void*)raw, size);
    jni_->ReleaseStringChars((jstring)str, raw);
    jni_->DeleteLocalRef(str);
    return result;
}

::uString* String__JavaToUno_2(::uStatic* __this, jobject jstr)
{
    if (::app::Android::Base::Primitives::ujobject__op_Inequality(NULL, jstr, ::app::Android::Base::Primitives::ujobject__get_Null(NULL)))
    {
        return String__JavaToUno_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), jstr);
    }
    else
    {
        return NULL;
    }
}

jobject String__UnoToJava(::uStatic* __this, JNIEnv* jni_, ::uString* str_)
{
    return (jobject)(jni_->NewString(str_->_ptr, str_->_len));
}

jobject String__UnoToJava_1(::uStatic* __this, ::uString* str)
{
    if (::app::Uno::String__op_Inequality(NULL, str, NULL))
    {
        return String__UnoToJava(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), str);
    }
    else
    {
        return ::app::Android::Base::Primitives::ujobject__get_Null(NULL);
    }
}

}}}}
