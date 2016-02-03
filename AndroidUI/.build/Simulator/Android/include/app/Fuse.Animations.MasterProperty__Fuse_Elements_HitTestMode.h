// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_HitTestMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Elements_HitTestMode;

struct MasterProperty__Fuse_Elements_HitTestMode__uType : ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Elements_HitTestMode__uType* MasterProperty__Fuse_Elements_HitTestMode__typeof();

void MasterProperty__Fuse_Elements_HitTestMode___ObjInit_1(MasterProperty__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Elements_HitTestMode__get_RestValue(MasterProperty__Fuse_Elements_HitTestMode* __this);
::uObject* MasterProperty__Fuse_Elements_HitTestMode__GetPropertyObject(MasterProperty__Fuse_Elements_HitTestMode* __this);
void MasterProperty__Fuse_Elements_HitTestMode__OnInactive(MasterProperty__Fuse_Elements_HitTestMode* __this);

struct MasterProperty__Fuse_Elements_HitTestMode : ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Elements_HitTestMode___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Elements_HitTestMode__GetPropertyObject(this); }
};

}}}


#endif
