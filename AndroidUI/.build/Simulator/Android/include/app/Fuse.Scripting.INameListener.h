// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_I_NAME_LISTENER_H__
#define __APP_FUSE_SCRIPTING_I_NAME_LISTENER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

::uInterfaceType* INameListener__typeof();

struct INameListener
{
    void(*__fp_OnNameChanged)(void*, ::uObject*, ::uString*);

    static void OnNameChanged(::uObject* __this, ::uObject* obj, ::uString* name) { ((INameListener*)uGetInterfacePtr(__this, INameListener__typeof()))->__fp_OnNameChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), obj, name); }
};

}}}


#endif
