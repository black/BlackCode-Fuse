// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__CHAR_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__CHAR_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__char.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__char;

struct MasterProperty__char__uType : ::app::Fuse::Animations::MasterBase__char__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__char__uType* MasterProperty__char__typeof();

void MasterProperty__char___ObjInit_1(MasterProperty__char* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::uChar MasterProperty__char__get_RestValue(MasterProperty__char* __this);
::uObject* MasterProperty__char__GetPropertyObject(MasterProperty__char* __this);
void MasterProperty__char__OnInactive(MasterProperty__char* __this);

struct MasterProperty__char : ::app::Fuse::Animations::MasterBase__char
{
    ::uStrong< ::app::Uno::UX::Property__char*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__char___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__char__GetPropertyObject(this); }
};

}}}


#endif
