// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__int.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__int;

struct MasterProperty__int__uType : ::app::Fuse::Animations::MasterBase__int__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__int__uType* MasterProperty__int__typeof();

void MasterProperty__int___ObjInit_1(MasterProperty__int* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__int__get_RestValue(MasterProperty__int* __this);
::uObject* MasterProperty__int__GetPropertyObject(MasterProperty__int* __this);
void MasterProperty__int__OnInactive(MasterProperty__int* __this);

struct MasterProperty__int : ::app::Fuse::Animations::MasterBase__int
{
    ::uStrong< ::app::Uno::UX::Property__int*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__int___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__int__GetPropertyObject(this); }
};

}}}


#endif
