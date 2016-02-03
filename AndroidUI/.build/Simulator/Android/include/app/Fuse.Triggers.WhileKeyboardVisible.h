// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_KEYBOARD_VISIBLE_H__
#define __APP_FUSE_TRIGGERS_WHILE_KEYBOARD_VISIBLE_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Platform { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileKeyboardVisible;

extern float WhileKeyboardVisible___deltaY;
extern ::uStaticStrong< ::uObject*> WhileKeyboardVisible__Keyboard;

struct WhileKeyboardVisible__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileKeyboardVisible__uType* WhileKeyboardVisible__typeof();

void WhileKeyboardVisible___ObjInit_2(WhileKeyboardVisible* __this);
void WhileKeyboardVisible___TypeInit(::uStatic* __this);
float WhileKeyboardVisible__get_Threshold(WhileKeyboardVisible* __this);
float WhileKeyboardVisible__GetHeight(WhileKeyboardVisible* __this, ::app::Uno::Rect r);
WhileKeyboardVisible* WhileKeyboardVisible__New_1(::uStatic* __this);
void WhileKeyboardVisible__OnBottomBarResize(WhileKeyboardVisible* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args);
void WhileKeyboardVisible__OnRooted(WhileKeyboardVisible* __this, ::app::Fuse::Node* n);
void WhileKeyboardVisible__OnUnrooted(WhileKeyboardVisible* __this, ::app::Fuse::Node* n);

struct WhileKeyboardVisible : ::app::Fuse::Triggers::Trigger
{
    float _baseHeight;
    ::uStrong< ::app::Fuse::Node*> _node_1;
    float _threshold;

    void _ObjInit_2() { WhileKeyboardVisible___ObjInit_2(this); }
    float Threshold() { return WhileKeyboardVisible__get_Threshold(this); }
    float GetHeight(::app::Uno::Rect r);
    void OnBottomBarResize(::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args) { WhileKeyboardVisible__OnBottomBarResize(this, sender, args); }
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Triggers {

inline float WhileKeyboardVisible::GetHeight(::app::Uno::Rect r) { return WhileKeyboardVisible__GetHeight(this, r); }

}}}


#endif
