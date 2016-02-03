// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_KEEP_FOCUS_IN_VIEW_H__
#define __APP_FUSE_GESTURES_KEEP_FOCUS_IN_VIEW_H__

#include <app/Fuse.Gestures.KeepInViewCommon.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct KeepFocusInView;

struct KeepFocusInView__uType : ::app::Fuse::Gestures::KeepInViewCommon__uType
{
};

KeepFocusInView__uType* KeepFocusInView__typeof();

void KeepFocusInView___ObjInit_2(KeepFocusInView* __this);
KeepFocusInView* KeepFocusInView__New_2(::uStatic* __this);
void KeepFocusInView__OnGotFocus(KeepFocusInView* __this, ::uObject* s, ::app::Fuse::Input::FocusGainedArgs* fga);
void KeepFocusInView__OnLostFocus(KeepFocusInView* __this, ::uObject* s, ::uObject* a);
void KeepFocusInView__OnRooted(KeepFocusInView* __this, ::app::Fuse::Node* elm);
void KeepFocusInView__OnUnrooted(KeepFocusInView* __this, ::app::Fuse::Node* elm);

struct KeepFocusInView : ::app::Fuse::Gestures::KeepInViewCommon
{
    void _ObjInit_2() { KeepFocusInView___ObjInit_2(this); }
    void OnGotFocus(::uObject* s, ::app::Fuse::Input::FocusGainedArgs* fga) { KeepFocusInView__OnGotFocus(this, s, fga); }
    void OnLostFocus(::uObject* s, ::uObject* a) { KeepFocusInView__OnLostFocus(this, s, a); }
};

}}}


#endif
