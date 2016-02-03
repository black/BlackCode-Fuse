// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_GradientStop; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Drawing_GradientStop;

struct AverageMasterProperty__Fuse_Drawing_GradientStop__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop__uType
{
};

AverageMasterProperty__Fuse_Drawing_GradientStop__uType* AverageMasterProperty__Fuse_Drawing_GradientStop__typeof();

void AverageMasterProperty__Fuse_Drawing_GradientStop___ObjInit_2(AverageMasterProperty__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Drawing_GradientStop* AverageMasterProperty__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Drawing_GradientStop__OnActive(AverageMasterProperty__Fuse_Drawing_GradientStop* __this);
void AverageMasterProperty__Fuse_Drawing_GradientStop__OnComplete(AverageMasterProperty__Fuse_Drawing_GradientStop* __this);

struct AverageMasterProperty__Fuse_Drawing_GradientStop : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Drawing_GradientStop___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
