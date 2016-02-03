// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_GradientStop; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Drawing_GradientStop;

struct DiscreteMasterProperty__Fuse_Drawing_GradientStop__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop__uType
{
};

DiscreteMasterProperty__Fuse_Drawing_GradientStop__uType* DiscreteMasterProperty__Fuse_Drawing_GradientStop__typeof();

void DiscreteMasterProperty__Fuse_Drawing_GradientStop___ObjInit_2(DiscreteMasterProperty__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Drawing_GradientStop* DiscreteMasterProperty__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Drawing_GradientStop__OnComplete(DiscreteMasterProperty__Fuse_Drawing_GradientStop* __this);

struct DiscreteMasterProperty__Fuse_Drawing_GradientStop : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_GradientStop
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Drawing_GradientStop___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
