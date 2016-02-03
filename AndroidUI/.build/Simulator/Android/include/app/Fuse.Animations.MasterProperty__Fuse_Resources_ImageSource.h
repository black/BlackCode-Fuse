// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Resources_ImageSource;

struct MasterProperty__Fuse_Resources_ImageSource__uType : ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Resources_ImageSource__uType* MasterProperty__Fuse_Resources_ImageSource__typeof();

void MasterProperty__Fuse_Resources_ImageSource___ObjInit_1(MasterProperty__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Resources::ImageSource* MasterProperty__Fuse_Resources_ImageSource__get_RestValue(MasterProperty__Fuse_Resources_ImageSource* __this);
::uObject* MasterProperty__Fuse_Resources_ImageSource__GetPropertyObject(MasterProperty__Fuse_Resources_ImageSource* __this);
void MasterProperty__Fuse_Resources_ImageSource__OnInactive(MasterProperty__Fuse_Resources_ImageSource* __this);

struct MasterProperty__Fuse_Resources_ImageSource : ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Resources_ImageSource___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Resources_ImageSource__GetPropertyObject(this); }
};

}}}


#endif
