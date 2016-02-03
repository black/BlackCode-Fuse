#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__int.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__object.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__object__.h>
#include <app/Fuse.Reactive.Dispatcher_ArgDispatch__string.h>
#include <app/Uno.Action__int.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__object__.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_ArgDispatch__int__uType* Dispatcher_ArgDispatch__int__typeof()
{
    static ::uStaticStrong<Dispatcher_ArgDispatch__int__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_ArgDispatch__int__uType*)::uAllocClassType(sizeof(Dispatcher_ArgDispatch__int__uType), "Fuse.Reactive.Dispatcher_ArgDispatch<int>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_action", offsetof(Dispatcher_ArgDispatch__int, _action));

    return type;
}

void Dispatcher_ArgDispatch__int___ObjInit(Dispatcher_ArgDispatch__int* __this, ::uDelegate* action, int arg)
{
    __this->_action = action;
    __this->_arg = arg;
}

Dispatcher_ArgDispatch__int* Dispatcher_ArgDispatch__int__New_1(::uStatic* __this, ::uDelegate* action, int arg)
{
    Dispatcher_ArgDispatch__int* inst = (Dispatcher_ArgDispatch__int*)::uAllocObject(sizeof(Dispatcher_ArgDispatch__int), Dispatcher_ArgDispatch__int__typeof());
    inst->_ObjInit(action, arg);
    return inst;
}

void Dispatcher_ArgDispatch__int__Run(Dispatcher_ArgDispatch__int* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< int>(__this->_arg);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_ArgDispatch__object__uType* Dispatcher_ArgDispatch__object__typeof()
{
    static ::uStaticStrong<Dispatcher_ArgDispatch__object__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_ArgDispatch__object__uType*)::uAllocClassType(sizeof(Dispatcher_ArgDispatch__object__uType), "Fuse.Reactive.Dispatcher_ArgDispatch<object>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Dispatcher_ArgDispatch__object, _action),
        "_arg", offsetof(Dispatcher_ArgDispatch__object, _arg));

    return type;
}

void Dispatcher_ArgDispatch__object___ObjInit(Dispatcher_ArgDispatch__object* __this, ::uDelegate* action, ::uObject* arg)
{
    __this->_action = action;
    __this->_arg = arg;
}

Dispatcher_ArgDispatch__object* Dispatcher_ArgDispatch__object__New_1(::uStatic* __this, ::uDelegate* action, ::uObject* arg)
{
    Dispatcher_ArgDispatch__object* inst = (Dispatcher_ArgDispatch__object*)::uAllocObject(sizeof(Dispatcher_ArgDispatch__object), Dispatcher_ArgDispatch__object__typeof());
    inst->_ObjInit(action, arg);
    return inst;
}

void Dispatcher_ArgDispatch__object__Run(Dispatcher_ArgDispatch__object* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::uObject*>(__this->_arg);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_ArgDispatch__object____uType* Dispatcher_ArgDispatch__object____typeof()
{
    static ::uStaticStrong<Dispatcher_ArgDispatch__object____uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_ArgDispatch__object____uType*)::uAllocClassType(sizeof(Dispatcher_ArgDispatch__object____uType), "Fuse.Reactive.Dispatcher_ArgDispatch<object[]>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Dispatcher_ArgDispatch__object__, _action),
        "_arg", offsetof(Dispatcher_ArgDispatch__object__, _arg));

    return type;
}

void Dispatcher_ArgDispatch__object_____ObjInit(Dispatcher_ArgDispatch__object__* __this, ::uDelegate* action, ::uArray* arg)
{
    __this->_action = action;
    __this->_arg = arg;
}

Dispatcher_ArgDispatch__object__* Dispatcher_ArgDispatch__object____New_1(::uStatic* __this, ::uDelegate* action, ::uArray* arg)
{
    Dispatcher_ArgDispatch__object__* inst = (Dispatcher_ArgDispatch__object__*)::uAllocObject(sizeof(Dispatcher_ArgDispatch__object__), Dispatcher_ArgDispatch__object____typeof());
    inst->_ObjInit(action, arg);
    return inst;
}

void Dispatcher_ArgDispatch__object____Run(Dispatcher_ArgDispatch__object__* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::uArray*>(__this->_arg);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_ArgDispatch__string__uType* Dispatcher_ArgDispatch__string__typeof()
{
    static ::uStaticStrong<Dispatcher_ArgDispatch__string__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_ArgDispatch__string__uType*)::uAllocClassType(sizeof(Dispatcher_ArgDispatch__string__uType), "Fuse.Reactive.Dispatcher_ArgDispatch<string>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Dispatcher_ArgDispatch__string, _action),
        "_arg", offsetof(Dispatcher_ArgDispatch__string, _arg));

    return type;
}

void Dispatcher_ArgDispatch__string___ObjInit(Dispatcher_ArgDispatch__string* __this, ::uDelegate* action, ::uString* arg)
{
    __this->_action = action;
    __this->_arg = arg;
}

Dispatcher_ArgDispatch__string* Dispatcher_ArgDispatch__string__New_1(::uStatic* __this, ::uDelegate* action, ::uString* arg)
{
    Dispatcher_ArgDispatch__string* inst = (Dispatcher_ArgDispatch__string*)::uAllocObject(sizeof(Dispatcher_ArgDispatch__string), Dispatcher_ArgDispatch__string__typeof());
    inst->_ObjInit(action, arg);
    return inst;
}

void Dispatcher_ArgDispatch__string__Run(Dispatcher_ArgDispatch__string* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::uString*>(__this->_arg);
}

}}}
