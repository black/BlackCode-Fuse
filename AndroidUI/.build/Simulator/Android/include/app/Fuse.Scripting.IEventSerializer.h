// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_I_EVENT_SERIALIZER_H__
#define __APP_FUSE_SCRIPTING_I_EVENT_SERIALIZER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

::uInterfaceType* IEventSerializer__typeof();

struct IEventSerializer
{
    void(*__fp_AddBool)(void*, ::uString*, bool);
    void(*__fp_AddDouble)(void*, ::uString*, double);
    void(*__fp_AddInt)(void*, ::uString*, int);
    void(*__fp_AddObject)(void*, ::uString*, ::uObject*);
    void(*__fp_AddString)(void*, ::uString*, ::uString*);

    static void AddBool(::uObject* __this, ::uString* key, bool value) { ((IEventSerializer*)uGetInterfacePtr(__this, IEventSerializer__typeof()))->__fp_AddBool((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, value); }
    static void AddDouble(::uObject* __this, ::uString* key, double value) { ((IEventSerializer*)uGetInterfacePtr(__this, IEventSerializer__typeof()))->__fp_AddDouble((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, value); }
    static void AddInt(::uObject* __this, ::uString* key, int value) { ((IEventSerializer*)uGetInterfacePtr(__this, IEventSerializer__typeof()))->__fp_AddInt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, value); }
    static void AddObject(::uObject* __this, ::uString* key, ::uObject* obj) { ((IEventSerializer*)uGetInterfacePtr(__this, IEventSerializer__typeof()))->__fp_AddObject((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, obj); }
    static void AddString(::uObject* __this, ::uString* key, ::uString* value) { ((IEventSerializer*)uGetInterfacePtr(__this, IEventSerializer__typeof()))->__fp_AddString((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, value); }
};

}}}


#endif
