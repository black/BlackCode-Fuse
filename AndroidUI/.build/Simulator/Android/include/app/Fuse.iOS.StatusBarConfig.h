// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_STATUS_BAR_CONFIG_H__
#define __APP_FUSE_I_O_S_STATUS_BAR_CONFIG_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_iOS_StatusBarConfig; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct StatusBarConfig;

extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*> StatusBarConfig___stack;

struct StatusBarConfig__uType : ::app::Fuse::Behavior__uType
{
};

StatusBarConfig__uType* StatusBarConfig__typeof();

void StatusBarConfig___ObjInit_1(StatusBarConfig* __this);
void StatusBarConfig___TypeInit(::uStatic* __this);
void StatusBarConfig__Apply(::uStatic* __this);
int StatusBarConfig__get_Animation(StatusBarConfig* __this);
bool StatusBarConfig__get_IsVisible(StatusBarConfig* __this);
int StatusBarConfig__get_Style(StatusBarConfig* __this);
int StatusBarConfig__GetAnimation(::uStatic* __this);
bool StatusBarConfig__GetIsVisible(::uStatic* __this);
int StatusBarConfig__GetStyle(::uStatic* __this);
StatusBarConfig* StatusBarConfig__New_1(::uStatic* __this);
void StatusBarConfig__OnRooted(StatusBarConfig* __this, ::app::Fuse::Node* n);
void StatusBarConfig__OnUnrooted(StatusBarConfig* __this, ::app::Fuse::Node* n);
void StatusBarConfig__set_Animation(StatusBarConfig* __this, int value);
void StatusBarConfig__set_IsVisible(StatusBarConfig* __this, bool value);
void StatusBarConfig__set_Style(StatusBarConfig* __this, int value);

struct StatusBarConfig : ::app::Fuse::Behavior
{
    bool _isVisible;
    bool _hasIsVisible;
    int _style;
    bool _hasStyle;
    int _animation;
    bool _hasAnimation;

    void _ObjInit_1() { StatusBarConfig___ObjInit_1(this); }
    int Animation() { return StatusBarConfig__get_Animation(this); }
    bool IsVisible() { return StatusBarConfig__get_IsVisible(this); }
    int Style() { return StatusBarConfig__get_Style(this); }
    void Animation(int value) { StatusBarConfig__set_Animation(this, value); }
    void IsVisible(bool value) { StatusBarConfig__set_IsVisible(this, value); }
    void Style(int value) { StatusBarConfig__set_Style(this, value); }
};

}}}


#endif
