// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Drawing_SolidColor;

struct Blender__Fuse_Drawing_SolidColor__uType : ::uClassType
{
    ::app::Fuse::Drawing::SolidColor*(*__fp_Add)(Blender__Fuse_Drawing_SolidColor*, ::app::Fuse::Drawing::SolidColor*, ::app::Fuse::Drawing::SolidColor*);
    ::app::Fuse::Drawing::SolidColor*(*__fp_Weight)(Blender__Fuse_Drawing_SolidColor*, ::app::Fuse::Drawing::SolidColor*, double);
};

Blender__Fuse_Drawing_SolidColor__uType* Blender__Fuse_Drawing_SolidColor__typeof();

struct Blender__Fuse_Drawing_SolidColor : ::uObject
{
    ::app::Fuse::Drawing::SolidColor* Add(::app::Fuse::Drawing::SolidColor* a, ::app::Fuse::Drawing::SolidColor* b) { return (((Blender__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Drawing::SolidColor* Weight(::app::Fuse::Drawing::SolidColor* v, double w) { return (((Blender__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
