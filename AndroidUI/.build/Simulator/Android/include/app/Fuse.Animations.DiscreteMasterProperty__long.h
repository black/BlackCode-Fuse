// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__LONG_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__LONG_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__long.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__long; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__long;

struct DiscreteMasterProperty__long__uType : ::app::Fuse::Animations::MasterProperty__long__uType
{
};

DiscreteMasterProperty__long__uType* DiscreteMasterProperty__long__typeof();

void DiscreteMasterProperty__long___ObjInit_2(DiscreteMasterProperty__long* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__long* DiscreteMasterProperty__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__long__OnComplete(DiscreteMasterProperty__long* __this);

struct DiscreteMasterProperty__long : ::app::Fuse::Animations::MasterProperty__long
{
    void _ObjInit_2(::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__long___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
