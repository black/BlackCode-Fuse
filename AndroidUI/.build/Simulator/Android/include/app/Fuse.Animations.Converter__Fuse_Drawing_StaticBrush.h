// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Drawing_StaticBrush;

struct Converter__Fuse_Drawing_StaticBrush__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Drawing_StaticBrush*, ::app::Fuse::Drawing::StaticBrush*);
    ::app::Fuse::Drawing::StaticBrush*(*__fp_Out)(Converter__Fuse_Drawing_StaticBrush*, ::app::Uno::Float4);
};

Converter__Fuse_Drawing_StaticBrush__uType* Converter__Fuse_Drawing_StaticBrush__typeof();

struct Converter__Fuse_Drawing_StaticBrush : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Drawing::StaticBrush* value);
    ::app::Fuse::Drawing::StaticBrush* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Drawing_StaticBrush::In(::app::Fuse::Drawing::StaticBrush* value) { return (((Converter__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Drawing::StaticBrush* Converter__Fuse_Drawing_StaticBrush::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
