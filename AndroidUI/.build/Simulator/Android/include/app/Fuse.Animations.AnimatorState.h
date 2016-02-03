// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_ANIMATOR_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct AnimatorState;

struct AnimatorState__uType : ::uClassType
{
    void(*__fp_Disable)(AnimatorState*);
    bool(*__fp_get_IsOpenEnd)(AnimatorState*);
    bool(*__fp_SeekProgress)(AnimatorState*, double, double, int, double);
    bool(*__fp_SeekTime)(AnimatorState*, double, double, int, double);
};

AnimatorState__uType* AnimatorState__typeof();

void AnimatorState___ObjInit(AnimatorState* __this, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode);
void AnimatorState__Disable(AnimatorState* __this);
bool AnimatorState__get_IsOpenEnd(AnimatorState* __this);

struct AnimatorState : ::uObject
{
    int Variant;
    ::uStrong< ::app::Fuse::Node*> Node;
    double TotalDuration;

    void _ObjInit(::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode) { AnimatorState___ObjInit(this, p, useNode); }
    void Disable() { (((AnimatorState__uType*)this->__obj_type)->__fp_Disable)(this); }
    bool IsOpenEnd() { return (((AnimatorState__uType*)this->__obj_type)->__fp_get_IsOpenEnd)(this); }
    bool SeekProgress(double progress, double interval, int dir, double strength) { return (((AnimatorState__uType*)this->__obj_type)->__fp_SeekProgress)(this, progress, interval, dir, strength); }
    bool SeekTime(double nominal, double interval, int dir, double strength) { return (((AnimatorState__uType*)this->__obj_type)->__fp_SeekTime)(this, nominal, interval, dir, strength); }
};

}}}


#endif
