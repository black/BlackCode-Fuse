// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_TRANSFORM_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterTransform;

struct DiscreteMasterTransform__uType : ::app::Fuse::Animations::MasterTransform__uType
{
};

DiscreteMasterTransform__uType* DiscreteMasterTransform__typeof();

void DiscreteMasterTransform___ObjInit_2(DiscreteMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterTransform* DiscreteMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterTransform__OnComplete(DiscreteMasterTransform* __this);

struct DiscreteMasterTransform : ::app::Fuse::Animations::MasterTransform
{
    void _ObjInit_2(::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterTransform___ObjInit_2(this, node, mixerBase); }
};

}}}


#endif
