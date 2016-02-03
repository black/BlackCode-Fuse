// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATION_EDGE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATION_EDGE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationEdge; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Navigation_NavigationEdge;

struct MasterProperty__Fuse_Navigation_NavigationEdge__uType : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Navigation_NavigationEdge__uType* MasterProperty__Fuse_Navigation_NavigationEdge__typeof();

void MasterProperty__Fuse_Navigation_NavigationEdge___ObjInit_1(MasterProperty__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Navigation_NavigationEdge__get_RestValue(MasterProperty__Fuse_Navigation_NavigationEdge* __this);
::uObject* MasterProperty__Fuse_Navigation_NavigationEdge__GetPropertyObject(MasterProperty__Fuse_Navigation_NavigationEdge* __this);
void MasterProperty__Fuse_Navigation_NavigationEdge__OnInactive(MasterProperty__Fuse_Navigation_NavigationEdge* __this);

struct MasterProperty__Fuse_Navigation_NavigationEdge : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Navigation_NavigationEdge___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Navigation_NavigationEdge__GetPropertyObject(this); }
};

}}}


#endif
