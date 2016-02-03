// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__DOUBLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__double.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__double;

struct DiscreteMasterProperty__double__uType : ::app::Fuse::Animations::MasterProperty__double__uType
{
};

DiscreteMasterProperty__double__uType* DiscreteMasterProperty__double__typeof();

void DiscreteMasterProperty__double___ObjInit_2(DiscreteMasterProperty__double* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__double* DiscreteMasterProperty__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__double__OnComplete(DiscreteMasterProperty__double* __this);

struct DiscreteMasterProperty__double : ::app::Fuse::Animations::MasterProperty__double
{
    void _ObjInit_2(::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__double___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
