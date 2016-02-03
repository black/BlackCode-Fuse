// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_MASTER_TRANSFORM_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct FastMatrixTransform; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterTransform;

extern ::uStaticStrong< ::app::Fuse::Transform*> MasterTransform__identity;

struct MasterTransform__uType : ::app::Fuse::Animations::MasterBase__Fuse_Transform__uType
{
};

MasterTransform__uType* MasterTransform__typeof();

void MasterTransform___ObjInit_1(MasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterTransform___TypeInit(::uStatic* __this);
bool MasterTransform__get_PostLayout(MasterTransform* __this);
::app::Fuse::Transform* MasterTransform__get_RestValue(MasterTransform* __this);
void MasterTransform__OnActive(MasterTransform* __this);
void MasterTransform__OnInactive(MasterTransform* __this);

struct MasterTransform : ::app::Fuse::Animations::MasterBase__Fuse_Transform
{
    ::uStrong< ::app::Fuse::Node*> Node;
    ::uStrong< ::app::Fuse::Animations::FastMatrixTransform*> FMT;

    void _ObjInit_1(::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterTransform___ObjInit_1(this, node, mixerBase); }
};

}}}


#endif
