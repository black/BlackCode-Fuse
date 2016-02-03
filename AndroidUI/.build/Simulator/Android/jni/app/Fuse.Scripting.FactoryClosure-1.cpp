#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Scripting.FactoryClosure__bool.h>
#include <app/Fuse.Scripting.FactoryClosure__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.FactoryClosure__string.h>
#include <app/Fuse.Scripting.ResultFactory__bool.h>
#include <app/Fuse.Scripting.ResultFactory__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.ResultFactory__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Fuse {
namespace Scripting {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FactoryClosure__bool__uType* FactoryClosure__bool__typeof()
{
    static ::uStaticStrong<FactoryClosure__bool__uType*> type;
    if (type != NULL) return type;

    type = (FactoryClosure__bool__uType*)::uAllocClassType(sizeof(FactoryClosure__bool__uType), "Fuse.Scripting.FactoryClosure<bool>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_args", offsetof(FactoryClosure__bool, _args),
        "_factory", offsetof(FactoryClosure__bool, _factory),
        "_promise", offsetof(FactoryClosure__bool, _promise));

    return type;
}

void FactoryClosure__bool___ObjInit(FactoryClosure__bool* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__bool* promise)
{
    __this->_factory = factory;
    __this->_args = args;
    __this->_promise = promise;
}

FactoryClosure__bool* FactoryClosure__bool__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__bool* promise)
{
    FactoryClosure__bool* inst = (FactoryClosure__bool*)::uAllocObject(sizeof(FactoryClosure__bool), FactoryClosure__bool__typeof());
    inst->_ObjInit(factory, args, promise);
    return inst;
}

void FactoryClosure__bool__Run(FactoryClosure__bool* __this)
{
    bool res = 0;

    try
    {
        res = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< bool, ::uArray*>(__this->_args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__bool*>(__this->_promise)->Reject(e);
            return;
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Promise__bool*>(__this->_promise)->Resolve(res);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FactoryClosure__Fuse_Camera_PictureResult__uType* FactoryClosure__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong<FactoryClosure__Fuse_Camera_PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (FactoryClosure__Fuse_Camera_PictureResult__uType*)::uAllocClassType(sizeof(FactoryClosure__Fuse_Camera_PictureResult__uType), "Fuse.Scripting.FactoryClosure<Fuse.Camera.PictureResult>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_args", offsetof(FactoryClosure__Fuse_Camera_PictureResult, _args),
        "_factory", offsetof(FactoryClosure__Fuse_Camera_PictureResult, _factory),
        "_promise", offsetof(FactoryClosure__Fuse_Camera_PictureResult, _promise));

    return type;
}

void FactoryClosure__Fuse_Camera_PictureResult___ObjInit(FactoryClosure__Fuse_Camera_PictureResult* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* promise)
{
    __this->_factory = factory;
    __this->_args = args;
    __this->_promise = promise;
}

FactoryClosure__Fuse_Camera_PictureResult* FactoryClosure__Fuse_Camera_PictureResult__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* promise)
{
    FactoryClosure__Fuse_Camera_PictureResult* inst = (FactoryClosure__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(FactoryClosure__Fuse_Camera_PictureResult), FactoryClosure__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit(factory, args, promise);
    return inst;
}

void FactoryClosure__Fuse_Camera_PictureResult__Run(FactoryClosure__Fuse_Camera_PictureResult* __this)
{
    ::app::Fuse::Camera::PictureResult* res = NULL;

    try
    {
        res = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< ::app::Fuse::Camera::PictureResult*, ::uArray*>(__this->_args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_promise)->Reject(e);
            return;
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_promise)->Resolve(res);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FactoryClosure__string__uType* FactoryClosure__string__typeof()
{
    static ::uStaticStrong<FactoryClosure__string__uType*> type;
    if (type != NULL) return type;

    type = (FactoryClosure__string__uType*)::uAllocClassType(sizeof(FactoryClosure__string__uType), "Fuse.Scripting.FactoryClosure<string>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_args", offsetof(FactoryClosure__string, _args),
        "_factory", offsetof(FactoryClosure__string, _factory),
        "_promise", offsetof(FactoryClosure__string, _promise));

    return type;
}

void FactoryClosure__string___ObjInit(FactoryClosure__string* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise)
{
    __this->_factory = factory;
    __this->_args = args;
    __this->_promise = promise;
}

FactoryClosure__string* FactoryClosure__string__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise)
{
    FactoryClosure__string* inst = (FactoryClosure__string*)::uAllocObject(sizeof(FactoryClosure__string), FactoryClosure__string__typeof());
    inst->_ObjInit(factory, args, promise);
    return inst;
}

void FactoryClosure__string__Run(FactoryClosure__string* __this)
{
    ::uString* res = NULL;

    try
    {
        res = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< ::uString*, ::uArray*>(__this->_args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__string*>(__this->_promise)->Reject(e);
            return;
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Promise__string*>(__this->_promise)->Resolve(res);
}

}}}
