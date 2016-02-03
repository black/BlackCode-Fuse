// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATION_GOTO_MODE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATION_GOTO_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationGotoMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Navigation_NavigationGotoMode;

struct MasterProperty__Fuse_Navigation_NavigationGotoMode__uType : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Navigation_NavigationGotoMode__uType* MasterProperty__Fuse_Navigation_NavigationGotoMode__typeof();

void MasterProperty__Fuse_Navigation_NavigationGotoMode___ObjInit_1(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Navigation_NavigationGotoMode__get_RestValue(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this);
::uObject* MasterProperty__Fuse_Navigation_NavigationGotoMode__GetPropertyObject(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this);
void MasterProperty__Fuse_Navigation_NavigationGotoMode__OnInactive(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this);

struct MasterProperty__Fuse_Navigation_NavigationGotoMode : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Navigation_NavigationGotoMode___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Navigation_NavigationGotoMode__GetPropertyObject(this); }
};

}}}


#endif
