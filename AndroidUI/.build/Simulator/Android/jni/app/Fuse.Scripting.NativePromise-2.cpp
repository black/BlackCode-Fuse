#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.FactoryClosure__bool.h>
#include <app/Fuse.Scripting.FactoryClosure__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.FactoryClosure__string.h>
#include <app/Fuse.Scripting.FutureFactory__bool.h>
#include <app/Fuse.Scripting.FutureFactory__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.FutureFactory__string.h>
#include <app/Fuse.Scripting.NativePromise__bool__bool.h>
#include <app/Fuse.Scripting.NativePromise__Fuse_Camera_PictureResult__Fuse_S-92fa740c.h>
#include <app/Fuse.Scripting.NativePromise__string__string.h>
#include <app/Fuse.Scripting.NativePromise2_ContextClosure__bool__bool.h>
#include <app/Fuse.Scripting.NativePromise2_ContextClosure__Fuse_Camera_Pictu-4f9ced6d.h>
#include <app/Fuse.Scripting.NativePromise2_ContextClosure__string__string.h>
#include <app/Fuse.Scripting.ResultConverter__bool__bool.h>
#include <app/Fuse.Scripting.ResultConverter__Fuse_Camera_PictureResult__Fuse-a3f014a.h>
#include <app/Fuse.Scripting.ResultConverter__string__string.h>
#include <app/Fuse.Scripting.ResultFactory__bool.h>
#include <app/Fuse.Scripting.ResultFactory__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.ResultFactory__string.h>
#include <app/Uno.Action.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Future__string.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>
#include <app/Uno.Threading.Thread.h>

namespace app {
namespace Fuse {
namespace Scripting {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise__bool__bool__uType* NativePromise__bool__bool__typeof()
{
    static ::uStaticStrong<NativePromise__bool__bool__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise__bool__bool__uType*)::uAllocClassType(sizeof(NativePromise__bool__bool__uType), "Fuse.Scripting.NativePromise<bool,bool>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeMember__typeof());
    type->__fp_CreateObject = (::uObject*(*)(::app::Fuse::Scripting::NativeMember*, ::app::Fuse::Scripting::Context*))NativePromise__bool__bool__CreateObject;

    type->SetStrongRefs(
        "_func", offsetof(NativePromise__bool__bool, _func),
        "_futureFactory", offsetof(NativePromise__bool__bool, _futureFactory),
        "_resultConverter", offsetof(NativePromise__bool__bool, _resultConverter));

    type->SetFields(3,
        ::uNewField("_func", NULL, offsetof(NativePromise__bool__bool, _func), ::app::Fuse::Scripting::ResultFactory__bool__typeof()),
        ::uNewField("_futureFactory", NULL, offsetof(NativePromise__bool__bool, _futureFactory), ::app::Fuse::Scripting::FutureFactory__bool__typeof()),
        ::uNewField("_resultConverter", NULL, offsetof(NativePromise__bool__bool, _resultConverter), ::app::Fuse::Scripting::ResultConverter__bool__bool__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", NativePromise__bool__bool__New_1, 0, true, NativePromise__bool__bool__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Scripting::FutureFactory__bool__typeof(), ::app::Fuse::Scripting::ResultConverter__bool__bool__typeof()),
        ::uNewFunction(".ctor", NativePromise__bool__bool__New_2, 0, true, NativePromise__bool__bool__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Scripting::ResultFactory__bool__typeof(), ::app::Fuse::Scripting::ResultConverter__bool__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativePromise__bool__bool___ObjInit_1(NativePromise__bool__bool* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_futureFactory = futureFactory;
    __this->_resultConverter = resultConverter;
}

void NativePromise__bool__bool___ObjInit_2(NativePromise__bool__bool* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_func = func;
    __this->_futureFactory = ::uNewDelegateNonVirt(::app::Fuse::Scripting::FutureFactory__bool__typeof(), (const void*)NativePromise__bool__bool__Factory, __this);
    __this->_resultConverter = resultConverter;
}

::uObject* NativePromise__bool__bool__CreateObject(NativePromise__bool__bool* __this, ::app::Fuse::Scripting::Context* c)
{
    return (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativePromise2_ContextClosure__bool__bool__CreatePromise, ::app::Fuse::Scripting::NativePromise2_ContextClosure__bool__bool__New_1(NULL, c, __this->_futureFactory, __this->_resultConverter));
}

::app::Uno::Threading::Future__bool* NativePromise__bool__bool__Factory(NativePromise__bool__bool* __this, ::uArray* args)
{
    ::app::Uno::Threading::Promise__bool* future = ::app::Uno::Threading::Promise__bool__New_1(NULL);
    ::uPtr< ::app::Uno::Threading::Thread*>(::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Scripting::FactoryClosure__bool__Run, ::app::Fuse::Scripting::FactoryClosure__bool__New_1(NULL, __this->_func, args, future))))->Start();
    return (::app::Uno::Threading::Future__bool*)future;
}

NativePromise__bool__bool* NativePromise__bool__bool__New_1(::uStatic* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter)
{
    NativePromise__bool__bool* inst = (NativePromise__bool__bool*)::uAllocObject(sizeof(NativePromise__bool__bool), NativePromise__bool__bool__typeof());
    inst->_ObjInit_1(name, futureFactory, resultConverter);
    return inst;
}

NativePromise__bool__bool* NativePromise__bool__bool__New_2(::uStatic* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter)
{
    NativePromise__bool__bool* inst = (NativePromise__bool__bool*)::uAllocObject(sizeof(NativePromise__bool__bool), NativePromise__bool__bool__typeof());
    inst->_ObjInit_2(name, func, resultConverter);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()
{
    static ::uStaticStrong<NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType*)::uAllocClassType(sizeof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType), "Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult,Fuse.Scripting.Object>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeMember__typeof());
    type->__fp_CreateObject = (::uObject*(*)(::app::Fuse::Scripting::NativeMember*, ::app::Fuse::Scripting::Context*))NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__CreateObject;

    type->SetStrongRefs(
        "_func", offsetof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _func),
        "_futureFactory", offsetof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _futureFactory),
        "_resultConverter", offsetof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _resultConverter));

