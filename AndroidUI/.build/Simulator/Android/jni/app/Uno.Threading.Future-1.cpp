#include <app/Fuse.Camera.PictureResult.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Queue__Uno_Action_bool_.h>
#include <app/Uno.Collections.Queue__Uno_Action_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue__Uno_Action_string_.h>
#include <app/Uno.Collections.Queue__Uno_Action_Uno_Exception_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_bool_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_string_.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Future__string.h>
#include <app/Uno.Threading.Future1_Closure__bool__bool.h>
#include <app/Uno.Threading.Future1_Closure__bool__Uno_Exception.h>
#include <app/Uno.Threading.Future1_Closure__Fuse_Camera_PictureResult__Fuse_-d4c36d5e.h>
#include <app/Uno.Threading.Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception.h>
#include <app/Uno.Threading.Future1_Closure__string__string.h>
#include <app/Uno.Threading.Future1_Closure__string__Uno_Exception.h>
#include <app/Uno.Threading.FutureState.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <app/Uno.Threading.Mutex.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>
#include <app/Uno.Threading.SyncDispatcher.h>

namespace app {
namespace Uno {
namespace Threading {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future__bool__uType* Future__bool__typeof()
{
    static ::uStaticStrong<Future__bool__uType*> type;
    if (type != NULL) return type;

    type = (Future__bool__uType*)::uAllocClassType(sizeof(Future__bool__uType), "Uno.Threading.Future<bool>", false, 0, 6, 0);

    type->SetBaseType(::app::Uno::Threading::Future__typeof());
    type->__fp_Cancel = (void(*)(::app::Uno::Threading::Future*, bool))Future__bool__Cancel;
    type->__fp_Wait = (void(*)(::app::Uno::Threading::Future*))Future__bool__Wait;

    type->SetStrongRefs(
        "_catchables", offsetof(Future__bool, _catchables),
        "_chainables", offsetof(Future__bool, _chainables),
        "_dispatcher", offsetof(Future__bool, _dispatcher),
        "_mutex", offsetof(Future__bool, _mutex),
        "_thenables", offsetof(Future__bool, _thenables),
        "Reason", offsetof(Future__bool, Reason));

    type->SetFields(7,
        ::uNewField("_catchables", NULL, offsetof(Future__bool, _catchables), ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___typeof()),
        ::uNewField("_chainables", NULL, offsetof(Future__bool, _chainables), ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool___typeof()),
        ::uNewField("_dispatcher", NULL, offsetof(Future__bool, _dispatcher), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewField("_mutex", NULL, offsetof(Future__bool, _mutex), ::app::Uno::Threading::Mutex__typeof()),
        ::uNewField("_thenables", NULL, offsetof(Future__bool, _thenables), ::app::Uno::Collections::Queue__Uno_Action_bool___typeof()),
        ::uNewField("Reason", NULL, offsetof(Future__bool, Reason), ::app::Uno::Exception__typeof()),
        ::uNewField("Result", NULL, offsetof(Future__bool, Result), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Catch", Future__bool__Catch, 0, false, Future__bool__typeof(), ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewFunction("Then", Future__bool__Then, 0, false, Future__bool__typeof(), ::app::Uno::Action__bool__typeof()),
        ::uNewFunction("Then", Future__bool__Then_1, 0, false, Future__bool__typeof(), ::app::Uno::Action__bool__typeof(), ::app::Uno::Action__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void Future__bool___ObjInit_1(Future__bool* __this)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_ObjInit_2((::uObject*)::app::Uno::Threading::SyncDispatcher__New_1(NULL));
}

void Future__bool___ObjInit_2(Future__bool* __this, ::uObject* dispatcher)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    ::app::Uno::Threading::Future___ObjInit(__this);

    if (dispatcher == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("dispatcher")));
    }

    __this->_dispatcher = dispatcher;
    __this->State(0);
    __this->_catchables = ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___New_1(NULL);
    __this->_chainables = ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool___New_1(NULL);
    __this->_thenables = ::app::Uno::Collections::Queue__Uno_Action_bool___New_1(NULL);
}

void Future__bool__Cancel(Future__bool* __this, bool shutdownGracefully)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented")));
}

Future__bool* Future__bool__Catch(Future__bool* __this, ::uDelegate* failure)
{
    return __this->Then_1(NULL, failure);
}

void Future__bool__InternalReject(Future__bool* __this, ::app::Uno::Exception* reason)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("This promise is already resolved or rejected")));
    }

    __this->State(2);
    __this->Reason = reason;

    try
    {
        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Count() != 0)
        {
            __this->Invoke__Uno_Exception(::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Dequeue(), reason);
        }

        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Count() != 0)
        {
            ::uPtr< ::app::Uno::Threading::Promise__bool*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Dequeue())->Reject(reason);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;

            while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Count() != 0)
            {
                ::uPtr< ::app::Uno::Threading::Promise__bool*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Dequeue())->Reject(exception);
            }
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void Future__bool__InternalResolve(Future__bool* __this, bool result)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("This promise is already resolved or rejected")));
    }

    __this->State(1);
    __this->Result = result;

    try
    {
        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_thenables)->Count() != 0)
        {
            __this->Invoke__bool(::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_thenables)->Dequeue(), result);
        }

        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Count() != 0)
        {
            ::uPtr< ::app::Uno::Threading::Promise__bool*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Dequeue())->Resolve(result);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;

            while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Count() != 0)
            {
                ::uPtr< ::app::Uno::Threading::Promise__bool*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Dequeue())->Reject(exception);
            }
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void Future__bool__Invoke__bool(Future__bool* __this, ::uDelegate* action, bool arg)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Threading::Future1_Closure__bool__bool__Run, ::app::Uno::Threading::Future1_Closure__bool__bool__New_1(NULL, action, arg)));
}

