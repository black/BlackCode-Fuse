// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollingAnimation;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class ScrollingAnimation :234
// {
::g::Fuse::Triggers::Trigger_type* ScrollingAnimation_typeof();
void ScrollingAnimation__ctor_2_fn(ScrollingAnimation* __this);
void ScrollingAnimation__get_From_fn(ScrollingAnimation* __this, float* __retval);
void ScrollingAnimation__set_From_fn(ScrollingAnimation* __this, float* value);
void ScrollingAnimation__get_Inverse_fn(ScrollingAnimation* __this, bool* __retval);
void ScrollingAnimation__set_Inverse_fn(ScrollingAnimation* __this, bool* value);
void ScrollingAnimation__New1_fn(ScrollingAnimation** __retval);
void ScrollingAnimation__OnRooted_fn(ScrollingAnimation* __this, ::g::Fuse::Node* parentNode);
void ScrollingAnimation__OnScrollPositionChanged_fn(ScrollingAnimation* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ScrollingAnimation__OnUnrooted_fn(ScrollingAnimation* __this, ::g::Fuse::Node* parentNode);
void ScrollingAnimation__get_Progress1_fn(ScrollingAnimation* __this, double* __retval);
void ScrollingAnimation__get_Range_fn(ScrollingAnimation* __this, int* __retval);
void ScrollingAnimation__set_Range_fn(ScrollingAnimation* __this, int* value);
void ScrollingAnimation__get_ScrollDirections_fn(ScrollingAnimation* __this, int* __retval);
void ScrollingAnimation__set_ScrollDirections_fn(ScrollingAnimation* __this, int* value);
void ScrollingAnimation__get_To_fn(ScrollingAnimation* __this, float* __retval);
void ScrollingAnimation__set_To_fn(ScrollingAnimation* __this, float* value);

struct ScrollingAnimation : ::g::Fuse::Triggers::Trigger
{
    float _from;
    bool _hasFrom;
    bool _hasTo;
    int _range;
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    float _to;
    bool _Inverse;
    int _ScrollDirections;

    void ctor_2();
    float From();
    void From(float value);
    bool Inverse();
    void Inverse(bool value);
    void OnScrollPositionChanged(uObject* sender, ::g::Uno::EventArgs* args);
    double Progress1();
    int Range();
    void Range(int value);
    int ScrollDirections();
    void ScrollDirections(int value);
    float To();
    void To(float value);
    static ScrollingAnimation* New1();
};
// }

}}} // ::g::Fuse::Triggers
