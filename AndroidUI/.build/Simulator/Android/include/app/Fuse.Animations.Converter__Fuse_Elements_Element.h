// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Elements_Element;

struct Converter__Fuse_Elements_Element__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*);
    ::app::Fuse::Elements::Element*(*__fp_Out)(Converter__Fuse_Elements_Element*, ::app::Uno::Float4);
};

Converter__Fuse_Elements_Element__uType* Converter__Fuse_Elements_Element__typeof();

struct Converter__Fuse_Elements_Element : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Elements::Element* value);
    ::app::Fuse::Elements::Element* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Elements_Element::In(::app::Fuse::Elements::Element* value) { return (((Converter__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Elements::Element* Converter__Fuse_Elements_Element::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
