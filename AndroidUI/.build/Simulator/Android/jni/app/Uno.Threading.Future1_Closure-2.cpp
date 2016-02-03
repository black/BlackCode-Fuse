#include <app/Fuse.Camera.PictureResult.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future1_Closure__bool__bool.h>
#include <app/Uno.Threading.Future1_Closure__bool__Uno_Exception.h>
#include <app/Uno.Threading.Future1_Closure__Fuse_Camera_PictureResult__Fuse_-d4c36d5e.h>
#include <app/Uno.Threading.Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception.h>
#include <app/Uno.Threading.Future1_Closure__string__string.h>
#include <app/Uno.Threading.Future1_Closure__string__Uno_Exception.h>

namespace app {
namespace Uno {
namespace Threading {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future1_Closure__bool__bool__uType* Future1_Closure__bool__bool__typeof()
{
    static ::uStaticStrong<Future1_Closure__bool__bool__uType*> type;
    if (type != NULL) return type;

    type = (Future1_Closure__bool__bool__uType*)::uAllocClassType(sizeof(Future1_Closure__bool__bool__uType), "Uno.Threading.Future1_Closure<bool,bool>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_action", offsetof(Future1_Closure__bool__bool, _action));

    return type;
}

void Future1_Closure__bool__bool___ObjInit(Future1_Closure__bool__bool* __this, ::uDelegate* action, bool result)
{
    __this->_action = action;
    __this->_result = result;
}

Future1_Closure__bool__bool* Future1_Closure__bool__bool__New_1(::uStatic* __this, ::uDelegate* action, bool result)
{
    Future1_Closure__bool__bool* inst = (Future1_Closure__bool__bool*)::uAllocObject(sizeof(Future1_Closure__bool__bool), Future1_Closure__bool__bool__typeof());
    inst->_ObjInit(action, result);
    return inst;
}

void Future1_Closure__bool__bool__Run(Future1_Closure__bool__bool* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< bool>(__this->_result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future1_Closure__bool__Uno_Exception__uType* Future1_Closure__bool__Uno_Exception__typeof()
{
    static ::uStaticStrong<Future1_Closure__bool__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (Future1_Closure__bool__Uno_Exception__uType*)::uAllocClassType(sizeof(Future1_Closure__bool__Uno_Exception__uType), "Uno.Threading.Future1_Closure<bool,Uno.Exception>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Future1_Closure__bool__Uno_Exception, _action),
        "_result", offsetof(Future1_Closure__bool__Uno_Exception, _result));

    return type;
}

void Future1_Closure__bool__Uno_Exception___ObjInit(Future1_Closure__bool__Uno_Exception* __this, ::uDelegate* action, ::app::Uno::Exception* result)
{
    __this->_action = action;
    __this->_result = result;
}

Future1_Closure__bool__Uno_Exception* Future1_Closure__bool__Uno_Exception__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::Exception* result)
{
    Future1_Closure__bool__Uno_Exception* inst = (Future1_Closure__bool__Uno_Exception*)::uAllocObject(sizeof(Future1_Closure__bool__Uno_Exception), Future1_Closure__bool__Uno_Exception__typeof());
    inst->_ObjInit(action, result);
    return inst;
}

void Future1_Closure__bool__Uno_Exception__Run(Future1_Closure__bool__Uno_Exception* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Exception*>(__this->_result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType* Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong<Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType*)::uAllocClassType(sizeof(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType), "Uno.Threading.Future1_Closure<Fuse.Camera.PictureResult,Fuse.Camera.PictureResult>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult, _action),
        "_result", offsetof(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult, _result));

    return type;
}

void Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult___ObjInit(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* result)
{
    __this->_action = action;
    __this->_result = result;
}

Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__New_1(::uStatic* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* result)
{
    Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* inst = (Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult), Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit(action, result);
    return inst;
}

void Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__Run(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Fuse::Camera::PictureResult*>(__this->_result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__uType* Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__typeof()
{
    static ::uStaticStrong<Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__uType*)::uAllocClassType(sizeof(Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__uType), "Uno.Threading.Future1_Closure<Fuse.Camera.PictureResult,Uno.Exception>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception, _action),
        "_result", offsetof(Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception, _result));

    return type;
}

void Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception___ObjInit(Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception* __this, ::uDelegate* action, ::app::Uno::Exception* result)
{
    __this->_action = action;
    __this->_result = result;
}

Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception* Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::Exception* result)
{
    Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception* inst = (Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception*)::uAllocObject(sizeof(Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception), Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__typeof());
    inst->_ObjInit(action, result);
    return inst;
}

void Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__Run(Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Exception*>(__this->_result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future1_Closure__string__string__uType* Future1_Closure__string__string__typeof()
{
    static ::uStaticStrong<Future1_Closure__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Future1_Closure__string__string__uType*)::uAllocClassType(sizeof(Future1_Closure__string__string__uType), "Uno.Threading.Future1_Closure<string,string>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Future1_Closure__string__string, _action),
        "_result", offsetof(Future1_Closure__string__string, _result));

    return type;
}

void Future1_Closure__string__string___ObjInit(Future1_Closure__string__string* __this, ::uDelegate* action, ::uString* result)
{
    __this->_action = action;
    __this->_result = result;
}

Future1_Closure__string__string* Future1_Closure__string__string__New_1(::uStatic* __this, ::uDelegate* action, ::uString* result)
{
    Future1_Closure__string__string* inst = (Future1_Closure__string__string*)::uAllocObject(sizeof(Future1_Closure__string__string), Future1_Closure__string__string__typeof());
    inst->_ObjInit(action, result);
    return inst;
}

void Future1_Closure__string__string__Run(Future1_Closure__string__string* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::uString*>(__this->_result);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future1_Closure__string__Uno_Exception__uType* Future1_Closure__string__Uno_Exception__typeof()
{
    static ::uStaticStrong<Future1_Closure__string__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (Future1_Closure__string__Uno_Exception__uType*)::uAllocClassType(sizeof(Future1_Closure__string__Uno_Exception__uType), "Uno.Threading.Future1_Closure<string,Uno.Exception>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Future1_Closure__string__Uno_Exception, _action),
        "_result", offsetof(Future1_Closure__string__Uno_Exception, _result));

    return type;
}

void Future1_Closure__string__Uno_Exception___ObjInit(Future1_Closure__string__Uno_Exception* __this, ::uDelegate* action, ::app::Uno::Exception* result)
{
    __this->_action = action;
    __this->_result = result;
}

Future1_Closure__string__Uno_Exception* Future1_Closure__string__Uno_Exception__New_1(::uStatic* __this, ::uDelegate* action, ::app::Uno::Exception* result)
{
    Future1_Closure__string__Uno_Exception* inst = (Future1_Closure__string__Uno_Exception*)::uAllocObject(sizeof(Future1_Closure__string__Uno_Exception), Future1_Closure__string__Uno_Exception__typeof());
    inst->_ObjInit(action, result);
    return inst;
}

void Future1_Closure__string__Uno_Exception__Run(Future1_Closure__string__Uno_Exception* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Exception*>(__this->_result);
}

}}}
