#include <app/Fuse.Camera.PictureResult.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Uno {
namespace Threading {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Promise__bool__uType* Promise__bool__typeof()
{
    static ::uStaticStrong<Promise__bool__uType*> type;
    if (type != NULL) return type;

    type = (Promise__bool__uType*)::uAllocClassType(sizeof(Promise__bool__uType), "Uno.Threading.Promise<bool>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Future__bool__typeof());

    type->SetFunctions(6,
        ::uNewFunction(".ctor", Promise__bool__New_1, 0, true, Promise__bool__typeof()),
        ::uNewFunction(".ctor", Promise__bool__New_2, 0, true, Promise__bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", Promise__bool__New_3, 0, true, Promise__bool__typeof(), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewFunction(".ctor", Promise__bool__New_4, 0, true, Promise__bool__typeof(), ::app::Uno::Threading::IDispatcher__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Reject", Promise__bool__Reject, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("Resolve", Promise__bool__Resolve, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Promise__bool___ObjInit_3(Promise__bool* __this)
{
    ::app::Uno::Threading::Future__bool___ObjInit_1(__this);
}

void Promise__bool___ObjInit_4(Promise__bool* __this, bool result)
{
    ::app::Uno::Threading::Future__bool___ObjInit_1(__this);
    __this->Resolve(result);
}

void Promise__bool___ObjInit_5(Promise__bool* __this, ::uObject* dispatcher)
{
    ::app::Uno::Threading::Future__bool___ObjInit_2(__this, dispatcher);
}

void Promise__bool___ObjInit_6(Promise__bool* __this, ::uObject* dispatcher, bool result)
{
    ::app::Uno::Threading::Future__bool___ObjInit_2(__this, dispatcher);
    __this->Resolve(result);
}

Promise__bool* Promise__bool__New_1(::uStatic* __this)
{
    Promise__bool* inst = (Promise__bool*)::uAllocObject(sizeof(Promise__bool), Promise__bool__typeof());
    inst->_ObjInit_3();
    return inst;
}

Promise__bool* Promise__bool__New_2(::uStatic* __this, bool result)
{
    Promise__bool* inst = (Promise__bool*)::uAllocObject(sizeof(Promise__bool), Promise__bool__typeof());
    inst->_ObjInit_4(result);
    return inst;
}

Promise__bool* Promise__bool__New_3(::uStatic* __this, ::uObject* dispatcher)
{
    Promise__bool* inst = (Promise__bool*)::uAllocObject(sizeof(Promise__bool), Promise__bool__typeof());
    inst->_ObjInit_5(dispatcher);
    return inst;
}

Promise__bool* Promise__bool__New_4(::uStatic* __this, ::uObject* dispatcher, bool result)
{
    Promise__bool* inst = (Promise__bool*)::uAllocObject(sizeof(Promise__bool), Promise__bool__typeof());
    inst->_ObjInit_6(dispatcher, result);
    return inst;
}

void Promise__bool__Reject(Promise__bool* __this, ::app::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

void Promise__bool__Resolve(Promise__bool* __this, bool result)
{
    __this->InternalResolve(result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Promise__Fuse_Camera_PictureResult__uType* Promise__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong<Promise__Fuse_Camera_PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (Promise__Fuse_Camera_PictureResult__uType*)::uAllocClassType(sizeof(Promise__Fuse_Camera_PictureResult__uType), "Uno.Threading.Promise<Fuse.Camera.PictureResult>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof());

    type->SetFunctions(6,
        ::uNewFunction(".ctor", Promise__Fuse_Camera_PictureResult__New_1, 0, true, Promise__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction(".ctor", Promise__Fuse_Camera_PictureResult__New_2, 0, true, Promise__Fuse_Camera_PictureResult__typeof(), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewFunction(".ctor", Promise__Fuse_Camera_PictureResult__New_3, 0, true, Promise__Fuse_Camera_PictureResult__typeof(), ::app::Uno::Threading::IDispatcher__typeof(), ::app::Fuse::Camera::PictureResult__typeof()),
        ::uNewFunction(".ctor", Promise__Fuse_Camera_PictureResult__New_4, 0, true, Promise__Fuse_Camera_PictureResult__typeof(), ::app::Fuse::Camera::PictureResult__typeof()),
        ::uNewFunctionVoid("Reject", Promise__Fuse_Camera_PictureResult__Reject, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("Resolve", Promise__Fuse_Camera_PictureResult__Resolve, 0, false, ::app::Fuse::Camera::PictureResult__typeof()));

    ::uRegisterType(type);
    return type;
}

void Promise__Fuse_Camera_PictureResult___ObjInit_3(Promise__Fuse_Camera_PictureResult* __this)
{
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult___ObjInit_1(__this);
}

void Promise__Fuse_Camera_PictureResult___ObjInit_4(Promise__Fuse_Camera_PictureResult* __this, ::uObject* dispatcher)
{
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult___ObjInit_2(__this, dispatcher);
}

void Promise__Fuse_Camera_PictureResult___ObjInit_5(Promise__Fuse_Camera_PictureResult* __this, ::uObject* dispatcher, ::app::Fuse::Camera::PictureResult* result)
{
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult___ObjInit_2(__this, dispatcher);
    __this->Resolve(result);
}

void Promise__Fuse_Camera_PictureResult___ObjInit_6(Promise__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result)
{
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult___ObjInit_1(__this);
    __this->Resolve(result);
}

Promise__Fuse_Camera_PictureResult* Promise__Fuse_Camera_PictureResult__New_1(::uStatic* __this)
{
    Promise__Fuse_Camera_PictureResult* inst = (Promise__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(Promise__Fuse_Camera_PictureResult), Promise__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit_3();
    return inst;
}

Promise__Fuse_Camera_PictureResult* Promise__Fuse_Camera_PictureResult__New_2(::uStatic* __this, ::uObject* dispatcher)
{
    Promise__Fuse_Camera_PictureResult* inst = (Promise__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(Promise__Fuse_Camera_PictureResult), Promise__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit_4(dispatcher);
    return inst;
}

Promise__Fuse_Camera_PictureResult* Promise__Fuse_Camera_PictureResult__New_3(::uStatic* __this, ::uObject* dispatcher, ::app::Fuse::Camera::PictureResult* result)
{
    Promise__Fuse_Camera_PictureResult* inst = (Promise__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(Promise__Fuse_Camera_PictureResult), Promise__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit_5(dispatcher, result);
    return inst;
}

Promise__Fuse_Camera_PictureResult* Promise__Fuse_Camera_PictureResult__New_4(::uStatic* __this, ::app::Fuse::Camera::PictureResult* result)
{
    Promise__Fuse_Camera_PictureResult* inst = (Promise__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(Promise__Fuse_Camera_PictureResult), Promise__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit_6(result);
    return inst;
}

void Promise__Fuse_Camera_PictureResult__Reject(Promise__Fuse_Camera_PictureResult* __this, ::app::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

void Promise__Fuse_Camera_PictureResult__Resolve(Promise__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result)
{
    __this->InternalResolve(result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Promise__string__uType* Promise__string__typeof()
{
    static ::uStaticStrong<Promise__string__uType*> type;
    if (type != NULL) return type;

    type = (Promise__string__uType*)::uAllocClassType(sizeof(Promise__string__uType), "Uno.Threading.Promise<string>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Future__string__typeof());

    type->SetFunctions(6,
        ::uNewFunction(".ctor", Promise__string__New_1, 0, true, Promise__string__typeof()),
        ::uNewFunction(".ctor", Promise__string__New_2, 0, true, Promise__string__typeof(), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewFunction(".ctor", Promise__string__New_3, 0, true, Promise__string__typeof(), ::app::Uno::Threading::IDispatcher__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", Promise__string__New_4, 0, true, Promise__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Reject", Promise__string__Reject, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("Resolve", Promise__string__Resolve, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Promise__string___ObjInit_3(Promise__string* __this)
{
    ::app::Uno::Threading::Future__string___ObjInit_1(__this);
}

void Promise__string___ObjInit_4(Promise__string* __this, ::uObject* dispatcher)
{
    ::app::Uno::Threading::Future__string___ObjInit_2(__this, dispatcher);
}

void Promise__string___ObjInit_5(Promise__string* __this, ::uObject* dispatcher, ::uString* result)
{
    ::app::Uno::Threading::Future__string___ObjInit_2(__this, dispatcher);
    __this->Resolve(result);
}

void Promise__string___ObjInit_6(Promise__string* __this, ::uString* result)
{
    ::app::Uno::Threading::Future__string___ObjInit_1(__this);
    __this->Resolve(result);
}

Promise__string* Promise__string__New_1(::uStatic* __this)
{
    Promise__string* inst = (Promise__string*)::uAllocObject(sizeof(Promise__string), Promise__string__typeof());
    inst->_ObjInit_3();
    return inst;
}

Promise__string* Promise__string__New_2(::uStatic* __this, ::uObject* dispatcher)
{
    Promise__string* inst = (Promise__string*)::uAllocObject(sizeof(Promise__string), Promise__string__typeof());
    inst->_ObjInit_4(dispatcher);
    return inst;
}

Promise__string* Promise__string__New_3(::uStatic* __this, ::uObject* dispatcher, ::uString* result)
{
    Promise__string* inst = (Promise__string*)::uAllocObject(sizeof(Promise__string), Promise__string__typeof());
    inst->_ObjInit_5(dispatcher, result);
    return inst;
}

Promise__string* Promise__string__New_4(::uStatic* __this, ::uString* result)
{
    Promise__string* inst = (Promise__string*)::uAllocObject(sizeof(Promise__string), Promise__string__typeof());
    inst->_ObjInit_6(result);
    return inst;
}

void Promise__string__Reject(Promise__string* __this, ::app::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

void Promise__string__Resolve(Promise__string* __this, ::uString* result)
{
    __this->InternalResolve(result);
}

}}}
