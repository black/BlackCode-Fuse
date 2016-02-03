// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowSize;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowSize :1780
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof();
void WhileWindowSize__ctor_4_fn(WhileWindowSize* __this);
void WhileWindowSize__get_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval);
void WhileWindowSize__set_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* value);
void WhileWindowSize__get_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval);
void WhileWindowSize__set_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value);
void WhileWindowSize__get_IsActive_fn(WhileWindowSize* __this, bool* __retval);
void WhileWindowSize__get_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval);
void WhileWindowSize__set_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value);
void WhileWindowSize__New1_fn(WhileWindowSize** __retval);

struct WhileWindowSize : ::g::Fuse::Triggers::WindowSizeTrigger
{
    ::g::Uno::Float2 _EqualTo;
    ::g::Uno::Float2 _GreaterThan;
    ::g::Uno::Float2 _LessThan;

    void ctor_4();
    ::g::Uno::Float2 EqualTo();
    void EqualTo(::g::Uno::Float2 value);
    ::g::Uno::Float2 GreaterThan();
    void GreaterThan(::g::Uno::Float2 value);
    ::g::Uno::Float2 LessThan();
    void LessThan(::g::Uno::Float2 value);
    static WhileWindowSize* New1();
};
// }

}}} // ::g::Fuse::Triggers
