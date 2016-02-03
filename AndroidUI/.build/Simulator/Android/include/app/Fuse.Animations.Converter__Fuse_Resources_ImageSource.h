// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Resources_ImageSource;

struct Converter__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Resources_ImageSource*, ::app::Fuse::Resources::ImageSource*);
    ::app::Fuse::Resources::ImageSource*(*__fp_Out)(Converter__Fuse_Resources_ImageSource*, ::app::Uno::Float4);
};

Converter__Fuse_Resources_ImageSource__uType* Converter__Fuse_Resources_ImageSource__typeof();

struct Converter__Fuse_Resources_ImageSource : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Resources::ImageSource* value);
    ::app::Fuse::Resources::ImageSource* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Resources_ImageSource::In(::app::Fuse::Resources::ImageSource* value) { return (((Converter__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Resources::ImageSource* Converter__Fuse_Resources_ImageSource::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
