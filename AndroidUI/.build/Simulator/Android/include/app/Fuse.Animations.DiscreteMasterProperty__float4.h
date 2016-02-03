// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FLOAT4_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__float4;

struct DiscreteMasterProperty__float4__uType : ::app::Fuse::Animations::MasterProperty__float4__uType
{
};

DiscreteMasterProperty__float4__uType* DiscreteMasterProperty__float4__typeof();

void DiscreteMasterProperty__float4___ObjInit_2(DiscreteMasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__float4* DiscreteMasterProperty__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__float4__OnComplete(DiscreteMasterProperty__float4* __this);

struct DiscreteMasterProperty__float4 : ::app::Fuse::Animations::MasterProperty__float4
{
    void _ObjInit_2(::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__float4___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