    type->SetFields(3,
        ::uNewField("_func", NULL, offsetof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _func), ::app::Fuse::Scripting::ResultFactory__Fuse_Camera_PictureResult__typeof()),
        ::uNewField("_futureFactory", NULL, offsetof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _futureFactory), ::app::Fuse::Scripting::FutureFactory__Fuse_Camera_PictureResult__typeof()),
        ::uNewField("_resultConverter", NULL, offsetof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _resultConverter), ::app::Fuse::Scripting::ResultConverter__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1, 0, true, NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Scripting::FutureFactory__Fuse_Camera_PictureResult__typeof(), ::app::Fuse::Scripting::ResultConverter__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()),
        ::uNewFunction(".ctor", NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_2, 0, true, NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Scripting::ResultFactory__Fuse_Camera_PictureResult__typeof(), ::app::Fuse::Scripting::ResultConverter__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit_1(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_futureFactory = futureFactory;
    __this->_resultConverter = resultConverter;
}

void NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit_2(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_func = func;
    __this->_futureFactory = ::uNewDelegateNonVirt(::app::Fuse::Scripting::FutureFactory__Fuse_Camera_PictureResult__typeof(), (const void*)NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Factory, __this);
    __this->_resultConverter = resultConverter;
}

::uObject* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__CreateObject(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Scripting::Context* c)
{
    return (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__CreatePromise, ::app::Fuse::Scripting::NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(NULL, c, __this->_futureFactory, __this->_resultConverter));
}

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Factory(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uArray* args)
{
    ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* future = ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__New_1(NULL);
    ::uPtr< ::app::Uno::Threading::Thread*>(::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Scripting::FactoryClosure__Fuse_Camera_PictureResult__Run, ::app::Fuse::Scripting::FactoryClosure__Fuse_Camera_PictureResult__New_1(NULL, __this->_func, args, future))))->Start();
    return (::app::Uno::Threading::Future__Fuse_Camera_PictureResult*)future;
}

NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(::uStatic* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter)
{
    NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* inst = (NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object*)::uAllocObject(sizeof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object), NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof());
    inst->_ObjInit_1(name, futureFactory, resultConverter);
    return inst;
}

NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_2(::uStatic* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter)
{
    NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* inst = (NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object*)::uAllocObject(sizeof(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object), NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof());
    inst->_ObjInit_2(name, func, resultConverter);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise__string__string__uType* NativePromise__string__string__typeof()
{
    static ::uStaticStrong<NativePromise__string__string__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise__string__string__uType*)::uAllocClassType(sizeof(NativePromise__string__string__uType), "Fuse.Scripting.NativePromise<string,string>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeMember__typeof());
    type->__fp_CreateObject = (::uObject*(*)(::app::Fuse::Scripting::NativeMember*, ::app::Fuse::Scripting::Context*))NativePromise__string__string__CreateObject;

    type->SetStrongRefs(
        "_func", offsetof(NativePromise__string__string, _func),
        "_futureFactory", offsetof(NativePromise__string__string, _futureFactory),
        "_resultConverter", offsetof(NativePromise__string__string, _resultConverter));

    type->SetFields(3,
        ::uNewField("_func", NULL, offsetof(NativePromise__string__string, _func), ::app::Fuse::Scripting::ResultFactory__string__typeof()),
        ::uNewField("_futureFactory", NULL, offsetof(NativePromise__string__string, _futureFactory), ::app::Fuse::Scripting::FutureFactory__string__typeof()),
        ::uNewField("_resultConverter", NULL, offsetof(NativePromise__string__string, _resultConverter), ::app::Fuse::Scripting::ResultConverter__string__string__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", NativePromise__string__string__New_1, 0, true, NativePromise__string__string__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Scripting::FutureFactory__string__typeof(), ::app::Fuse::Scripting::ResultConverter__string__string__typeof()),
        ::uNewFunction(".ctor", NativePromise__string__string__New_2, 0, true, NativePromise__string__string__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Scripting::ResultFactory__string__typeof(), ::app::Fuse::Scripting::ResultConverter__string__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativePromise__string__string___ObjInit_1(NativePromise__string__string* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_futureFactory = futureFactory;
    __this->_resultConverter = resultConverter;
}

void NativePromise__string__string___ObjInit_2(NativePromise__string__string* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_func = func;
    __this->_futureFactory = ::uNewDelegateNonVirt(::app::Fuse::Scripting::FutureFactory__string__typeof(), (const void*)NativePromise__string__string__Factory, __this);
    __this->_resultConverter = resultConverter;
}

::uObject* NativePromise__string__string__CreateObject(NativePromise__string__string* __this, ::app::Fuse::Scripting::Context* c)
{
    return (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativePromise2_ContextClosure__string__string__CreatePromise, ::app::Fuse::Scripting::NativePromise2_ContextClosure__string__string__New_1(NULL, c, __this->_futureFactory, __this->_resultConverter));
}

::app::Uno::Threading::Future__string* NativePromise__string__string__Factory(NativePromise__string__string* __this, ::uArray* args)
{
    ::app::Uno::Threading::Promise__string* future = ::app::Uno::Threading::Promise__string__New_1(NULL);
    ::uPtr< ::app::Uno::Threading::Thread*>(::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Scripting::FactoryClosure__string__Run, ::app::Fuse::Scripting::FactoryClosure__string__New_1(NULL, __this->_func, args, future))))->Start();
    return (::app::Uno::Threading::Future__string*)future;
}

NativePromise__string__string* NativePromise__string__string__New_1(::uStatic* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter)
{
    NativePromise__string__string* inst = (NativePromise__string__string*)::uAllocObject(sizeof(NativePromise__string__string), NativePromise__string__string__typeof());
    inst->_ObjInit_1(name, futureFactory, resultConverter);
    return inst;
}

NativePromise__string__string* NativePromise__string__string__New_2(::uStatic* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter)
{
    NativePromise__string__string* inst = (NativePromise__string__string*)::uAllocObject(sizeof(NativePromise__string__string), NativePromise__string__string__typeof());
    inst->_ObjInit_2(name, func, resultConverter);
    return inst;
}

}}}