void Future__bool__Invoke__Uno_Exception(Future__bool* __this, ::uDelegate* action, ::app::Uno::Exception* arg)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Threading::Future1_Closure__bool__Uno_Exception__Run, ::app::Uno::Threading::Future1_Closure__bool__Uno_Exception__New_1(NULL, action, arg)));
}

Future__bool* Future__bool__Then(Future__bool* __this, ::uDelegate* action)
{
    return __this->Then_1(action, NULL);
}

Future__bool* Future__bool__Then_1(Future__bool* __this, ::uDelegate* fulfilled, ::uDelegate* rejected)
{
    ::app::Uno::Threading::Promise__bool* chainable = ::app::Uno::Threading::Promise__bool__New_1(NULL);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    try
    {
        if (__this->State() == 1)
        {
            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)fulfilled, NULL))
            {
                __this->Invoke__bool(fulfilled, __this->Result);
            }
        }
        else if (__this->State() == 2)
        {
            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)rejected, NULL))
            {
                __this->Invoke__Uno_Exception(rejected, __this->Reason);
            }
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_chainables)->Enqueue(chainable);

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)fulfilled, NULL))
            {
                ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_thenables)->Enqueue(fulfilled);
            }

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)rejected, NULL))
            {
                ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Enqueue(rejected);
            }
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__bool*>(chainable)->Reject(exception);
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    return ::uCast< Future__bool*>((::uObject*)chainable, Future__bool__typeof());
}

void Future__bool__Wait(Future__bool* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented")));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future__Fuse_Camera_PictureResult__uType* Future__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong<Future__Fuse_Camera_PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (Future__Fuse_Camera_PictureResult__uType*)::uAllocClassType(sizeof(Future__Fuse_Camera_PictureResult__uType), "Uno.Threading.Future<Fuse.Camera.PictureResult>", false, 0, 7, 0);

    type->SetBaseType(::app::Uno::Threading::Future__typeof());
    type->__fp_Cancel = (void(*)(::app::Uno::Threading::Future*, bool))Future__Fuse_Camera_PictureResult__Cancel;
    type->__fp_Wait = (void(*)(::app::Uno::Threading::Future*))Future__Fuse_Camera_PictureResult__Wait;

    type->SetStrongRefs(
        "_catchables", offsetof(Future__Fuse_Camera_PictureResult, _catchables),
        "_chainables", offsetof(Future__Fuse_Camera_PictureResult, _chainables),
        "_dispatcher", offsetof(Future__Fuse_Camera_PictureResult, _dispatcher),
        "_mutex", offsetof(Future__Fuse_Camera_PictureResult, _mutex),
        "_thenables", offsetof(Future__Fuse_Camera_PictureResult, _thenables),
        "Reason", offsetof(Future__Fuse_Camera_PictureResult, Reason),
        "Result", offsetof(Future__Fuse_Camera_PictureResult, Result));

    type->SetFields(7,
        ::uNewField("_catchables", NULL, offsetof(Future__Fuse_Camera_PictureResult, _catchables), ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___typeof()),
        ::uNewField("_chainables", NULL, offsetof(Future__Fuse_Camera_PictureResult, _chainables), ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()),
        ::uNewField("_dispatcher", NULL, offsetof(Future__Fuse_Camera_PictureResult, _dispatcher), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewField("_mutex", NULL, offsetof(Future__Fuse_Camera_PictureResult, _mutex), ::app::Uno::Threading::Mutex__typeof()),
        ::uNewField("_thenables", NULL, offsetof(Future__Fuse_Camera_PictureResult, _thenables), ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult___typeof()),
        ::uNewField("Reason", NULL, offsetof(Future__Fuse_Camera_PictureResult, Reason), ::app::Uno::Exception__typeof()),
        ::uNewField("Result", NULL, offsetof(Future__Fuse_Camera_PictureResult, Result), ::app::Fuse::Camera::PictureResult__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Catch", Future__Fuse_Camera_PictureResult__Catch, 0, false, Future__Fuse_Camera_PictureResult__typeof(), ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewFunction("Then", Future__Fuse_Camera_PictureResult__Then, 0, false, Future__Fuse_Camera_PictureResult__typeof(), ::app::Uno::Action__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction("Then", Future__Fuse_Camera_PictureResult__Then_1, 0, false, Future__Fuse_Camera_PictureResult__typeof(), ::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), ::app::Uno::Action__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void Future__Fuse_Camera_PictureResult___ObjInit_1(Future__Fuse_Camera_PictureResult* __this)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_ObjInit_2((::uObject*)::app::Uno::Threading::SyncDispatcher__New_1(NULL));
}

void Future__Fuse_Camera_PictureResult___ObjInit_2(Future__Fuse_Camera_PictureResult* __this, ::uObject* dispatcher)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    ::app::Uno::Threading::Future___ObjInit(__this);

    if (dispatcher == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("dispatcher")));
    }

    __this->_dispatcher = dispatcher;
    __this->State(0);
    __this->_catchables = ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___New_1(NULL);
    __this->_chainables = ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1(NULL);
    __this->_thenables = ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult___New_1(NULL);
}

void Future__Fuse_Camera_PictureResult__Cancel(Future__Fuse_Camera_PictureResult* __this, bool shutdownGracefully)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented")));
}

Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Catch(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* failure)
{
    return __this->Then_1(NULL, failure);
}

void Future__Fuse_Camera_PictureResult__InternalReject(Future__Fuse_Camera_PictureResult* __this, ::app::Uno::Exception* reason)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("This promise is already resolved or rejected")));
    }

    __this->State(2);
    __this->Reason = reason;

    try
    {
        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Count() != 0)
        {
            __this->Invoke__Uno_Exception(::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Dequeue(), reason);
        }

        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Count() != 0)
        {
            ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Dequeue())->Reject(reason);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;

            while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Count() != 0)
            {
                ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Dequeue())->Reject(exception);
            }
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void Future__Fuse_Camera_PictureResult__InternalResolve(Future__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("This promise is already resolved or rejected")));
    }

    __this->State(1);
    __this->Result = result;

    try
    {
        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_thenables)->Count() != 0)
        {
            __this->Invoke__Fuse_Camera_PictureResult(::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_thenables)->Dequeue(), result);
        }

        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Count() != 0)
        {
            ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Dequeue())->Resolve(result);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;

            while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Count() != 0)
            {
                ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Dequeue())->Reject(exception);
            }
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void Future__Fuse_Camera_PictureResult__Invoke__Fuse_Camera_PictureResult(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* arg)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Threading::Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__Run, ::app::Uno::Threading::Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__New_1(NULL, action, arg)));
}

