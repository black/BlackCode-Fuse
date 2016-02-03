// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__INT2_H__
#define __APP_FUSE_INTERNAL_BLENDER__INT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__int2;

struct Blender__int2__uType : ::uClassType
{
    ::app::Uno::Int2(*__fp_Add)(Blender__int2*, ::app::Uno::Int2, ::app::Uno::Int2);
    ::app::Uno::Int2(*__fp_Weight)(Blender__int2*, ::app::Uno::Int2, double);
};

Blender__int2__uType* Blender__int2__typeof();

struct Blender__int2 : ::uObject
{
    ::app::Uno::Int2 Add(::app::Uno::Int2 a, ::app::Uno::Int2 b);
    ::app::Uno::Int2 Weight(::app::Uno::Int2 v, double w);
};

}}}

#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Int2 Blender__int2::Add(::app::Uno::Int2 a, ::app::Uno::Int2 b) { return (((Blender__int2__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Int2 Blender__int2::Weight(::app::Uno::Int2 v, double w) { return (((Blender__int2__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }

}}}


#endif
