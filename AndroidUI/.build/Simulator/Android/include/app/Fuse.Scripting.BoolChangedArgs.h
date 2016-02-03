// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_BOOL_CHANGED_ARGS_H__
#define __APP_FUSE_SCRIPTING_BOOL_CHANGED_ARGS_H__

#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

struct BoolChangedArgs;

struct BoolChangedArgs__uType : ::app::Uno::UX::ValueChangedArgs__bool__uType
{
    ::app::Fuse::Scripting::IScriptEvent __interface_0;
};

BoolChangedArgs__uType* BoolChangedArgs__typeof();

void BoolChangedArgs___ObjInit_2(BoolChangedArgs* __this, bool value, ::uObject* origin);
void BoolChangedArgs__Fuse_Scripting_IScriptEvent_Serialize(BoolChangedArgs* __this, ::uObject* s);
BoolChangedArgs* BoolChangedArgs__New_3(::uStatic* __this, bool value, ::uObject* origin);

struct BoolChangedArgs : ::app::Uno::UX::ValueChangedArgs__bool
{
    void _ObjInit_2(bool value, ::uObject* origin) { BoolChangedArgs___ObjInit_2(this, value, origin); }
};

}}}


#endif
