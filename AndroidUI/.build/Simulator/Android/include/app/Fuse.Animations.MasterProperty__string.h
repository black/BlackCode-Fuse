// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__STRING_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__STRING_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__string.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__string;

struct MasterProperty__string__uType : ::app::Fuse::Animations::MasterBase__string__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__string__uType* MasterProperty__string__typeof();

void MasterProperty__string___ObjInit_1(MasterProperty__string* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::uString* MasterProperty__string__get_RestValue(MasterProperty__string* __this);
::uObject* MasterProperty__string__GetPropertyObject(MasterProperty__string* __this);
void MasterProperty__string__OnInactive(MasterProperty__string* __this);

struct MasterProperty__string : ::app::Fuse::Animations::MasterBase__string
{
    ::uStrong< ::app::Uno::UX::Property__string*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__string___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__string__GetPropertyObject(this); }
};

}}}


#endif
