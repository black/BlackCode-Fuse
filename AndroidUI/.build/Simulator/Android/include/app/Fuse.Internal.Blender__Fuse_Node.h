// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_NODE_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Node;

struct Blender__Fuse_Node__uType : ::uClassType
{
    ::app::Fuse::Node*(*__fp_Add)(Blender__Fuse_Node*, ::app::Fuse::Node*, ::app::Fuse::Node*);
    ::app::Fuse::Node*(*__fp_Weight)(Blender__Fuse_Node*, ::app::Fuse::Node*, double);
};

Blender__Fuse_Node__uType* Blender__Fuse_Node__typeof();

struct Blender__Fuse_Node : ::uObject
{
    ::app::Fuse::Node* Add(::app::Fuse::Node* a, ::app::Fuse::Node* b) { return (((Blender__Fuse_Node__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Node* Weight(::app::Fuse::Node* v, double w) { return (((Blender__Fuse_Node__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
