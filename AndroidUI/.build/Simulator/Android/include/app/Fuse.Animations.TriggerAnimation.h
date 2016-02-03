// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRIGGER_ANIMATION_H__
#define __APP_FUSE_ANIMATIONS_TRIGGER_ANIMATION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Player; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimationState; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Animator; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct TriggerAnimation;

struct TriggerAnimation__uType : ::uClassType
{
};

TriggerAnimation__uType* TriggerAnimation__typeof();

void TriggerAnimation___ObjInit(TriggerAnimation* __this);
::uArray* TriggerAnimation__CreateAnimatorsState(TriggerAnimation* __this, int variant, ::app::Fuse::Node* elm);
::app::Fuse::Animations::Player* TriggerAnimation__CreatePlayer(TriggerAnimation* __this, ::app::Fuse::Node* node, int variant);
::app::Fuse::Animations::TriggerAnimationState* TriggerAnimation__CreateState(TriggerAnimation* __this, ::app::Fuse::Node* elm);
::uObject* TriggerAnimation__get_Animators(TriggerAnimation* __this);
TriggerAnimation* TriggerAnimation__get_Backward(TriggerAnimation* __this);
bool TriggerAnimation__get_HasAnimators(TriggerAnimation* __this);
bool TriggerAnimation__get_HasDirectionVariant(TriggerAnimation* __this);
double TriggerAnimation__GetTotalDuration(TriggerAnimation* __this, int variant);
TriggerAnimation* TriggerAnimation__New_1(::uStatic* __this);
int TriggerAnimation__RestrictVariant(TriggerAnimation* __this, int variant);
void TriggerAnimation__set_Backward(TriggerAnimation* __this, TriggerAnimation* value);

struct TriggerAnimation : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_Animator*> _animators;
    ::uStrong< TriggerAnimation*> _backward;

    void _ObjInit() { TriggerAnimation___ObjInit(this); }
    ::uArray* CreateAnimatorsState(int variant, ::app::Fuse::Node* elm) { return TriggerAnimation__CreateAnimatorsState(this, variant, elm); }
    ::app::Fuse::Animations::Player* CreatePlayer(::app::Fuse::Node* node, int variant) { return TriggerAnimation__CreatePlayer(this, node, variant); }
    ::app::Fuse::Animations::TriggerAnimationState* CreateState(::app::Fuse::Node* elm) { return TriggerAnimation__CreateState(this, elm); }
    ::uObject* Animators() { return TriggerAnimation__get_Animators(this); }
    TriggerAnimation* Backward() { return TriggerAnimation__get_Backward(this); }
    bool HasAnimators() { return TriggerAnimation__get_HasAnimators(this); }
    bool HasDirectionVariant() { return TriggerAnimation__get_HasDirectionVariant(this); }
    double GetTotalDuration(int variant) { return TriggerAnimation__GetTotalDuration(this, variant); }
    int RestrictVariant(int variant) { return TriggerAnimation__RestrictVariant(this, variant); }
    void Backward(TriggerAnimation* value) { TriggerAnimation__set_Backward(this, value); }
};

}}}


#endif
