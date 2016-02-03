// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_I_CACHE_H__
#define __APP_EXPERIMENTAL_CACHE_I_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace Cache {

::uInterfaceType* ICache__typeof();

struct ICache
{
    ::uObject*(*__fp_CreateRecord)(void*, ::uString*);
    void(*__fp_DeleteRecord)(void*, ::uString*);
    bool(*__fp_LoadRecord)(void*, ::uString*, ::uDelegate*);

    static ::uObject* CreateRecord(::uObject* __this, ::uString* id) { return ((ICache*)uGetInterfacePtr(__this, ICache__typeof()))->__fp_CreateRecord((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), id); }
    static void DeleteRecord(::uObject* __this, ::uString* id) { ((ICache*)uGetInterfacePtr(__this, ICache__typeof()))->__fp_DeleteRecord((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), id); }
    static bool LoadRecord(::uObject* __this, ::uString* id, ::uDelegate* onLoaded) { return ((ICache*)uGetInterfacePtr(__this, ICache__typeof()))->__fp_LoadRecord((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), id, onLoaded); }
};

}}}


#endif
