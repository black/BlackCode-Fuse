// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_io_InputStream.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace java{
namespace io{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\io\$.uno(3684)
// ----------------------------------------------------------------------

// public sealed extern class FileDescriptor :3684
// {
::g::Android::java::lang::Object_type* FileDescriptor_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FileDescriptor);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.io.FileDescriptor", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))FileDescriptor__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::io::FileDescriptor::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::io::FileDescriptor::toString_29625_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)FileDescriptor___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_29625", NULL, (void*)FileDescriptor__toString_IMPL_29625_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :3688
void FileDescriptor___Init2_fn()
{
    FileDescriptor::_Init2();
}

// public override sealed Android.java.lang.String toString() :3769
void FileDescriptor__toString_fn(FileDescriptor* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(FileDescriptor::toString_IMPL_29625(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_29625(bool arg0, Android.Base.Primitives.ujobject arg1) :3783
void FileDescriptor__toString_IMPL_29625_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = FileDescriptor::toString_IMPL_29625(*arg0_, *arg1_);
}

jclass FileDescriptor::_javaClass2_;
jmethodID FileDescriptor::toString_29625_ID_;

// public static extern new void _Init() [static] :3688
void FileDescriptor::_Init2()
{
    if (FileDescriptor::_javaClass2()) { return; }
    INIT_JNI;
    FileDescriptor::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/io/FileDescriptor"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!FileDescriptor::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.io.FileDescriptor'", 46);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_29625(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3783
uObject* FileDescriptor::toString_IMPL_29625(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FileDescriptor::_javaClass2(),FileDescriptor::_Init2());
    
    uObject* result;
    CACHE_METHOD(FileDescriptor::toString_29625_ID(),FileDescriptor::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.io.FileDescriptor.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, FileDescriptor::_javaClass2(), FileDescriptor::toString_29625_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, FileDescriptor::toString_29625_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\io\$.uno(530)
// ---------------------------------------------------------------------

// public abstract extern class InputStream :530
// {
::g::Android::java::lang::Object_type* InputStream_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InputStream);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.io.InputStream", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::io::InputStream::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::io::InputStream::close_29700_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)InputStream___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("close", NULL, (void*)InputStream__close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("close_IMPL_29700", NULL, (void*)InputStream__close_IMPL_29700_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :534
void InputStream___Init2_fn()
{
    InputStream::_Init2();
}

// public void close() :558
void InputStream__close_fn(InputStream* __this)
{
    __this->close();
}

// public static extern void close_IMPL_29700(bool arg0, Android.Base.Primitives.ujobject arg1) :608
void InputStream__close_IMPL_29700_fn(bool* arg0_, jobject* arg1_)
{
    InputStream::close_IMPL_29700(*arg0_, *arg1_);
}

jclass InputStream::_javaClass2_;
jmethodID InputStream::close_29700_ID_;

// public void close() [instance] :558
void InputStream::close()
{
    InputStream::close_IMPL_29700(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :534
void InputStream::_Init2()
{
    if (InputStream::_javaClass2()) { return; }
    INIT_JNI;
    InputStream::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/io/InputStream"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!InputStream::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.io.InputStream'", 43);; }
}

// public static extern void close_IMPL_29700(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :608
void InputStream::close_IMPL_29700(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(InputStream::_javaClass2(),InputStream::_Init2());
    
    CACHE_METHOD(InputStream::close_29700_ID(),InputStream::_javaClass2(),"close","()V",GetMethodID,"Id for fallback method java.io.InputStream.close could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, InputStream::_javaClass2(), InputStream::close_29700_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, InputStream::close_29700_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}}} // ::g::Android::java::io
