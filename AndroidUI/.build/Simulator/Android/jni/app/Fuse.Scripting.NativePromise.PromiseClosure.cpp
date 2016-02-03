#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.IDispatcher.h>
#include <app/Fuse.Scripting.NativePromise2_PromiseClosure__bool__bool.h>
#include <app/Fuse.Scripting.NativePromise2_PromiseClosure__Fuse_Camera_Pictu-68fe7780.h>
#include <app/Fuse.Scripting.NativePromise2_PromiseClosure__string__string.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ResultConverter__bool__bool.h>
#include <app/Fuse.Scripting.ResultConverter__Fuse_Camera_PictureResult__Fuse-a3f014a.h>
#include <app/Fuse.Scripting.ResultConverter__string__string.h>
#include <app/Fuse.Scripting.TaskPriority.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Future__string.h>

namespace app {
namespace Fuse {
namespace Scripting {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise2_PromiseClosure__bool__bool__uType* NativePromise2_PromiseClosure__bool__bool__typeof()
{
    static ::uStaticStrong<NativePromise2_PromiseClosure__bool__bool__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise2_PromiseClosure__bool__bool__uType*)::uAllocClassType(sizeof(NativePromise2_PromiseClosure__bool__bool__uType), "Fuse.Scripting.NativePromise<bool,bool>.PromiseClosure", false, 0, 5, 0);

    type->SetStrongRefs(
        "_c", offsetof(NativePromise2_PromiseClosure__bool__bool, _c),
        "_converter", offsetof(NativePromise2_PromiseClosure__bool__bool, _converter),
        "_promise", offsetof(NativePromise2_PromiseClosure__bool__bool, _promise),
        "_reject", offsetof(NativePromise2_PromiseClosure__bool__bool, _reject),
        "_resolve", offsetof(NativePromise2_PromiseClosure__bool__bool, _resolve));

    return type;
}

void NativePromise2_PromiseClosure__bool__bool___ObjInit(NativePromise2_PromiseClosure__bool__bool* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__bool* promise, ::uDelegate* converter)
{
    __this->_c = context;
    __this->_promise = promise;
    __this->_converter = converter;
}

void NativePromise2_PromiseClosure__bool__bool__InternalResolve(NativePromise2_PromiseClosure__bool__bool* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_converter, NULL))
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_resolve)->Call((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox(::app::Uno::Bool__typeof(), ::uPtr< ::uDelegate*>(__this->_converter)->Invoke< bool, ::app::Fuse::Scripting::Context*, bool>(__this->_c, __this->_result)), array_123));
    }
    else
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_resolve)->Call((array_124 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = ::uBox(::app::Uno::Bool__typeof(), __this->_result), array_124));
    }
}

NativePromise2_PromiseClosure__bool__bool* NativePromise2_PromiseClosure__bool__bool__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__bool* promise, ::uDelegate* converter)
{
    NativePromise2_PromiseClosure__bool__bool* inst = (NativePromise2_PromiseClosure__bool__bool*)::uAllocObject(sizeof(NativePromise2_PromiseClosure__bool__bool), NativePromise2_PromiseClosure__bool__bool__typeof());
    inst->_ObjInit(context, promise, converter);
    return inst;
}

void NativePromise2_PromiseClosure__bool__bool__Reject(NativePromise2_PromiseClosure__bool__bool* __this, ::app::Uno::Exception* reason)
{
    ::uArray* array_125;

    if (__this->_reject != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_reject)->Call((array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = (::uObject*)::uPtr< ::app::Uno::Exception*>(reason)->Message(), array_125));
    }
}

void NativePromise2_PromiseClosure__bool__bool__Resolve(NativePromise2_PromiseClosure__bool__bool* __this, bool result)
{
    __this->_result = result;

    if (__this->_resolve != NULL)
    {
        ::app::Fuse::Scripting::IDispatcher::Dispatch(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_c)->Dispatcher()), 0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativePromise2_PromiseClosure__bool__bool__InternalResolve, __this));
    }
}

::uObject* NativePromise2_PromiseClosure__bool__bool__Run(NativePromise2_PromiseClosure__bool__bool* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        __this->_resolve = ::uAs< ::app::Fuse::Scripting::Function*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Function__typeof());
    }

    if (args->Length() > 1)
    {
        __this->_reject = ::uAs< ::app::Fuse::Scripting::Function*>(args->Item< ::uObject*>(1), ::app::Fuse::Scripting::Function__typeof());
    }

    ::uPtr< ::app::Uno::Threading::Future__bool*>(__this->_promise)->Then_1(::uNewDelegateNonVirt(::app::Uno::Action__bool__typeof(), (const void*)NativePromise2_PromiseClosure__bool__bool__Resolve, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Exception__typeof(), (const void*)NativePromise2_PromiseClosure__bool__bool__Reject, __this));
    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()
{
    static ::uStaticStrong<NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType*)::uAllocClassType(sizeof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType), "Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult,Fuse.Scripting.Object>.PromiseClosure", false, 0, 6, 0);

    type->SetStrongRefs(
        "_c", offsetof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _c),
        "_converter", offsetof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _converter),
        "_promise", offsetof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _promise),
        "_reject", offsetof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _reject),
        "_resolve", offsetof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _resolve),
        "_result", offsetof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _result));

    return type;
}

void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* promise, ::uDelegate* converter)
{
    __this->_c = context;
    __this->_promise = promise;
    __this->_converter = converter;
}

