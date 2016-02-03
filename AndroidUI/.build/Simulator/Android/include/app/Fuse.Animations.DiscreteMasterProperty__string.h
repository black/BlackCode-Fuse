// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__STRING_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__STRING_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__string.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__string;

struct DiscreteMasterProperty__string__uType : ::app::Fuse::Animations::MasterProperty__string__uType
{
};

DiscreteMasterProperty__string__uType* DiscreteMasterProperty__string__typeof();

void DiscreteMasterProperty__string___ObjInit_2(DiscreteMasterProperty__string* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__string* DiscreteMasterProperty__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__string__OnComplete(DiscreteMasterProperty__string* __this);

struct DiscreteMasterProperty__string : ::app::Fuse::Animations::MasterProperty__string
{
    void _ObjInit_2(::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__string___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
