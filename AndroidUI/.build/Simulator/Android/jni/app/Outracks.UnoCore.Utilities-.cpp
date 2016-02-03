#include <app/Outracks.UnoCore.Utilities.VerySimpleEventQueue.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>

namespace app {
namespace Outracks {
namespace UnoCore {
namespace Utilities {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Outracks.UnoCore\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VerySimpleEventQueue__uType* VerySimpleEventQueue__typeof()
{
    static ::uStaticStrong<VerySimpleEventQueue__uType*> type;
    if (type != NULL) return type;

    type = (VerySimpleEventQueue__uType*)::uAllocClassType(sizeof(VerySimpleEventQueue__uType), "Outracks.UnoCore.Utilities.VerySimpleEventQueue", false, 0, 1, 0);

    type->SetStrongRefs(
        "_queue", offsetof(VerySimpleEventQueue, _queue));

    type->SetFields(1,
        ::uNewField("_queue", NULL, offsetof(VerySimpleEventQueue, _queue), ::app::Uno::Action__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Enqueue", VerySimpleEventQueue__Enqueue, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction(".ctor", VerySimpleEventQueue__New_1, 0, true, VerySimpleEventQueue__typeof()),
        ::uNewFunction("TryDequeue", VerySimpleEventQueue__TryDequeue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void VerySimpleEventQueue___ObjInit(VerySimpleEventQueue* __this)
{
}

void VerySimpleEventQueue__Enqueue(VerySimpleEventQueue* __this, ::uDelegate* action)
{
    __this->_queue = action;
}

VerySimpleEventQueue* VerySimpleEventQueue__New_1(::uStatic* __this)
{
    VerySimpleEventQueue* inst = (VerySimpleEventQueue*)::uAllocObject(sizeof(VerySimpleEventQueue), VerySimpleEventQueue__typeof());
    inst->_ObjInit();
    return inst;
}

bool VerySimpleEventQueue__TryDequeue(VerySimpleEventQueue* __this, ::uDelegate** result)
{
    *result = __this->_queue;
    __this->_queue = NULL;
    return ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)*result, NULL);
}

}}}}
