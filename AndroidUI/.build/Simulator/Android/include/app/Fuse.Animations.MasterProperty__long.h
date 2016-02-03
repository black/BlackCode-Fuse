// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__LONG_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__LONG_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__long.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__long; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__long;

struct MasterProperty__long__uType : ::app::Fuse::Animations::MasterBase__long__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__long__uType* MasterProperty__long__typeof();

void MasterProperty__long___ObjInit_1(MasterProperty__long* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::uLong MasterProperty__long__get_RestValue(MasterProperty__long* __this);
::uObject* MasterProperty__long__GetPropertyObject(MasterProperty__long* __this);
void MasterProperty__long__OnInactive(MasterProperty__long* __this);

struct MasterProperty__long : ::app::Fuse::Animations::MasterBase__long
{
    ::uStrong< ::app::Uno::UX::Property__long*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__long___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__long__GetPropertyObject(this); }
};

}}}


#endif
