// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__OBJECT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__object.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__object;

struct MasterProperty__object__uType : ::app::Fuse::Animations::MasterBase__object__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__object__uType* MasterProperty__object__typeof();

void MasterProperty__object___ObjInit_1(MasterProperty__object* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::uObject* MasterProperty__object__get_RestValue(MasterProperty__object* __this);
::uObject* MasterProperty__object__GetPropertyObject(MasterProperty__object* __this);
void MasterProperty__object__OnInactive(MasterProperty__object* __this);

struct MasterProperty__object : ::app::Fuse::Animations::MasterBase__object
{
    ::uStrong< ::app::Uno::UX::Property__object*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__object___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__object__GetPropertyObject(this); }
};

}}}


#endif
