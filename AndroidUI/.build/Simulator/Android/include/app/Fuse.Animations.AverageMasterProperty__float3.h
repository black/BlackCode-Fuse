// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT3_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__float3.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float3; } } }
namespace app { namespace Uno { namespace UX { struct Property__float3; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__float3;

struct AverageMasterProperty__float3__uType : ::app::Fuse::Animations::MasterProperty__float3__uType
{
};

AverageMasterProperty__float3__uType* AverageMasterProperty__float3__typeof();

void AverageMasterProperty__float3___ObjInit_2(AverageMasterProperty__float3* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__float3* AverageMasterProperty__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__float3__OnActive(AverageMasterProperty__float3* __this);
void AverageMasterProperty__float3__OnComplete(AverageMasterProperty__float3* __this);

struct AverageMasterProperty__float3 : ::app::Fuse::Animations::MasterProperty__float3
{
    ::uStrong< ::app::Fuse::Internal::Blender__float3*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__float3___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
