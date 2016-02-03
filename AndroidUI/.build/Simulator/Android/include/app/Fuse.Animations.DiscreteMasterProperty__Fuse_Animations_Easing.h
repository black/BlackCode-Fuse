// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_ANIMATIONS_EASING_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_ANIMATIONS_EASING_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_Easing; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Animations_Easing;

struct DiscreteMasterProperty__Fuse_Animations_Easing__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing__uType
{
};

DiscreteMasterProperty__Fuse_Animations_Easing__uType* DiscreteMasterProperty__Fuse_Animations_Easing__typeof();

void DiscreteMasterProperty__Fuse_Animations_Easing___ObjInit_2(DiscreteMasterProperty__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Animations_Easing* DiscreteMasterProperty__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Animations_Easing__OnComplete(DiscreteMasterProperty__Fuse_Animations_Easing* __this);

struct DiscreteMasterProperty__Fuse_Animations_Easing : ::app::Fuse::Animations::MasterProperty__Fuse_Animations_Easing
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Animations_Easing___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
