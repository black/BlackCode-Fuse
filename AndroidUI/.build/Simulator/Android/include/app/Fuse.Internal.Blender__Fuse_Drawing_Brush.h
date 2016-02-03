// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Drawing_Brush;

struct Blender__Fuse_Drawing_Brush__uType : ::uClassType
{
    ::app::Fuse::Drawing::Brush*(*__fp_Add)(Blender__Fuse_Drawing_Brush*, ::app::Fuse::Drawing::Brush*, ::app::Fuse::Drawing::Brush*);
    ::app::Fuse::Drawing::Brush*(*__fp_Weight)(Blender__Fuse_Drawing_Brush*, ::app::Fuse::Drawing::Brush*, double);
};

Blender__Fuse_Drawing_Brush__uType* Blender__Fuse_Drawing_Brush__typeof();

struct Blender__Fuse_Drawing_Brush : ::uObject
{
    ::app::Fuse::Drawing::Brush* Add(::app::Fuse::Drawing::Brush* a, ::app::Fuse::Drawing::Brush* b) { return (((Blender__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Drawing::Brush* Weight(::app::Fuse::Drawing::Brush* v, double w) { return (((Blender__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
