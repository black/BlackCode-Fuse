// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Drawing_LinearGradient;

struct Converter__Fuse_Drawing_LinearGradient__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Drawing_LinearGradient*, ::app::Fuse::Drawing::LinearGradient*);
    ::app::Fuse::Drawing::LinearGradient*(*__fp_Out)(Converter__Fuse_Drawing_LinearGradient*, ::app::Uno::Float4);
};

Converter__Fuse_Drawing_LinearGradient__uType* Converter__Fuse_Drawing_LinearGradient__typeof();

struct Converter__Fuse_Drawing_LinearGradient : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Drawing::LinearGradient* value);
    ::app::Fuse::Drawing::LinearGradient* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Drawing_LinearGradient::In(::app::Fuse::Drawing::LinearGradient* value) { return (((Converter__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Drawing::LinearGradient* Converter__Fuse_Drawing_LinearGradient::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
