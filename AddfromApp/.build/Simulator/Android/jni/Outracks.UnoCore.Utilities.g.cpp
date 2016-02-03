// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.UnoCore.Utilities.VerySimpleEventQueue.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
static uType* TYPES[1];

namespace g{
namespace Outracks{
namespace UnoCore{
namespace Utilities{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Outracks.UnoCore\Utilities\$.uno(44)
// --------------------------------------------------------------------------------------

// public sealed class VerySimpleEventQueue :44
// {
uType* VerySimpleEventQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(VerySimpleEventQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.UnoCore.Utilities.VerySimpleEventQueue", options);
    type->fp_ctor_ = (void*)VerySimpleEventQueue__New1_fn;
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Outracks::UnoCore::Utilities::VerySimpleEventQueue, _queue), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Enqueue", NULL, (void*)VerySimpleEventQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction(".ctor", NULL, (void*)VerySimpleEventQueue__New1_fn, 0, true, VerySimpleEventQueue_typeof(), 0),
        new uFunction("TryDequeue", NULL, (void*)VerySimpleEventQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Action_typeof()->ByRef()));
    return type;
}

// public generated VerySimpleEventQueue() :44
void VerySimpleEventQueue__ctor__fn(VerySimpleEventQueue* __this)
{
    __this->ctor_();
}

// public void Enqueue(Uno.Action action) :48
void VerySimpleEventQueue__Enqueue_fn(VerySimpleEventQueue* __this, uDelegate* action)
{
    __this->Enqueue(action);
}

// public generated VerySimpleEventQueue New() :44
void VerySimpleEventQueue__New1_fn(VerySimpleEventQueue** __retval)
{
    *__retval = VerySimpleEventQueue::New1();
}

// public bool TryDequeue(Uno.Action& result) :53
void VerySimpleEventQueue__TryDequeue_fn(VerySimpleEventQueue* __this, uDelegate** result, bool* __retval)
{
    *__retval = __this->TryDequeue(result);
}

// public generated VerySimpleEventQueue() [instance] :44
void VerySimpleEventQueue::ctor_()
{
}

// public void Enqueue(Uno.Action action) [instance] :48
void VerySimpleEventQueue::Enqueue(uDelegate* action)
{
    _queue = action;
}

// public bool TryDequeue(Uno.Action& result) [instance] :53
bool VerySimpleEventQueue::TryDequeue(uDelegate** result)
{
    *result = _queue;
    _queue = NULL;
    return ::g::Uno::Delegate::op_Inequality(*result, NULL);
}

// public generated VerySimpleEventQueue New() [static] :44
VerySimpleEventQueue* VerySimpleEventQueue::New1()
{
    VerySimpleEventQueue* obj1 = (VerySimpleEventQueue*)uNew(VerySimpleEventQueue_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Outracks::UnoCore::Utilities
