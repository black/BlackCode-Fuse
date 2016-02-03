// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT4_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT4_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__int4.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__int4; } } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__int4;

struct MasterProperty__int4__uType : ::app::Fuse::Animations::MasterBase__int4__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__int4__uType* MasterProperty__int4__typeof();

void MasterProperty__int4___ObjInit_1(MasterProperty__int4* __this, ::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Uno::Int4 MasterProperty__int4__get_RestValue(MasterProperty__int4* __this);
::uObject* MasterProperty__int4__GetPropertyObject(MasterProperty__int4* __this);
void MasterProperty__int4__OnInactive(MasterProperty__int4* __this);

struct MasterProperty__int4 : ::app::Fuse::Animations::MasterBase__int4
{
    ::uStrong< ::app::Uno::UX::Property__int4*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__int4___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__int4__GetPropertyObject(this); }
};

}}}


#endif
