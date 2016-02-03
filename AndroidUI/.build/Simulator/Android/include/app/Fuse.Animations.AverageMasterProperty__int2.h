// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__INT2_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__INT2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__int2.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__int2; } } }
namespace app { namespace Uno { namespace UX { struct Property__int2; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__int2;

struct AverageMasterProperty__int2__uType : ::app::Fuse::Animations::MasterProperty__int2__uType
{
};

AverageMasterProperty__int2__uType* AverageMasterProperty__int2__typeof();

void AverageMasterProperty__int2___ObjInit_2(AverageMasterProperty__int2* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__int2* AverageMasterProperty__int2__New_1(::uStatic* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__int2__OnActive(AverageMasterProperty__int2* __this);
void AverageMasterProperty__int2__OnComplete(AverageMasterProperty__int2* __this);

struct AverageMasterProperty__int2 : ::app::Fuse::Animations::MasterProperty__int2
{
    ::uStrong< ::app::Fuse::Internal::Blender__int2*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__int2___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
