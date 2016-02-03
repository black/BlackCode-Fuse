// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_STRETCH_SIZING_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_STRETCH_SIZING_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_StretchSizing; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchSizing; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_StretchSizing;

struct AverageMasterProperty__Fuse_Elements_StretchSizing__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing__uType
{
};

AverageMasterProperty__Fuse_Elements_StretchSizing__uType* AverageMasterProperty__Fuse_Elements_StretchSizing__typeof();

void AverageMasterProperty__Fuse_Elements_StretchSizing___ObjInit_2(AverageMasterProperty__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_StretchSizing* AverageMasterProperty__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_StretchSizing__OnActive(AverageMasterProperty__Fuse_Elements_StretchSizing* __this);
void AverageMasterProperty__Fuse_Elements_StretchSizing__OnComplete(AverageMasterProperty__Fuse_Elements_StretchSizing* __this);

struct AverageMasterProperty__Fuse_Elements_StretchSizing : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchSizing
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_StretchSizing___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
