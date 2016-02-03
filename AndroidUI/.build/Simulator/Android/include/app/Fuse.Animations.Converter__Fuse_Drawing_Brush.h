// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Drawing_Brush;

struct Converter__Fuse_Drawing_Brush__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Drawing_Brush*, ::app::Fuse::Drawing::Brush*);
    ::app::Fuse::Drawing::Brush*(*__fp_Out)(Converter__Fuse_Drawing_Brush*, ::app::Uno::Float4);
};

Converter__Fuse_Drawing_Brush__uType* Converter__Fuse_Drawing_Brush__typeof();

struct Converter__Fuse_Drawing_Brush : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Drawing::Brush* value);
    ::app::Fuse::Drawing::Brush* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Drawing_Brush::In(::app::Fuse::Drawing::Brush* value) { return (((Converter__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Drawing::Brush* Converter__Fuse_Drawing_Brush::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
