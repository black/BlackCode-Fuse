// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_LinearGradient; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Drawing_LinearGradient;

struct DiscreteMasterProperty__Fuse_Drawing_LinearGradient__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient__uType
{
};

DiscreteMasterProperty__Fuse_Drawing_LinearGradient__uType* DiscreteMasterProperty__Fuse_Drawing_LinearGradient__typeof();

void DiscreteMasterProperty__Fuse_Drawing_LinearGradient___ObjInit_2(DiscreteMasterProperty__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Drawing_LinearGradient* DiscreteMasterProperty__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Drawing_LinearGradient__OnComplete(DiscreteMasterProperty__Fuse_Drawing_LinearGradient* __this);

struct DiscreteMasterProperty__Fuse_Drawing_LinearGradient : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_LinearGradient
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Drawing_LinearGradient___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
