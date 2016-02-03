// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_NODE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_NODE_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Node; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Node;

struct MixerHandle__Fuse_Node__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Node __interface_0;
};

MixerHandle__Fuse_Node__uType* MixerHandle__Fuse_Node__typeof();

void MixerHandle__Fuse_Node___ObjInit(MixerHandle__Fuse_Node* __this, ::app::Fuse::Animations::MasterBase__Fuse_Node* master, int mode, int priority);
bool MixerHandle__Fuse_Node__get_HasValue(MixerHandle__Fuse_Node* __this);
int MixerHandle__Fuse_Node__get_MixOp(MixerHandle__Fuse_Node* __this);
int MixerHandle__Fuse_Node__get_Priority(MixerHandle__Fuse_Node* __this);
::app::Fuse::Node* MixerHandle__Fuse_Node__get_RestValue(MixerHandle__Fuse_Node* __this);
MixerHandle__Fuse_Node* MixerHandle__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Node* master, int mode, int priority);
void MixerHandle__Fuse_Node__Set(MixerHandle__Fuse_Node* __this, ::app::Fuse::Node* value, float strength);
void MixerHandle__Fuse_Node__set_MixOp(MixerHandle__Fuse_Node* __this, int value);
void MixerHandle__Fuse_Node__set_Priority(MixerHandle__Fuse_Node* __this, int value);
void MixerHandle__Fuse_Node__Unregister(MixerHandle__Fuse_Node* __this);

struct MixerHandle__Fuse_Node : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Node*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Node* master, int mode, int priority) { MixerHandle__Fuse_Node___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Node__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Node__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Node__get_Priority(this); }
    ::app::Fuse::Node* RestValue() { return MixerHandle__Fuse_Node__get_RestValue(this); }
    void Set(::app::Fuse::Node* value, float strength) { MixerHandle__Fuse_Node__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Node__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Node__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Node__Unregister(this); }
};

}}}


#endif
