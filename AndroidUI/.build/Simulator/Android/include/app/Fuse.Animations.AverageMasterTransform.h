// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_TRANSFORM_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterTransform;

struct AverageMasterTransform__uType : ::app::Fuse::Animations::MasterTransform__uType
{
};

AverageMasterTransform__uType* AverageMasterTransform__typeof();

void AverageMasterTransform___ObjInit_2(AverageMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterTransform* AverageMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterTransform__OnComplete(AverageMasterTransform* __this);

struct AverageMasterTransform : ::app::Fuse::Animations::MasterTransform
{
    void _ObjInit_2(::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterTransform___ObjInit_2(this, node, mixerBase); }
};

}}}


#endif
