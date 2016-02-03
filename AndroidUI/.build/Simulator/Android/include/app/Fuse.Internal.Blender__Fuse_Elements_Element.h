// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Elements_Element;

struct Blender__Fuse_Elements_Element__uType : ::uClassType
{
    ::app::Fuse::Elements::Element*(*__fp_Add)(Blender__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*, ::app::Fuse::Elements::Element*);
    ::app::Fuse::Elements::Element*(*__fp_Weight)(Blender__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*, double);
};

Blender__Fuse_Elements_Element__uType* Blender__Fuse_Elements_Element__typeof();

struct Blender__Fuse_Elements_Element : ::uObject
{
    ::app::Fuse::Elements::Element* Add(::app::Fuse::Elements::Element* a, ::app::Fuse::Elements::Element* b) { return (((Blender__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Elements::Element* Weight(::app::Fuse::Elements::Element* v, double w) { return (((Blender__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
