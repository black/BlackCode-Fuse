// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Drawing_SolidColor;

struct Converter__Fuse_Drawing_SolidColor__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Drawing_SolidColor*, ::app::Fuse::Drawing::SolidColor*);
    ::app::Fuse::Drawing::SolidColor*(*__fp_Out)(Converter__Fuse_Drawing_SolidColor*, ::app::Uno::Float4);
};

Converter__Fuse_Drawing_SolidColor__uType* Converter__Fuse_Drawing_SolidColor__typeof();

struct Converter__Fuse_Drawing_SolidColor : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Drawing::SolidColor* value);
    ::app::Fuse::Drawing::SolidColor* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Drawing_SolidColor::In(::app::Fuse::Drawing::SolidColor* value) { return (((Converter__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Drawing::SolidColor* Converter__Fuse_Drawing_SolidColor::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
