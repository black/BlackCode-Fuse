// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__float;

struct AverageMasterProperty__float__uType : ::app::Fuse::Animations::MasterProperty__float__uType
{
};

AverageMasterProperty__float__uType* AverageMasterProperty__float__typeof();

void AverageMasterProperty__float___ObjInit_2(AverageMasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__float* AverageMasterProperty__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__float__OnActive(AverageMasterProperty__float* __this);
void AverageMasterProperty__float__OnComplete(AverageMasterProperty__float* __this);

struct AverageMasterProperty__float : ::app::Fuse::Animations::MasterProperty__float
{
    ::uStrong< ::app::Fuse::Internal::Blender__float*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__float___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
