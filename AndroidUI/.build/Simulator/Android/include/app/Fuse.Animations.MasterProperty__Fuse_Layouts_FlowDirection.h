// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_LAYOUTS_FLOW_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_LAYOUTS_FLOW_DIRECTION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_FlowDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Layouts_FlowDirection;

struct MasterProperty__Fuse_Layouts_FlowDirection__uType : ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Layouts_FlowDirection__uType* MasterProperty__Fuse_Layouts_FlowDirection__typeof();

void MasterProperty__Fuse_Layouts_FlowDirection___ObjInit_1(MasterProperty__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Layouts_FlowDirection__get_RestValue(MasterProperty__Fuse_Layouts_FlowDirection* __this);
::uObject* MasterProperty__Fuse_Layouts_FlowDirection__GetPropertyObject(MasterProperty__Fuse_Layouts_FlowDirection* __this);
void MasterProperty__Fuse_Layouts_FlowDirection__OnInactive(MasterProperty__Fuse_Layouts_FlowDirection* __this);

struct MasterProperty__Fuse_Layouts_FlowDirection : ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Layouts_FlowDirection___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Layouts_FlowDirection__GetPropertyObject(this); }
};

}}}


#endif
