// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FLOAT2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__float2.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__float2; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__float2;

struct MasterProperty__float2__uType : ::app::Fuse::Animations::MasterBase__float2__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__float2__uType* MasterProperty__float2__typeof();

void MasterProperty__float2___ObjInit_1(MasterProperty__float2* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Uno::Float2 MasterProperty__float2__get_RestValue(MasterProperty__float2* __this);
::uObject* MasterProperty__float2__GetPropertyObject(MasterProperty__float2* __this);
void MasterProperty__float2__OnInactive(MasterProperty__float2* __this);

struct MasterProperty__float2 : ::app::Fuse::Animations::MasterBase__float2
{
    ::uStrong< ::app::Uno::UX::Property__float2*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__float2___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__float2__GetPropertyObject(this); }
};

}}}


#endif
