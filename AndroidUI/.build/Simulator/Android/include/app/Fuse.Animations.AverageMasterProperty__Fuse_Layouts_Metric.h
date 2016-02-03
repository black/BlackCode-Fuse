// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_LAYOUTS_METRIC_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_LAYOUTS_METRIC_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_Metric; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Metric; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Layouts_Metric;

struct AverageMasterProperty__Fuse_Layouts_Metric__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric__uType
{
};

AverageMasterProperty__Fuse_Layouts_Metric__uType* AverageMasterProperty__Fuse_Layouts_Metric__typeof();

void AverageMasterProperty__Fuse_Layouts_Metric___ObjInit_2(AverageMasterProperty__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Layouts_Metric* AverageMasterProperty__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Layouts_Metric__OnActive(AverageMasterProperty__Fuse_Layouts_Metric* __this);
void AverageMasterProperty__Fuse_Layouts_Metric__OnComplete(AverageMasterProperty__Fuse_Layouts_Metric* __this);

struct AverageMasterProperty__Fuse_Layouts_Metric : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Metric
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Layouts_Metric*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Layouts_Metric___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
