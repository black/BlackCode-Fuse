// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Resources_ImageSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Resources_ImageSource;

struct AverageMasterProperty__Fuse_Resources_ImageSource__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource__uType
{
};

AverageMasterProperty__Fuse_Resources_ImageSource__uType* AverageMasterProperty__Fuse_Resources_ImageSource__typeof();

void AverageMasterProperty__Fuse_Resources_ImageSource___ObjInit_2(AverageMasterProperty__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Resources_ImageSource* AverageMasterProperty__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Resources_ImageSource__OnActive(AverageMasterProperty__Fuse_Resources_ImageSource* __this);
void AverageMasterProperty__Fuse_Resources_ImageSource__OnComplete(AverageMasterProperty__Fuse_Resources_ImageSource* __this);

struct AverageMasterProperty__Fuse_Resources_ImageSource : ::app::Fuse::Animations::MasterProperty__Fuse_Resources_ImageSource
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Resources_ImageSource___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
