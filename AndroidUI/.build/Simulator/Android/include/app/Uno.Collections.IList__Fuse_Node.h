// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_NODE_H__

#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Node__typeof();

struct IList__Fuse_Node
{
    ::app::Fuse::Node*(*__fp_get_Item)(void*, int);
    void(*__fp_Insert)(void*, int, ::app::Fuse::Node*);
    void(*__fp_RemoveAt)(void*, int);

    static ::app::Fuse::Node* Item(::uObject* __this, int index) { return ((IList__Fuse_Node*)uGetInterfacePtr(__this, IList__Fuse_Node__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static void Insert(::uObject* __this, int index, ::app::Fuse::Node* item) { ((IList__Fuse_Node*)uGetInterfacePtr(__this, IList__Fuse_Node__typeof()))->__fp_Insert((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index, item); }
    static void RemoveAt(::uObject* __this, int index) { ((IList__Fuse_Node*)uGetInterfacePtr(__this, IList__Fuse_Node__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
