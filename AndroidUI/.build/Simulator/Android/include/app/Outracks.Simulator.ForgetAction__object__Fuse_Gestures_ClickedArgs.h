// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FORGET_ACTION__OBJECT__FUSE_GESTURES_CLICKED_ARGS_H__
#define __APP_OUTRACKS_SIMULATOR_FORGET_ACTION__OBJECT__FUSE_GESTURES_CLICKED_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct ClickedArgs; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ForgetAction__object__Fuse_Gestures_ClickedArgs;

struct ForgetAction__object__Fuse_Gestures_ClickedArgs__uType : ::uClassType
{
};

ForgetAction__object__Fuse_Gestures_ClickedArgs__uType* ForgetAction__object__Fuse_Gestures_ClickedArgs__typeof();

void ForgetAction__object__Fuse_Gestures_ClickedArgs___ObjInit(ForgetAction__object__Fuse_Gestures_ClickedArgs* __this, ::uDelegate* action);
void ForgetAction__object__Fuse_Gestures_ClickedArgs__Execute(ForgetAction__object__Fuse_Gestures_ClickedArgs* __this, ::uObject* arg1, ::app::Fuse::Gestures::ClickedArgs* arg2);
ForgetAction__object__Fuse_Gestures_ClickedArgs* ForgetAction__object__Fuse_Gestures_ClickedArgs__New_1(::uStatic* __this, ::uDelegate* action);

struct ForgetAction__object__Fuse_Gestures_ClickedArgs : ::uObject
{
    ::uStrong< ::uDelegate*> _action;

    void _ObjInit(::uDelegate* action) { ForgetAction__object__Fuse_Gestures_ClickedArgs___ObjInit(this, action); }
    void Execute(::uObject* arg1, ::app::Fuse::Gestures::ClickedArgs* arg2) { ForgetAction__object__Fuse_Gestures_ClickedArgs__Execute(this, arg1, arg2); }
};

}}}


#endif
