// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_I_OBSERVER_H__
#define __APP_FUSE_REACTIVE_I_OBSERVER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

::uInterfaceType* IObserver__typeof();

struct IObserver
{
    void(*__fp_OnAdd)(void*, ::uObject*);
    void(*__fp_OnFailed)(void*, ::uString*);
    void(*__fp_OnNewAll)(void*, int);
    void(*__fp_OnNewAt)(void*, int, ::uObject*);
    void(*__fp_OnRemove)(void*, ::uObject*, int);
    void(*__fp_OnSet)(void*, ::uObject*);

    static void OnAdd(::uObject* __this, ::uObject* addedValue) { ((IObserver*)uGetInterfacePtr(__this, IObserver__typeof()))->__fp_OnAdd((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), addedValue); }
    static void OnFailed(::uObject* __this, ::uString* message) { ((IObserver*)uGetInterfacePtr(__this, IObserver__typeof()))->__fp_OnFailed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), message); }
    static void OnNewAll(::uObject* __this, int length) { ((IObserver*)uGetInterfacePtr(__this, IObserver__typeof()))->__fp_OnNewAll((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), length); }
    static void OnNewAt(::uObject* __this, int index, ::uObject* newValue) { ((IObserver*)uGetInterfacePtr(__this, IObserver__typeof()))->__fp_OnNewAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index, newValue); }
    static void OnRemove(::uObject* __this, ::uObject* value, int index) { ((IObserver*)uGetInterfacePtr(__this, IObserver__typeof()))->__fp_OnRemove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value, index); }
    static void OnSet(::uObject* __this, ::uObject* newValue) { ((IObserver*)uGetInterfacePtr(__this, IObserver__typeof()))->__fp_OnSet((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), newValue); }
};

}}}


#endif