void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__InternalResolve(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_converter, NULL))
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_resolve)->Call((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::uPtr< ::uDelegate*>(__this->_converter)->Invoke< ::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Context*, ::app::Fuse::Camera::PictureResult*>(__this->_c, __this->_result), array_123));
    }
    else
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_resolve)->Call((array_124 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = (::uObject*)__this->_result, array_124));
    }
}

NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* promise, ::uDelegate* converter)
{
    NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* inst = (NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object*)::uAllocObject(sizeof(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object), NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof());
    inst->_ObjInit(context, promise, converter);
    return inst;
}

void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Reject(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Uno::Exception* reason)
{
    ::uArray* array_125;

    if (__this->_reject != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_reject)->Call((array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = (::uObject*)::uPtr< ::app::Uno::Exception*>(reason)->Message(), array_125));
    }
}

void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Resolve(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Camera::PictureResult* result)
{
    __this->_result = result;

    if (__this->_resolve != NULL)
    {
        ::app::Fuse::Scripting::IDispatcher::Dispatch(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_c)->Dispatcher()), 0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__InternalResolve, __this));
    }
}

::uObject* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Run(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        __this->_resolve = ::uAs< ::app::Fuse::Scripting::Function*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Function__typeof());
    }

    if (args->Length() > 1)
    {
        __this->_reject = ::uAs< ::app::Fuse::Scripting::Function*>(args->Item< ::uObject*>(1), ::app::Fuse::Scripting::Function__typeof());
    }

    ::uPtr< ::app::Uno::Threading::Future__Fuse_Camera_PictureResult*>(__this->_promise)->Then_1(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), (const void*)NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Resolve, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Exception__typeof(), (const void*)NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Reject, __this));
    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise2_PromiseClosure__string__string__uType* NativePromise2_PromiseClosure__string__string__typeof()
{
    static ::uStaticStrong<NativePromise2_PromiseClosure__string__string__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise2_PromiseClosure__string__string__uType*)::uAllocClassType(sizeof(NativePromise2_PromiseClosure__string__string__uType), "Fuse.Scripting.NativePromise<string,string>.PromiseClosure", false, 0, 6, 0);

    type->SetStrongRefs(
        "_c", offsetof(NativePromise2_PromiseClosure__string__string, _c),
        "_converter", offsetof(NativePromise2_PromiseClosure__string__string, _converter),
        "_promise", offsetof(NativePromise2_PromiseClosure__string__string, _promise),
        "_reject", offsetof(NativePromise2_PromiseClosure__string__string, _reject),
        "_resolve", offsetof(NativePromise2_PromiseClosure__string__string, _resolve),
        "_result", offsetof(NativePromise2_PromiseClosure__string__string, _result));

    return type;
}

void NativePromise2_PromiseClosure__string__string___ObjInit(NativePromise2_PromiseClosure__string__string* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__string* promise, ::uDelegate* converter)
{
    __this->_c = context;
    __this->_promise = promise;
    __this->_converter = converter;
}

void NativePromise2_PromiseClosure__string__string__InternalResolve(NativePromise2_PromiseClosure__string__string* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_converter, NULL))
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_resolve)->Call((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::uPtr< ::uDelegate*>(__this->_converter)->Invoke< ::uString*, ::app::Fuse::Scripting::Context*, ::uString*>(__this->_c, __this->_result), array_123));
    }
    else
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_resolve)->Call((array_124 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = (::uObject*)__this->_result, array_124));
    }
}

NativePromise2_PromiseClosure__string__string* NativePromise2_PromiseClosure__string__string__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__string* promise, ::uDelegate* converter)
{
    NativePromise2_PromiseClosure__string__string* inst = (NativePromise2_PromiseClosure__string__string*)::uAllocObject(sizeof(NativePromise2_PromiseClosure__string__string), NativePromise2_PromiseClosure__string__string__typeof());
    inst->_ObjInit(context, promise, converter);
    return inst;
}

void NativePromise2_PromiseClosure__string__string__Reject(NativePromise2_PromiseClosure__string__string* __this, ::app::Uno::Exception* reason)
{
    ::uArray* array_125;

    if (__this->_reject != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_reject)->Call((array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = (::uObject*)::uPtr< ::app::Uno::Exception*>(reason)->Message(), array_125));
    }
}

void NativePromise2_PromiseClosure__string__string__Resolve(NativePromise2_PromiseClosure__string__string* __this, ::uString* result)
{
    __this->_result = result;

    if (__this->_resolve != NULL)
    {
        ::app::Fuse::Scripting::IDispatcher::Dispatch(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_c)->Dispatcher()), 0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativePromise2_PromiseClosure__string__string__InternalResolve, __this));
    }
}

::uObject* NativePromise2_PromiseClosure__string__string__Run(NativePromise2_PromiseClosure__string__string* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        __this->_resolve = ::uAs< ::app::Fuse::Scripting::Function*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Function__typeof());
    }

    if (args->Length() > 1)
    {
        __this->_reject = ::uAs< ::app::Fuse::Scripting::Function*>(args->Item< ::uObject*>(1), ::app::Fuse::Scripting::Function__typeof());
    }

    ::uPtr< ::app::Uno::Threading::Future__string*>(__this->_promise)->Then_1(::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)NativePromise2_PromiseClosure__string__string__Resolve, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Exception__typeof(), (const void*)NativePromise2_PromiseClosure__string__string__Reject, __this));
    return NULL;
}

}}}
