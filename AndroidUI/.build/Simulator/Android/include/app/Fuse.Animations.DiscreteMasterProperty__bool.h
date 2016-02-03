// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__BOOL_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__BOOL_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__bool;

struct DiscreteMasterProperty__bool__uType : ::app::Fuse::Animations::MasterProperty__bool__uType
{
};

DiscreteMasterProperty__bool__uType* DiscreteMasterProperty__bool__typeof();

void DiscreteMasterProperty__bool___ObjInit_2(DiscreteMasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__bool* DiscreteMasterProperty__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__bool__OnComplete(DiscreteMasterProperty__bool* __this);

struct DiscreteMasterProperty__bool : ::app::Fuse::Animations::MasterProperty__bool
{
    void _ObjInit_2(::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__bool___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
