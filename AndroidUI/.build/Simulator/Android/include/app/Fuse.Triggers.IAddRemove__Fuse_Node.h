// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_ADD_REMOVE__FUSE_NODE_H__
#define __APP_FUSE_TRIGGERS_I_ADD_REMOVE__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

::uInterfaceType* IAddRemove__Fuse_Node__typeof();

struct IAddRemove__Fuse_Node
{
    void(*__fp_Add)(void*, ::app::Fuse::Node*);
    void(*__fp_Remove)(void*, ::app::Fuse::Node*);

    static void Add(::uObject* __this, ::app::Fuse::Node* node) { ((IAddRemove__Fuse_Node*)uGetInterfacePtr(__this, IAddRemove__Fuse_Node__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), node); }
    static void Remove(::uObject* __this, ::app::Fuse::Node* node) { ((IAddRemove__Fuse_Node*)uGetInterfacePtr(__this, IAddRemove__Fuse_Node__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), node); }
};

}}}


#endif
