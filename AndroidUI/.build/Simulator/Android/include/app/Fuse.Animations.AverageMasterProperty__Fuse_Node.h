// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NODE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Node.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Node; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Node;

struct AverageMasterProperty__Fuse_Node__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Node__uType
{
};

AverageMasterProperty__Fuse_Node__uType* AverageMasterProperty__Fuse_Node__typeof();

void AverageMasterProperty__Fuse_Node___ObjInit_2(AverageMasterProperty__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Node* AverageMasterProperty__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Node__OnActive(AverageMasterProperty__Fuse_Node* __this);
void AverageMasterProperty__Fuse_Node__OnComplete(AverageMasterProperty__Fuse_Node* __this);

struct AverageMasterProperty__Fuse_Node : ::app::Fuse::Animations::MasterProperty__Fuse_Node
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Node*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Node___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
