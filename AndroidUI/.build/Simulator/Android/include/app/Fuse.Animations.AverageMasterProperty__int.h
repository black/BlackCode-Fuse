// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__INT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__INT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__int.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__int; } } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__int;

struct AverageMasterProperty__int__uType : ::app::Fuse::Animations::MasterProperty__int__uType
{
};

AverageMasterProperty__int__uType* AverageMasterProperty__int__typeof();

void AverageMasterProperty__int___ObjInit_2(AverageMasterProperty__int* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__int* AverageMasterProperty__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__int__OnActive(AverageMasterProperty__int* __this);
void AverageMasterProperty__int__OnComplete(AverageMasterProperty__int* __this);

struct AverageMasterProperty__int : ::app::Fuse::Animations::MasterProperty__int
{
    ::uStrong< ::app::Fuse::Internal::Blender__int*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__int___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