void Future__Fuse_Camera_PictureResult__Invoke__Uno_Exception(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Uno::Exception* arg)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Threading::Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__Run, ::app::Uno::Threading::Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__New_1(NULL, action, arg)));
}

Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Then(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action)
{
    return __this->Then_1(action, NULL);
}

Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Then_1(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* fulfilled, ::uDelegate* rejected)
{
    ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* chainable = ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__New_1(NULL);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    try
    {
        if (__this->State() == 1)
        {
            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)fulfilled, NULL))
            {
                __this->Invoke__Fuse_Camera_PictureResult(fulfilled, __this->Result);
            }
        }
        else if (__this->State() == 2)
        {
            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)rejected, NULL))
            {
                __this->Invoke__Uno_Exception(rejected, __this->Reason);
            }
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_chainables)->Enqueue(chainable);

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)fulfilled, NULL))
            {
                ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_thenables)->Enqueue(fulfilled);
            }

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)rejected, NULL))
            {
                ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Enqueue(rejected);
            }
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(chainable)->Reject(exception);
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    return ::uCast< Future__Fuse_Camera_PictureResult*>((::uObject*)chainable, Future__Fuse_Camera_PictureResult__typeof());
}

void Future__Fuse_Camera_PictureResult__Wait(Future__Fuse_Camera_PictureResult* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented")));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future__string__uType* Future__string__typeof()
{
    static ::uStaticStrong<Future__string__uType*> type;
    if (type != NULL) return type;

    type = (Future__string__uType*)::uAllocClassType(sizeof(Future__string__uType), "Uno.Threading.Future<string>", false, 0, 7, 0);

    type->SetBaseType(::app::Uno::Threading::Future__typeof());
    type->__fp_Cancel = (void(*)(::app::Uno::Threading::Future*, bool))Future__string__Cancel;
    type->__fp_Wait = (void(*)(::app::Uno::Threading::Future*))Future__string__Wait;

    type->SetStrongRefs(
        "_catchables", offsetof(Future__string, _catchables),
        "_chainables", offsetof(Future__string, _chainables),
        "_dispatcher", offsetof(Future__string, _dispatcher),
        "_mutex", offsetof(Future__string, _mutex),
        "_thenables", offsetof(Future__string, _thenables),
        "Reason", offsetof(Future__string, Reason),
        "Result", offsetof(Future__string, Result));

    type->SetFields(7,
        ::uNewField("_catchables", NULL, offsetof(Future__string, _catchables), ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___typeof()),
        ::uNewField("_chainables", NULL, offsetof(Future__string, _chainables), ::app::Uno::Collections::Queue__Uno_Threading_Promise_string___typeof()),
        ::uNewField("_dispatcher", NULL, offsetof(Future__string, _dispatcher), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewField("_mutex", NULL, offsetof(Future__string, _mutex), ::app::Uno::Threading::Mutex__typeof()),
        ::uNewField("_thenables", NULL, offsetof(Future__string, _thenables), ::app::Uno::Collections::Queue__Uno_Action_string___typeof()),
        ::uNewField("Reason", NULL, offsetof(Future__string, Reason), ::app::Uno::Exception__typeof()),
        ::uNewField("Result", NULL, offsetof(Future__string, Result), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Catch", Future__string__Catch, 0, false, Future__string__typeof(), ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewFunction("Then", Future__string__Then, 0, false, Future__string__typeof(), ::app::Uno::Action__string__typeof()),
        ::uNewFunction("Then", Future__string__Then_1, 0, false, Future__string__typeof(), ::app::Uno::Action__string__typeof(), ::app::Uno::Action__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void Future__string___ObjInit_1(Future__string* __this)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_ObjInit_2((::uObject*)::app::Uno::Threading::SyncDispatcher__New_1(NULL));
}

void Future__string___ObjInit_2(Future__string* __this, ::uObject* dispatcher)
{
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    ::app::Uno::Threading::Future___ObjInit(__this);

    if (dispatcher == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("dispatcher")));
    }

    __this->_dispatcher = dispatcher;
    __this->State(0);
    __this->_catchables = ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___New_1(NULL);
    __this->_chainables = ::app::Uno::Collections::Queue__Uno_Threading_Promise_string___New_1(NULL);
    __this->_thenables = ::app::Uno::Collections::Queue__Uno_Action_string___New_1(NULL);
}

void Future__string__Cancel(Future__string* __this, bool shutdownGracefully)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented")));
}

Future__string* Future__string__Catch(Future__string* __this, ::uDelegate* failure)
{
    return __this->Then_1(NULL, failure);
}

void Future__string__InternalReject(Future__string* __this, ::app::Uno::Exception* reason)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("This promise is already resolved or rejected")));
    }

    __this->State(2);
    __this->Reason = reason;

    try
    {
        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Count() != 0)
        {
            __this->Invoke__Uno_Exception(::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Dequeue(), reason);
        }

        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Count() != 0)
        {
            ::uPtr< ::app::Uno::Threading::Promise__string*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Dequeue())->Reject(reason);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;

            while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Count() != 0)
            {
                ::uPtr< ::app::Uno::Threading::Promise__string*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Dequeue())->Reject(exception);
            }
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void Future__string__InternalResolve(Future__string* __this, ::uString* result)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("This promise is already resolved or rejected")));
    }

    __this->State(1);
    __this->Result = result;

    try
    {
        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_thenables)->Count() != 0)
        {
            __this->Invoke__string(::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_thenables)->Dequeue(), result);
        }

        while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Count() != 0)
        {
            ::uPtr< ::app::Uno::Threading::Promise__string*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Dequeue())->Resolve(result);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;

            while (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Count() != 0)
            {
                ::uPtr< ::app::Uno::Threading::Promise__string*>(::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Dequeue())->Reject(exception);
            }
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

