// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Uno_EventArgs;

struct MasterProperty__Uno_EventArgs__uType : ::app::Fuse::Animations::MasterBase__Uno_EventArgs__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Uno_EventArgs__uType* MasterProperty__Uno_EventArgs__typeof();

void MasterProperty__Uno_EventArgs___ObjInit_1(MasterProperty__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Uno::EventArgs* MasterProperty__Uno_EventArgs__get_RestValue(MasterProperty__Uno_EventArgs* __this);
::uObject* MasterProperty__Uno_EventArgs__GetPropertyObject(MasterProperty__Uno_EventArgs* __this);
void MasterProperty__Uno_EventArgs__OnInactive(MasterProperty__Uno_EventArgs* __this);

struct MasterProperty__Uno_EventArgs : ::app::Fuse::Animations::MasterBase__Uno_EventArgs
{
    ::uStrong< ::app::Uno::UX::Property__Uno_EventArgs*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Uno_EventArgs___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Uno_EventArgs__GetPropertyObject(this); }
};

}}}


#endif
