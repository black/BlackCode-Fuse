// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_INTERNAL_BLENDER__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Fuse_Resources_ImageSource;

struct Blender__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Fuse::Resources::ImageSource*(*__fp_Add)(Blender__Fuse_Resources_ImageSource*, ::app::Fuse::Resources::ImageSource*, ::app::Fuse::Resources::ImageSource*);
    ::app::Fuse::Resources::ImageSource*(*__fp_Weight)(Blender__Fuse_Resources_ImageSource*, ::app::Fuse::Resources::ImageSource*, double);
};

Blender__Fuse_Resources_ImageSource__uType* Blender__Fuse_Resources_ImageSource__typeof();

struct Blender__Fuse_Resources_ImageSource : ::uObject
{
    ::app::Fuse::Resources::ImageSource* Add(::app::Fuse::Resources::ImageSource* a, ::app::Fuse::Resources::ImageSource* b) { return (((Blender__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Fuse::Resources::ImageSource* Weight(::app::Fuse::Resources::ImageSource* v, double w) { return (((Blender__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
