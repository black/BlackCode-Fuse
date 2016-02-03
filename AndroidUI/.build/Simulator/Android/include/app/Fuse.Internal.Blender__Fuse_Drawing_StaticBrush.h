// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Drawing_StaticBrush;

struct Blender__Fuse_Drawing_StaticBrush__uType : ::uClassType
{
    ::app::Fuse::Drawing::StaticBrush*(*__fp_Add)(Blender__Fuse_Drawing_StaticBrush*, ::app::Fuse::Drawing::StaticBrush*, ::app::Fuse::Drawing::StaticBrush*);
    ::app::Fuse::Drawing::StaticBrush*(*__fp_Weight)(Blender__Fuse_Drawing_StaticBrush*, ::app::Fuse::Drawing::StaticBrush*, double);
};

Blender__Fuse_Drawing_StaticBrush__uType* Blender__Fuse_Drawing_StaticBrush__typeof();

struct Blender__Fuse_Drawing_StaticBrush : ::uObject
{
    ::app::Fuse::Drawing::StaticBrush* Add(::app::Fuse::Drawing::StaticBrush* a, ::app::Fuse::Drawing::StaticBrush* b) { return (((Blender__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Drawing::StaticBrush* Weight(::app::Fuse::Drawing::StaticBrush* v, double w) { return (((Blender__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
