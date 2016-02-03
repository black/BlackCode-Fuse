// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Drawing_DynamicBrush;

struct Blender__Fuse_Drawing_DynamicBrush__uType : ::uClassType
{
    ::app::Fuse::Drawing::DynamicBrush*(*__fp_Add)(Blender__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Drawing::DynamicBrush*, ::app::Fuse::Drawing::DynamicBrush*);
    ::app::Fuse::Drawing::DynamicBrush*(*__fp_Weight)(Blender__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Drawing::DynamicBrush*, double);
};

Blender__Fuse_Drawing_DynamicBrush__uType* Blender__Fuse_Drawing_DynamicBrush__typeof();

struct Blender__Fuse_Drawing_DynamicBrush : ::uObject
{
    ::app::Fuse::Drawing::DynamicBrush* Add(::app::Fuse::Drawing::DynamicBrush* a, ::app::Fuse::Drawing::DynamicBrush* b) { return (((Blender__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Drawing::DynamicBrush* Weight(::app::Fuse::Drawing::DynamicBrush* v, double w) { return (((Blender__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
