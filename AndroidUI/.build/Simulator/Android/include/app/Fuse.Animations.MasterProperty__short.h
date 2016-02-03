// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__SHORT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__SHORT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__short.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__short; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__short;

struct MasterProperty__short__uType : ::app::Fuse::Animations::MasterBase__short__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__short__uType* MasterProperty__short__typeof();

void MasterProperty__short___ObjInit_1(MasterProperty__short* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::uShort MasterProperty__short__get_RestValue(MasterProperty__short* __this);
::uObject* MasterProperty__short__GetPropertyObject(MasterProperty__short* __this);
void MasterProperty__short__OnInactive(MasterProperty__short* __this);

struct MasterProperty__short : ::app::Fuse::Animations::MasterBase__short
{
    ::uStrong< ::app::Uno::UX::Property__short*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__short___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__short__GetPropertyObject(this); }
};

}}}


#endif
