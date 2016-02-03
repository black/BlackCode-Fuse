// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DOUBLE_CHANGED_ARGS_H__
#define __APP_FUSE_SCRIPTING_DOUBLE_CHANGED_ARGS_H__

#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

struct DoubleChangedArgs;

struct DoubleChangedArgs__uType : ::app::Uno::UX::ValueChangedArgs__double__uType
{
    ::app::Fuse::Scripting::IScriptEvent __interface_0;
};

DoubleChangedArgs__uType* DoubleChangedArgs__typeof();

void DoubleChangedArgs___ObjInit_2(DoubleChangedArgs* __this, double value, ::uObject* origin);
void DoubleChangedArgs__Fuse_Scripting_IScriptEvent_Serialize(DoubleChangedArgs* __this, ::uObject* s);
DoubleChangedArgs* DoubleChangedArgs__New_3(::uStatic* __this, double value, ::uObject* origin);

struct DoubleChangedArgs : ::app::Uno::UX::ValueChangedArgs__double
{
    void _ObjInit_2(double value, ::uObject* origin) { DoubleChangedArgs___ObjInit_2(this, value, origin); }
};

}}}


#endif
