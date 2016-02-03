// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__OBJECT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__object.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__object;

struct DiscreteMasterProperty__object__uType : ::app::Fuse::Animations::MasterProperty__object__uType
{
};

DiscreteMasterProperty__object__uType* DiscreteMasterProperty__object__typeof();

void DiscreteMasterProperty__object___ObjInit_2(DiscreteMasterProperty__object* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__object* DiscreteMasterProperty__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__object__OnComplete(DiscreteMasterProperty__object* __this);

struct DiscreteMasterProperty__object : ::app::Fuse::Animations::MasterProperty__object
{
    void _ObjInit_2(::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__object___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
