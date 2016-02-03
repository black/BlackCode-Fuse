// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__INT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__INT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__int.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__int;

struct DiscreteMasterProperty__int__uType : ::app::Fuse::Animations::MasterProperty__int__uType
{
};

DiscreteMasterProperty__int__uType* DiscreteMasterProperty__int__typeof();

void DiscreteMasterProperty__int___ObjInit_2(DiscreteMasterProperty__int* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__int* DiscreteMasterProperty__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__int__OnComplete(DiscreteMasterProperty__int* __this);

struct DiscreteMasterProperty__int : ::app::Fuse::Animations::MasterProperty__int
{
    void _ObjInit_2(::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__int___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
