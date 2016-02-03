// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Uno_EventArgs;

struct DiscreteMasterProperty__Uno_EventArgs__uType : ::app::Fuse::Animations::MasterProperty__Uno_EventArgs__uType
{
};

DiscreteMasterProperty__Uno_EventArgs__uType* DiscreteMasterProperty__Uno_EventArgs__typeof();

void DiscreteMasterProperty__Uno_EventArgs___ObjInit_2(DiscreteMasterProperty__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Uno_EventArgs* DiscreteMasterProperty__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Uno_EventArgs__OnComplete(DiscreteMasterProperty__Uno_EventArgs* __this);

struct DiscreteMasterProperty__Uno_EventArgs : ::app::Fuse::Animations::MasterProperty__Uno_EventArgs
{
    void _ObjInit_2(::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Uno_EventArgs___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
