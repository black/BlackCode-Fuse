// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT2_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__int2.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__int2; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__int2;

struct MasterProperty__int2__uType : ::app::Fuse::Animations::MasterBase__int2__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__int2__uType* MasterProperty__int2__typeof();

void MasterProperty__int2___ObjInit_1(MasterProperty__int2* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Uno::Int2 MasterProperty__int2__get_RestValue(MasterProperty__int2* __this);
::uObject* MasterProperty__int2__GetPropertyObject(MasterProperty__int2* __this);
void MasterProperty__int2__OnInactive(MasterProperty__int2* __this);

struct MasterProperty__int2 : ::app::Fuse::Animations::MasterBase__int2
{
    ::uStrong< ::app::Uno::UX::Property__int2*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__int2___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__int2__GetPropertyObject(this); }
};

}}}


#endif
