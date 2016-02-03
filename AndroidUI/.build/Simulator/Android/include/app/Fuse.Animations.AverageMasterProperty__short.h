// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__SHORT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__SHORT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__short.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__short; } } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__short;

struct AverageMasterProperty__short__uType : ::app::Fuse::Animations::MasterProperty__short__uType
{
};

AverageMasterProperty__short__uType* AverageMasterProperty__short__typeof();

void AverageMasterProperty__short___ObjInit_2(AverageMasterProperty__short* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__short* AverageMasterProperty__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__short__OnActive(AverageMasterProperty__short* __this);
void AverageMasterProperty__short__OnComplete(AverageMasterProperty__short* __this);

struct AverageMasterProperty__short : ::app::Fuse::Animations::MasterProperty__short
{
    ::uStrong< ::app::Fuse::Internal::Blender__short*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__short___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
