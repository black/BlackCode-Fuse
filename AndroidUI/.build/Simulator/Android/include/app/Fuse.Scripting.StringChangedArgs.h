// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_STRING_CHANGED_ARGS_H__
#define __APP_FUSE_SCRIPTING_STRING_CHANGED_ARGS_H__

#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

struct StringChangedArgs;

struct StringChangedArgs__uType : ::app::Uno::UX::ValueChangedArgs__string__uType
{
    ::app::Fuse::Scripting::IScriptEvent __interface_0;
};

StringChangedArgs__uType* StringChangedArgs__typeof();

void StringChangedArgs___ObjInit_2(StringChangedArgs* __this, ::uString* newValue, ::uObject* origin);
void StringChangedArgs__Fuse_Scripting_IScriptEvent_Serialize(StringChangedArgs* __this, ::uObject* s);
StringChangedArgs* StringChangedArgs__New_3(::uStatic* __this, ::uString* newValue, ::uObject* origin);

struct StringChangedArgs : ::app::Uno::UX::ValueChangedArgs__string
{
    void _ObjInit_2(::uString* newValue, ::uObject* origin) { StringChangedArgs___ObjInit_2(this, newValue, origin); }
};

}}}


#endif
