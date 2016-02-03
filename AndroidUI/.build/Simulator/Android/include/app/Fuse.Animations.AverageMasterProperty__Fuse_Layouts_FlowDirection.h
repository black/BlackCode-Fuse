// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_LAYOUTS_FLOW_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_LAYOUTS_FLOW_DIRECTION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_FlowDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Layouts_FlowDirection;

struct AverageMasterProperty__Fuse_Layouts_FlowDirection__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection__uType
{
};

AverageMasterProperty__Fuse_Layouts_FlowDirection__uType* AverageMasterProperty__Fuse_Layouts_FlowDirection__typeof();

void AverageMasterProperty__Fuse_Layouts_FlowDirection___ObjInit_2(AverageMasterProperty__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Layouts_FlowDirection* AverageMasterProperty__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Layouts_FlowDirection__OnActive(AverageMasterProperty__Fuse_Layouts_FlowDirection* __this);
void AverageMasterProperty__Fuse_Layouts_FlowDirection__OnComplete(AverageMasterProperty__Fuse_Layouts_FlowDirection* __this);

struct AverageMasterProperty__Fuse_Layouts_FlowDirection : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_FlowDirection
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Layouts_FlowDirection___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
