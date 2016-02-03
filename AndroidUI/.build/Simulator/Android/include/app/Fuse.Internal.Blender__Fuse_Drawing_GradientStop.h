// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Drawing_GradientStop;

struct Blender__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Fuse::Drawing::GradientStop*(*__fp_Add)(Blender__Fuse_Drawing_GradientStop*, ::app::Fuse::Drawing::GradientStop*, ::app::Fuse::Drawing::GradientStop*);
    ::app::Fuse::Drawing::GradientStop*(*__fp_Weight)(Blender__Fuse_Drawing_GradientStop*, ::app::Fuse::Drawing::GradientStop*, double);
};

Blender__Fuse_Drawing_GradientStop__uType* Blender__Fuse_Drawing_GradientStop__typeof();

struct Blender__Fuse_Drawing_GradientStop : ::uObject
{
    ::app::Fuse::Drawing::GradientStop* Add(::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b) { return (((Blender__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Drawing::GradientStop* Weight(::app::Fuse::Drawing::GradientStop* v, double w) { return (((Blender__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
