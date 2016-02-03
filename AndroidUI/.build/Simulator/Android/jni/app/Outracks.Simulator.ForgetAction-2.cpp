#include <app/Fuse.Gestures.ClickedArgs.h>
#include <app/Outracks.Simulator.ForgetAction__object__Fuse_Gestures_ClickedArgs.h>
#include <app/Uno.Action.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ForgetAction__object__Fuse_Gestures_ClickedArgs__uType* ForgetAction__object__Fuse_Gestures_ClickedArgs__typeof()
{
    static ::uStaticStrong<ForgetAction__object__Fuse_Gestures_ClickedArgs__uType*> type;
    if (type != NULL) return type;

    type = (ForgetAction__object__Fuse_Gestures_ClickedArgs__uType*)::uAllocClassType(sizeof(ForgetAction__object__Fuse_Gestures_ClickedArgs__uType), "Outracks.Simulator.ForgetAction<object,Fuse.Gestures.ClickedArgs>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_action", offsetof(ForgetAction__object__Fuse_Gestures_ClickedArgs, _action));

    type->SetFields(1,
        ::uNewField("_action", NULL, offsetof(ForgetAction__object__Fuse_Gestures_ClickedArgs, _action), ::app::Uno::Action__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Execute", ForgetAction__object__Fuse_Gestures_ClickedArgs__Execute, 0, false, ::uObject__typeof(), ::app::Fuse::Gestures::ClickedArgs__typeof()),
        ::uNewFunction(".ctor", ForgetAction__object__Fuse_Gestures_ClickedArgs__New_1, 0, true, ForgetAction__object__Fuse_Gestures_ClickedArgs__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void ForgetAction__object__Fuse_Gestures_ClickedArgs___ObjInit(ForgetAction__object__Fuse_Gestures_ClickedArgs* __this, ::uDelegate* action)
{
    __this->_action = action;
}

void ForgetAction__object__Fuse_Gestures_ClickedArgs__Execute(ForgetAction__object__Fuse_Gestures_ClickedArgs* __this, ::uObject* arg1, ::app::Fuse::Gestures::ClickedArgs* arg2)
{
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid();
}

ForgetAction__object__Fuse_Gestures_ClickedArgs* ForgetAction__object__Fuse_Gestures_ClickedArgs__New_1(::uStatic* __this, ::uDelegate* action)
{
    ForgetAction__object__Fuse_Gestures_ClickedArgs* inst = (ForgetAction__object__Fuse_Gestures_ClickedArgs*)::uAllocObject(sizeof(ForgetAction__object__Fuse_Gestures_ClickedArgs), ForgetAction__object__Fuse_Gestures_ClickedArgs__typeof());
    inst->_ObjInit(action);
    return inst;
}

}}}
