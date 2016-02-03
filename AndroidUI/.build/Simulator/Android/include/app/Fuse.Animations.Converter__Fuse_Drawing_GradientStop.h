// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Drawing_GradientStop;

struct Converter__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Drawing_GradientStop*, ::app::Fuse::Drawing::GradientStop*);
    ::app::Fuse::Drawing::GradientStop*(*__fp_Out)(Converter__Fuse_Drawing_GradientStop*, ::app::Uno::Float4);
};

Converter__Fuse_Drawing_GradientStop__uType* Converter__Fuse_Drawing_GradientStop__typeof();

struct Converter__Fuse_Drawing_GradientStop : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Drawing::GradientStop* value);
    ::app::Fuse::Drawing::GradientStop* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Drawing_GradientStop::In(::app::Fuse::Drawing::GradientStop* value) { return (((Converter__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Drawing::GradientStop* Converter__Fuse_Drawing_GradientStop::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
