// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NODE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Node.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Node;

struct MasterProperty__Fuse_Node__uType : ::app::Fuse::Animations::MasterBase__Fuse_Node__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Node__uType* MasterProperty__Fuse_Node__typeof();

void MasterProperty__Fuse_Node___ObjInit_1(MasterProperty__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Node* MasterProperty__Fuse_Node__get_RestValue(MasterProperty__Fuse_Node* __this);
::uObject* MasterProperty__Fuse_Node__GetPropertyObject(MasterProperty__Fuse_Node* __this);
void MasterProperty__Fuse_Node__OnInactive(MasterProperty__Fuse_Node* __this);

struct MasterProperty__Fuse_Node : ::app::Fuse::Animations::MasterBase__Fuse_Node
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Node*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Node___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Node__GetPropertyObject(this); }
};

}}}


#endif
