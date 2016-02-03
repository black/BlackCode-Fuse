// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_NODE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Node;

struct Converter__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Node*, ::app::Fuse::Node*);
    ::app::Fuse::Node*(*__fp_Out)(Converter__Fuse_Node*, ::app::Uno::Float4);
};

Converter__Fuse_Node__uType* Converter__Fuse_Node__typeof();

struct Converter__Fuse_Node : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Node* value);
    ::app::Fuse::Node* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Node::In(::app::Fuse::Node* value) { return (((Converter__Fuse_Node__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Node* Converter__Fuse_Node::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Node__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
