// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Resources_ImageSource;

struct DiscreteMasterProperty__Fuse_Resources_ImageSource__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource__uType
{
};

DiscreteMasterProperty__Fuse_Resources_ImageSource__uType* DiscreteMasterProperty__Fuse_Resources_ImageSource__typeof();

void DiscreteMasterProperty__Fuse_Resources_ImageSource___ObjInit_2(DiscreteMasterProperty__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Resources_ImageSource* DiscreteMasterProperty__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Resources_ImageSource__OnComplete(DiscreteMasterProperty__Fuse_Resources_ImageSource* __this);

struct DiscreteMasterProperty__Fuse_Resources_ImageSource : ::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Resources_ImageSource___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif