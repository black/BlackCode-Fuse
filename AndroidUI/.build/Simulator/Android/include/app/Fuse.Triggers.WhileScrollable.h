// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_SCROLLABLE_H__
#define __APP_FUSE_TRIGGERS_WHILE_SCROLLABLE_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileScrollable;

struct WhileScrollable__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileScrollable__uType* WhileScrollable__typeof();

void WhileScrollable___ObjInit_3(WhileScrollable* __this);
int WhileScrollable__get_ScrollDirections(WhileScrollable* __this);
WhileScrollable* WhileScrollable__New_1(::uStatic* __this);
void WhileScrollable__OnRooted(WhileScrollable* __this, ::app::Fuse::Node* elm);
void WhileScrollable__OnScrollPositionChanged(WhileScrollable* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileScrollable__OnUnrooted(WhileScrollable* __this, ::app::Fuse::Node* elm);
void WhileScrollable__set_ScrollDirections(WhileScrollable* __this, int value);
void WhileScrollable__Update(WhileScrollable* __this);

struct WhileScrollable : ::app::Fuse::Triggers::WhileTrigger
{
    ::uStrong< ::app::Fuse::Controls::ScrollView*> _scrollable;
    int _ScrollDirections;

    void _ObjInit_3() { WhileScrollable___ObjInit_3(this); }
    int ScrollDirections() { return WhileScrollable__get_ScrollDirections(this); }
    void OnScrollPositionChanged(::uObject* sender, ::app::Uno::EventArgs* args) { WhileScrollable__OnScrollPositionChanged(this, sender, args); }
    void ScrollDirections(int value) { WhileScrollable__set_ScrollDirections(this, value); }
    void Update() { WhileScrollable__Update(this); }
};

}}}


#endif
