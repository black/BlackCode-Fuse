// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FLOAT2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__float2.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }
namespace app { namespace Uno { namespace UX { struct Property__float2; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__float2;

struct AverageMasterProperty__float2__uType : ::app::Fuse::Animations::MasterProperty__float2__uType
{
};

AverageMasterProperty__float2__uType* AverageMasterProperty__float2__typeof();

void AverageMasterProperty__float2___ObjInit_2(AverageMasterProperty__float2* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__float2* AverageMasterProperty__float2__New_1(::uStatic* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__float2__OnActive(AverageMasterProperty__float2* __this);
void AverageMasterProperty__float2__OnComplete(AverageMasterProperty__float2* __this);

struct AverageMasterProperty__float2 : ::app::Fuse::Animations::MasterProperty__float2
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__float2___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
