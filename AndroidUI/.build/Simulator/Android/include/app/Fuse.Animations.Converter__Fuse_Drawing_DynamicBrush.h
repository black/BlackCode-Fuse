// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Drawing_DynamicBrush;

struct Converter__Fuse_Drawing_DynamicBrush__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Drawing::DynamicBrush*);
    ::app::Fuse::Drawing::DynamicBrush*(*__fp_Out)(Converter__Fuse_Drawing_DynamicBrush*, ::app::Uno::Float4);
};

Converter__Fuse_Drawing_DynamicBrush__uType* Converter__Fuse_Drawing_DynamicBrush__typeof();

struct Converter__Fuse_Drawing_DynamicBrush : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Drawing::DynamicBrush* value);
    ::app::Fuse::Drawing::DynamicBrush* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Drawing_DynamicBrush::In(::app::Fuse::Drawing::DynamicBrush* value) { return (((Converter__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Drawing::DynamicBrush* Converter__Fuse_Drawing_DynamicBrush::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
