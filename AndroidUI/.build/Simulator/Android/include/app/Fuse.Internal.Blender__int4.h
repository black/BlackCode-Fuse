// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__INT4_H__
#define __APP_FUSE_INTERNAL_BLENDER__INT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__int4;

struct Blender__int4__uType : ::uClassType
{
    ::app::Uno::Int4(*__fp_Add)(Blender__int4*, ::app::Uno::Int4, ::app::Uno::Int4);
    ::app::Uno::Int4(*__fp_Weight)(Blender__int4*, ::app::Uno::Int4, double);
};

Blender__int4__uType* Blender__int4__typeof();

struct Blender__int4 : ::uObject
{
    ::app::Uno::Int4 Add(::app::Uno::Int4 a, ::app::Uno::Int4 b);
    ::app::Uno::Int4 Weight(::app::Uno::Int4 v, double w);
};

}}}

#include <app/Uno.Int4.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Int4 Blender__int4::Add(::app::Uno::Int4 a, ::app::Uno::Int4 b) { return (((Blender__int4__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Int4 Blender__int4::Weight(::app::Uno::Int4 v, double w) { return (((Blender__int4__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }

}}}


#endif
