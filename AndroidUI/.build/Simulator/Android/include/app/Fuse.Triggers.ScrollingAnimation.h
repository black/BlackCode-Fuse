// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_SCROLLING_ANIMATION_H__
#define __APP_FUSE_TRIGGERS_SCROLLING_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct ScrollingAnimation;

struct ScrollingAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

ScrollingAnimation__uType* ScrollingAnimation__typeof();

void ScrollingAnimation___ObjInit_2(ScrollingAnimation* __this);
float ScrollingAnimation__get_From(ScrollingAnimation* __this);
bool ScrollingAnimation__get_Inverse(ScrollingAnimation* __this);
double ScrollingAnimation__get_Progress_1(ScrollingAnimation* __this);
int ScrollingAnimation__get_Range(ScrollingAnimation* __this);
int ScrollingAnimation__get_ScrollDirections(ScrollingAnimation* __this);
float ScrollingAnimation__get_To(ScrollingAnimation* __this);
ScrollingAnimation* ScrollingAnimation__New_1(::uStatic* __this);
void ScrollingAnimation__OnRooted(ScrollingAnimation* __this, ::app::Fuse::Node* elm);
void ScrollingAnimation__OnScrollPositionChanged(ScrollingAnimation* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void ScrollingAnimation__OnUnrooted(ScrollingAnimation* __this, ::app::Fuse::Node* elm);
void ScrollingAnimation__set_From(ScrollingAnimation* __this, float value);
void ScrollingAnimation__set_Inverse(ScrollingAnimation* __this, bool value);
void ScrollingAnimation__set_Range(ScrollingAnimation* __this, int value);
void ScrollingAnimation__set_ScrollDirections(ScrollingAnimation* __this, int value);
void ScrollingAnimation__set_To(ScrollingAnimation* __this, float value);

struct ScrollingAnimation : ::app::Fuse::Triggers::Trigger
{
    int _range;
    float _from;
    float _to;
    bool _hasFrom;
    bool _hasTo;
    ::uStrong< ::app::Fuse::Controls::ScrollView*> _scrollable;
    int _ScrollDirections;
    bool _Inverse;

    void _ObjInit_2() { ScrollingAnimation___ObjInit_2(this); }
    float From() { return ScrollingAnimation__get_From(this); }
    bool Inverse() { return ScrollingAnimation__get_Inverse(this); }
    double Progress_1() { return ScrollingAnimation__get_Progress_1(this); }
    int Range() { return ScrollingAnimation__get_Range(this); }
    int ScrollDirections() { return ScrollingAnimation__get_ScrollDirections(this); }
    float To() { return ScrollingAnimation__get_To(this); }
    void OnScrollPositionChanged(::uObject* sender, ::app::Uno::EventArgs* args) { ScrollingAnimation__OnScrollPositionChanged(this, sender, args); }
    void From(float value) { ScrollingAnimation__set_From(this, value); }
    void Inverse(bool value) { ScrollingAnimation__set_Inverse(this, value); }
    void Range(int value) { ScrollingAnimation__set_Range(this, value); }
    void ScrollDirections(int value) { ScrollingAnimation__set_ScrollDirections(this, value); }
    void To(float value) { ScrollingAnimation__set_To(this, value); }
};

}}}


#endif
