// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Drawing_LinearGradient;

struct Blender__Fuse_Drawing_LinearGradient__uType : ::uClassType
{
    ::app::Fuse::Drawing::LinearGradient*(*__fp_Add)(Blender__Fuse_Drawing_LinearGradient*, ::app::Fuse::Drawing::LinearGradient*, ::app::Fuse::Drawing::LinearGradient*);
    ::app::Fuse::Drawing::LinearGradient*(*__fp_Weight)(Blender__Fuse_Drawing_LinearGradient*, ::app::Fuse::Drawing::LinearGradient*, double);
};

Blender__Fuse_Drawing_LinearGradient__uType* Blender__Fuse_Drawing_LinearGradient__typeof();

struct Blender__Fuse_Drawing_LinearGradient : ::uObject
{
    ::app::Fuse::Drawing::LinearGradient* Add(::app::Fuse::Drawing::LinearGradient* a, ::app::Fuse::Drawing::LinearGradient* b) { return (((Blender__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Drawing::LinearGradient* Weight(::app::Fuse::Drawing::LinearGradient* v, double w) { return (((Blender__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
