// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_LinearGradient; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Drawing_LinearGradient;

struct AverageMasterProperty__Fuse_Drawing_LinearGradient__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient__uType
{
};

AverageMasterProperty__Fuse_Drawing_LinearGradient__uType* AverageMasterProperty__Fuse_Drawing_LinearGradient__typeof();

void AverageMasterProperty__Fuse_Drawing_LinearGradient___ObjInit_2(AverageMasterProperty__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Drawing_LinearGradient* AverageMasterProperty__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Drawing_LinearGradient__OnActive(AverageMasterProperty__Fuse_Drawing_LinearGradient* __this);
void AverageMasterProperty__Fuse_Drawing_LinearGradient__OnComplete(AverageMasterProperty__Fuse_Drawing_LinearGradient* __this);

struct AverageMasterProperty__Fuse_Drawing_LinearGradient : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Drawing_LinearGradient___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
