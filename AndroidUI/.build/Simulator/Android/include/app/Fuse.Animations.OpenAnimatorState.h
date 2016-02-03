// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_STATE_H__

#include <app/Fuse.Animations.AnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct OpenAnimator; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct OpenAnimatorState;

struct OpenAnimatorState__uType : ::app::Fuse::Animations::AnimatorState__uType
{
    bool(*__fp_Seek)(OpenAnimatorState*, bool, float, float, int);
};

OpenAnimatorState__uType* OpenAnimatorState__typeof();

void OpenAnimatorState___ObjInit_1(OpenAnimatorState* __this, ::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode);
bool OpenAnimatorState__get_IsOpenEnd(OpenAnimatorState* __this);
bool OpenAnimatorState__SeekProgress(OpenAnimatorState* __this, double progress, double interval, int dir, double strength);
bool OpenAnimatorState__SeekTime(OpenAnimatorState* __this, double nominal, double interval, int dir, double strength);

struct OpenAnimatorState : ::app::Fuse::Animations::AnimatorState
{
    ::uStrong< ::app::Fuse::Animations::OpenAnimator*> Animator;
    bool _seekDone;

    void _ObjInit_1(::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode) { OpenAnimatorState___ObjInit_1(this, animator, p, useNode); }
    bool Seek(bool on, float interval, float strength, int dir) { return (((OpenAnimatorState__uType*)this->__obj_type)->__fp_Seek)(this, on, interval, strength, dir); }
};

}}}


#endif
