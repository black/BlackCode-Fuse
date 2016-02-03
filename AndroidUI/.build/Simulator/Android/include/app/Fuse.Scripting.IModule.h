// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_I_MODULE_H__
#define __APP_FUSE_SCRIPTING_I_MODULE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Scripting {

::uInterfaceType* IModule__typeof();

struct IModule
{
    ::uObject*(*__fp_Evaluate)(void*, ::uString*, ::app::Fuse::Scripting::Context*);
    ::uString*(*__fp_get_Code)(void*);
    ::uString*(*__fp_get_FileName)(void*);
    int(*__fp_get_LineNumberOffset)(void*);

    static ::uObject* Evaluate(::uObject* __this, ::uString* id, ::app::Fuse::Scripting::Context* c) { return ((IModule*)uGetInterfacePtr(__this, IModule__typeof()))->__fp_Evaluate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), id, c); }
    static ::uString* Code(::uObject* __this) { return ((IModule*)uGetInterfacePtr(__this, IModule__typeof()))->__fp_get_Code((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* FileName(::uObject* __this) { return ((IModule*)uGetInterfacePtr(__this, IModule__typeof()))->__fp_get_FileName((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int LineNumberOffset(::uObject* __this) { return ((IModule*)uGetInterfacePtr(__this, IModule__typeof()))->__fp_get_LineNumberOffset((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
