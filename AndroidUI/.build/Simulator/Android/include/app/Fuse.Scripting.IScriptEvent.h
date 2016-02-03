// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_I_SCRIPT_EVENT_H__
#define __APP_FUSE_SCRIPTING_I_SCRIPT_EVENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

::uInterfaceType* IScriptEvent__typeof();

struct IScriptEvent
{
    void(*__fp_Serialize)(void*, ::uObject*);

    static void Serialize(::uObject* __this, ::uObject* s) { ((IScriptEvent*)uGetInterfacePtr(__this, IScriptEvent__typeof()))->__fp_Serialize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), s); }
};

}}}


#endif
