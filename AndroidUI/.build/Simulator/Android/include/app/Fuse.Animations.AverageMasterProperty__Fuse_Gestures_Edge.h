// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_GESTURES_EDGE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_GESTURES_EDGE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Gestures_Edge; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Gestures_Edge; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Gestures_Edge;

struct AverageMasterProperty__Fuse_Gestures_Edge__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge__uType
{
};

AverageMasterProperty__Fuse_Gestures_Edge__uType* AverageMasterProperty__Fuse_Gestures_Edge__typeof();

void AverageMasterProperty__Fuse_Gestures_Edge___ObjInit_2(AverageMasterProperty__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Gestures_Edge* AverageMasterProperty__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Gestures_Edge__OnActive(AverageMasterProperty__Fuse_Gestures_Edge* __this);
void AverageMasterProperty__Fuse_Gestures_Edge__OnComplete(AverageMasterProperty__Fuse_Gestures_Edge* __this);

struct AverageMasterProperty__Fuse_Gestures_Edge : ::app::Fuse::Animations::MasterProperty__Fuse_Gestures_Edge
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Gestures_Edge*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Gestures_Edge___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif