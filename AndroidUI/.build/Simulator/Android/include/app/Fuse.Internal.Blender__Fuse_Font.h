// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_FONT_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_FONT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Font;

struct Blender__Fuse_Font__uType : ::uClassType
{
    ::app::Fuse::Font*(*__fp_Add)(Blender__Fuse_Font*, ::app::Fuse::Font*, ::app::Fuse::Font*);
    ::app::Fuse::Font*(*__fp_Weight)(Blender__Fuse_Font*, ::app::Fuse::Font*, double);
};

Blender__Fuse_Font__uType* Blender__Fuse_Font__typeof();

struct Blender__Fuse_Font : ::uObject
{
    ::app::Fuse::Font* Add(::app::Fuse::Font* a, ::app::Fuse::Font* b) { return (((Blender__Fuse_Font__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Font* Weight(::app::Fuse::Font* v, double w) { return (((Blender__Fuse_Font__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
