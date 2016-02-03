// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__SHORT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__SHORT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__short.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__short;

struct DiscreteMasterProperty__short__uType : ::app::Fuse::Animations::MasterProperty__short__uType
{
};

DiscreteMasterProperty__short__uType* DiscreteMasterProperty__short__typeof();

void DiscreteMasterProperty__short___ObjInit_2(DiscreteMasterProperty__short* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__short* DiscreteMasterProperty__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__short__OnComplete(DiscreteMasterProperty__short* __this);

struct DiscreteMasterProperty__short : ::app::Fuse::Animations::MasterProperty__short
{
    void _ObjInit_2(::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__short___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
