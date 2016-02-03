// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Triggers_State;

struct Blender__Fuse_Triggers_State__uType : ::uClassType
{
    ::app::Fuse::Triggers::State*(*__fp_Add)(Blender__Fuse_Triggers_State*, ::app::Fuse::Triggers::State*, ::app::Fuse::Triggers::State*);
    ::app::Fuse::Triggers::State*(*__fp_Weight)(Blender__Fuse_Triggers_State*, ::app::Fuse::Triggers::State*, double);
};

Blender__Fuse_Triggers_State__uType* Blender__Fuse_Triggers_State__typeof();

struct Blender__Fuse_Triggers_State : ::uObject
{
    ::app::Fuse::Triggers::State* Add(::app::Fuse::Triggers::State* a, ::app::Fuse::Triggers::State* b) { return (((Blender__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Triggers::State* Weight(::app::Fuse::Triggers::State* v, double w) { return (((Blender__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
