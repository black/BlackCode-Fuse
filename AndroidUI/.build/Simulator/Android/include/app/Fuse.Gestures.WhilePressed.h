// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_WHILE_PRESSED_H__
#define __APP_FUSE_GESTURES_WHILE_PRESSED_H__

#include <app/Fuse.Gestures.WhileClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct WhilePressed;

struct WhilePressed__uType : ::app::Fuse::Gestures::WhileClickerTrigger__uType
{
};

WhilePressed__uType* WhilePressed__typeof();

void WhilePressed___ObjInit_4(WhilePressed* __this);
int WhilePressed__get_PointerType(WhilePressed* __this);
WhilePressed* WhilePressed__New_1(::uStatic* __this);
void WhilePressed__OnPointerPressing(WhilePressed* __this, ::app::Fuse::Input::PointerEventArgs* args, int count);
void WhilePressed__OnRooted(WhilePressed* __this, ::app::Fuse::Node* elm);
void WhilePressed__OnUnrooted(WhilePressed* __this, ::app::Fuse::Node* elm);
void WhilePressed__set_PointerType(WhilePressed* __this, int value);

struct WhilePressed : ::app::Fuse::Gestures::WhileClickerTrigger
{
    int _pointerType;

    void _ObjInit_4() { WhilePressed___ObjInit_4(this); }
    int PointerType() { return WhilePressed__get_PointerType(this); }
    void OnPointerPressing(::app::Fuse::Input::PointerEventArgs* args, int count) { WhilePressed__OnPointerPressing(this, args, count); }
    void PointerType(int value) { WhilePressed__set_PointerType(this, value); }
};

}}}


#endif
