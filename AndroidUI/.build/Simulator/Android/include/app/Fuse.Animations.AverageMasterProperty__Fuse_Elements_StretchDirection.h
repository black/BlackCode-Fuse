// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_STRETCH_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_STRETCH_DIRECTION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_StretchDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_StretchDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_StretchDirection;

struct AverageMasterProperty__Fuse_Elements_StretchDirection__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection__uType
{
};

AverageMasterProperty__Fuse_Elements_StretchDirection__uType* AverageMasterProperty__Fuse_Elements_StretchDirection__typeof();

void AverageMasterProperty__Fuse_Elements_StretchDirection___ObjInit_2(AverageMasterProperty__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_StretchDirection* AverageMasterProperty__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_StretchDirection__OnActive(AverageMasterProperty__Fuse_Elements_StretchDirection* __this);
void AverageMasterProperty__Fuse_Elements_StretchDirection__OnComplete(AverageMasterProperty__Fuse_Elements_StretchDirection* __this);

struct AverageMasterProperty__Fuse_Elements_StretchDirection : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_StretchDirection
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_StretchDirection___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
