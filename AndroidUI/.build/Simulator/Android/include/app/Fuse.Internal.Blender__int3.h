// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__INT3_H__
#define __APP_FUSE_INTERNAL_BLENDER__INT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__int3;

struct Blender__int3__uType : ::uClassType
{
    ::app::Uno::Int3(*__fp_Add)(Blender__int3*, ::app::Uno::Int3, ::app::Uno::Int3);
    ::app::Uno::Int3(*__fp_Weight)(Blender__int3*, ::app::Uno::Int3, double);
};

Blender__int3__uType* Blender__int3__typeof();

struct Blender__int3 : ::uObject
{
    ::app::Uno::Int3 Add(::app::Uno::Int3 a, ::app::Uno::Int3 b);
    ::app::Uno::Int3 Weight(::app::Uno::Int3 v, double w);
};

}}}

#include <app/Uno.Int3.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Int3 Blender__int3::Add(::app::Uno::Int3 a, ::app::Uno::Int3 b) { return (((Blender__int3__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Int3 Blender__int3::Weight(::app::Uno::Int3 v, double w) { return (((Blender__int3__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }

}}}


#endif