void Future__string__Invoke__string(Future__string* __this, ::uDelegate* action, ::uString* arg)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Threading::Future1_Closure__string__string__Run, ::app::Uno::Threading::Future1_Closure__string__string__New_1(NULL, action, arg)));
}

void Future__string__Invoke__Uno_Exception(Future__string* __this, ::uDelegate* action, ::app::Uno::Exception* arg)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Threading::Future1_Closure__string__Uno_Exception__Run, ::app::Uno::Threading::Future1_Closure__string__Uno_Exception__New_1(NULL, action, arg)));
}

Future__string* Future__string__Then(Future__string* __this, ::uDelegate* action)
{
    return __this->Then_1(action, NULL);
}

Future__string* Future__string__Then_1(Future__string* __this, ::uDelegate* fulfilled, ::uDelegate* rejected)
{
    ::app::Uno::Threading::Promise__string* chainable = ::app::Uno::Threading::Promise__string__New_1(NULL);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();

    try
    {
        if (__this->State() == 1)
        {
            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)fulfilled, NULL))
            {
                __this->Invoke__string(fulfilled, __this->Result);
            }
        }
        else if (__this->State() == 2)
        {
            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)rejected, NULL))
            {
                __this->Invoke__Uno_Exception(rejected, __this->Reason);
            }
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_chainables)->Enqueue(chainable);

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)fulfilled, NULL))
            {
                ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_thenables)->Enqueue(fulfilled);
            }

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)rejected, NULL))
            {
                ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_catchables)->Enqueue(rejected);
            }
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* exception = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__string*>(chainable)->Reject(exception);
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    return ::uCast< Future__string*>((::uObject*)chainable, Future__string__typeof());
}

void Future__string__Wait(Future__string* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented")));
}

}}}
