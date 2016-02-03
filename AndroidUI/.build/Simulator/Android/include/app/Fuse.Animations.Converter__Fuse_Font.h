// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_FONT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_FONT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Font;

struct Converter__Fuse_Font__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Font*, ::app::Fuse::Font*);
    ::app::Fuse::Font*(*__fp_Out)(Converter__Fuse_Font*, ::app::Uno::Float4);
};

Converter__Fuse_Font__uType* Converter__Fuse_Font__typeof();

struct Converter__Fuse_Font : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Font* value);
    ::app::Fuse::Font* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Font::In(::app::Fuse::Font* value) { return (((Converter__Fuse_Font__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Font* Converter__Fuse_Font::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Font__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
