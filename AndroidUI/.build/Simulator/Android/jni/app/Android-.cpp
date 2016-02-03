#include <app/Android.Bootstrapper.h>
#include <app/Android.Resources.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <BootstrapperImpl_Android.h>

namespace app {
namespace Android {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Bootstrapper__uType* Bootstrapper__typeof()
{
    static ::uStaticStrong<Bootstrapper__uType*> type;
    if (type != NULL) return type;

    type = (Bootstrapper__uType*)::uAllocClassType(sizeof(Bootstrapper__uType), "Android.Bootstrapper");

    type->SetFunctions(1,
        ::uNewFunctionVoid("_RegisterTypes", Bootstrapper___RegisterTypes, 0, true));

    ::uRegisterType(type);
    return type;
}

void Bootstrapper___RegisterTypes(::uStatic* __this)
{
    ::BootstrapperImpl();
}

void Bootstrapper___TypeInit(::uStatic* __this)
{
    Bootstrapper___RegisterTypes(NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Resources__uType* Resources__typeof()
{
    static ::uStaticStrong<Resources__uType*> type;
    if (type != NULL) return type;

    type = (Resources__uType*)::uAllocClassType(sizeof(Resources__uType), "Android.Resources");

    type->SetFunctions(1,
        ::uNewFunction("GetID", Resources__GetID, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

int Resources__GetID(::uStatic* __this, ::uString* path_)
{
    jclass cls = (jclass)JniHelper::GetActivityClass();
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    static jmethodID mtd = jni->GetStaticMethodID(cls, "ReflectR", "(Ljava/lang/String;)I");
    return jni->CallStaticIntMethod(cls,mtd,jni->NewString(path_->_ptr, path_->_len));
}

}}
