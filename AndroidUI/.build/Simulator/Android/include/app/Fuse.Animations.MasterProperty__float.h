// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FLOAT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__float;

struct MasterProperty__float__uType : ::app::Fuse::Animations::MasterBase__float__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__float__uType* MasterProperty__float__typeof();

void MasterProperty__float___ObjInit_1(MasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase);
float MasterProperty__float__get_RestValue(MasterProperty__float* __this);
::uObject* MasterProperty__float__GetPropertyObject(MasterProperty__float* __this);
void MasterProperty__float__OnInactive(MasterProperty__float* __this);

struct MasterProperty__float : ::app::Fuse::Animations::MasterBase__float
{
    ::uStrong< ::app::Uno::UX::Property__float*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__float___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__float__GetPropertyObject(this); }
};

}}}


#endif
