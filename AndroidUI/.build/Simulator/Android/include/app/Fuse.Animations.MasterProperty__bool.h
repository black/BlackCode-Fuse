// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__BOOL_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__BOOL_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__bool;

struct MasterProperty__bool__uType : ::app::Fuse::Animations::MasterBase__bool__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__bool__uType* MasterProperty__bool__typeof();

void MasterProperty__bool___ObjInit_1(MasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
bool MasterProperty__bool__get_RestValue(MasterProperty__bool* __this);
::uObject* MasterProperty__bool__GetPropertyObject(MasterProperty__bool* __this);
void MasterProperty__bool__OnInactive(MasterProperty__bool* __this);

struct MasterProperty__bool : ::app::Fuse::Animations::MasterBase__bool
{
    ::uStrong< ::app::Uno::UX::Property__bool*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__bool___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__bool__GetPropertyObject(this); }
};

}}}


#endif
