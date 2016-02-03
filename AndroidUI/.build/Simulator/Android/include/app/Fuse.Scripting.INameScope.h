// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_I_NAME_SCOPE_H__
#define __APP_FUSE_SCRIPTING_I_NAME_SCOPE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

::uInterfaceType* INameScope__typeof();

struct INameScope
{
    ::uObject*(*__fp_FindObjectByName)(void*, ::uString*, ::uDelegate*);

    static ::uObject* FindObjectByName(::uObject* __this, ::uString* name, ::uDelegate* acceptor) { return ((INameScope*)uGetInterfacePtr(__this, INameScope__typeof()))->__fp_FindObjectByName((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), name, acceptor); }
};

}}}


#endif
