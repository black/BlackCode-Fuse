#include <app/Fuse.Reactive.Dispatcher_Arg2Dispatch__int__object.h>
#include <app/Fuse.Reactive.Dispatcher_Arg2Dispatch__object__int.h>
#include <app/Uno.Action__int__object.h>
#include <app/Uno.Action__object__int.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_Arg2Dispatch__int__object__uType* Dispatcher_Arg2Dispatch__int__object__typeof()
{
    static ::uStaticStrong<Dispatcher_Arg2Dispatch__int__object__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_Arg2Dispatch__int__object__uType*)::uAllocClassType(sizeof(Dispatcher_Arg2Dispatch__int__object__uType), "Fuse.Reactive.Dispatcher_Arg2Dispatch<int,object>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Dispatcher_Arg2Dispatch__int__object, _action),
        "_arg2", offsetof(Dispatcher_Arg2Dispatch__int__object, _arg2));

    return type;
}

void Dispatcher_Arg2Dispatch__int__object___ObjInit(Dispatcher_Arg2Dispatch__int__object* __this, ::uDelegate* action, int arg1, ::uObject* arg2)
{
    __this->_action = action;
    __this->_arg1 = arg1;
    __this->_arg2 = arg2;
}

Dispatcher_Arg2Dispatch__int__object* Dispatcher_Arg2Dispatch__int__object__New_1(::uStatic* __this, ::uDelegate* action, int arg1, ::uObject* arg2)
{
    Dispatcher_Arg2Dispatch__int__object* inst = (Dispatcher_Arg2Dispatch__int__object*)::uAllocObject(sizeof(Dispatcher_Arg2Dispatch__int__object), Dispatcher_Arg2Dispatch__int__object__typeof());
    inst->_ObjInit(action, arg1, arg2);
    return inst;
}

void Dispatcher_Arg2Dispatch__int__object__Run(Dispatcher_Arg2Dispatch__int__object* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< int, ::uObject*>(__this->_arg1, __this->_arg2);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dispatcher_Arg2Dispatch__object__int__uType* Dispatcher_Arg2Dispatch__object__int__typeof()
{
    static ::uStaticStrong<Dispatcher_Arg2Dispatch__object__int__uType*> type;
    if (type != NULL) return type;

    type = (Dispatcher_Arg2Dispatch__object__int__uType*)::uAllocClassType(sizeof(Dispatcher_Arg2Dispatch__object__int__uType), "Fuse.Reactive.Dispatcher_Arg2Dispatch<object,int>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(Dispatcher_Arg2Dispatch__object__int, _action),
        "_arg1", offsetof(Dispatcher_Arg2Dispatch__object__int, _arg1));

    return type;
}

void Dispatcher_Arg2Dispatch__object__int___ObjInit(Dispatcher_Arg2Dispatch__object__int* __this, ::uDelegate* action, ::uObject* arg1, int arg2)
{
    __this->_action = action;
    __this->_arg1 = arg1;
    __this->_arg2 = arg2;
}

Dispatcher_Arg2Dispatch__object__int* Dispatcher_Arg2Dispatch__object__int__New_1(::uStatic* __this, ::uDelegate* action, ::uObject* arg1, int arg2)
{
    Dispatcher_Arg2Dispatch__object__int* inst = (Dispatcher_Arg2Dispatch__object__int*)::uAllocObject(sizeof(Dispatcher_Arg2Dispatch__object__int), Dispatcher_Arg2Dispatch__object__int__typeof());
    inst->_ObjInit(action, arg1, arg2);
    return inst;
}

void Dispatcher_Arg2Dispatch__object__int__Run(Dispatcher_Arg2Dispatch__object__int* __this)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::uObject*, int>(__this->_arg1, __this->_arg2);
}

}}}
