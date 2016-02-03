// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FLOAT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__float;

struct DiscreteMasterProperty__float__uType : ::app::Fuse::Animations::MasterProperty__float__uType
{
};

DiscreteMasterProperty__float__uType* DiscreteMasterProperty__float__typeof();

void DiscreteMasterProperty__float___ObjInit_2(DiscreteMasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__float* DiscreteMasterProperty__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__float__OnComplete(DiscreteMasterProperty__float* __this);

struct DiscreteMasterProperty__float : ::app::Fuse::Animations::MasterProperty__float
{
    void _ObjInit_2(::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__float___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
