#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_java_io_InputStream.h>
#include <app/Android.java.io.FileDescriptor.h>
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>

namespace app {
namespace Android {
namespace java {
namespace io {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass FileDescriptor___javaClass_2;
jmethodID FileDescriptor__toString_29625_ID;

FileDescriptor__uType* FileDescriptor__typeof()
{
    static ::uStaticStrong<FileDescriptor__uType*> type;
    if (type != NULL) return type;

    type = (FileDescriptor__uType*)::uAllocClassType(sizeof(FileDescriptor__uType), "Android.java.io.FileDescriptor", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))FileDescriptor__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FileDescriptor__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FileDescriptor__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &FileDescriptor___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("toString_29625_ID", &FileDescriptor__toString_29625_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", FileDescriptor___Init_2, 0, true),
        ::uNewFunction("toString_IMPL_29625", FileDescriptor__toString_IMPL_29625, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void FileDescriptor___Init_2(::uStatic* __this)
{
    if (::app::Android::java::io::FileDescriptor___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::io::FileDescriptor___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/io/FileDescriptor"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::io::FileDescriptor___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.io.FileDescriptor'", 46);; }
}

::app::Android::java::lang::String* FileDescriptor__toString(FileDescriptor* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(FileDescriptor__toString_IMPL_29625(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* FileDescriptor__toString_IMPL_29625(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::io::FileDescriptor___javaClass_2,::app::Android::java::io::FileDescriptor___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::io::FileDescriptor__toString_29625_ID,::app::Android::java::io::FileDescriptor___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.io.FileDescriptor.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::io::FileDescriptor___javaClass_2, ::app::Android::java::io::FileDescriptor__toString_29625_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::io::FileDescriptor__toString_29625_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass InputStream___javaClass_2;
jmethodID InputStream__close_29700_ID;

InputStream__uType* InputStream__typeof()
{
    static ::uStaticStrong<InputStream__uType*> type;
    if (type != NULL) return type;

    type = (InputStream__uType*)::uAllocClassType(sizeof(InputStream__uType), "Android.java.io.InputStream", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(InputStream__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(InputStream__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &InputStream___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("close_29700_ID", &InputStream__close_29700_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", InputStream___Init_2, 0, true),
        ::uNewFunctionVoid("close", InputStream__close, 0, false),
        ::uNewFunctionVoid("close_IMPL_29700", InputStream__close_IMPL_29700, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void InputStream___Init_2(::uStatic* __this)
{
    if (::app::Android::java::io::InputStream___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::io::InputStream___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/io/InputStream"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::java::io::InputStream___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.io.InputStream'", 43);; }
}

void InputStream__close(InputStream* __this)
{
    InputStream__close_IMPL_29700(NULL, __this->_subclassed, __this->_javaObject);
}

void InputStream__close_IMPL_29700(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::io::InputStream___javaClass_2,::app::Android::java::io::InputStream___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::io::InputStream__close_29700_ID,::app::Android::java::io::InputStream___javaClass_2,"close","()V",GetMethodID,"Id for fallback method java.io.InputStream.close could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::io::InputStream___javaClass_2, ::app::Android::java::io::InputStream__close_29700_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::io::InputStream__close_29700_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

}}}}
