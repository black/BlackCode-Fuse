// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_LAYOUT_ARGS_H__
#define __APP_FUSE_ELEMENTS_LAYOUT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Elements {

struct LayoutArgs;

struct LayoutArgs__uType : ::app::Uno::EventArgs__uType
{
};

LayoutArgs__uType* LayoutArgs__typeof();

void LayoutArgs___ObjInit_1(LayoutArgs* __this, ::app::Uno::Float3 positionChange, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize, bool hasOld);
bool LayoutArgs__get_HasOld(LayoutArgs* __this);
::app::Uno::Float2 LayoutArgs__get_NewSize(LayoutArgs* __this);
::app::Uno::Float2 LayoutArgs__get_OldSize(LayoutArgs* __this);
::app::Uno::Float3 LayoutArgs__get_PositionChange(LayoutArgs* __this);
LayoutArgs* LayoutArgs__New_2(::uStatic* __this, ::app::Uno::Float3 positionChange, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize, bool hasOld);
void LayoutArgs__set_HasOld(LayoutArgs* __this, bool value);
void LayoutArgs__set_NewSize(LayoutArgs* __this, ::app::Uno::Float2 value);
void LayoutArgs__set_OldSize(LayoutArgs* __this, ::app::Uno::Float2 value);
void LayoutArgs__set_PositionChange(LayoutArgs* __this, ::app::Uno::Float3 value);

struct LayoutArgs : ::app::Uno::EventArgs
{
    ::app::Uno::Float3 _PositionChange;
    ::app::Uno::Float2 _OldSize;
    ::app::Uno::Float2 _NewSize;
    bool _HasOld;

    void _ObjInit_1(::app::Uno::Float3 positionChange, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize, bool hasOld) { LayoutArgs___ObjInit_1(this, positionChange, oldSize, newSize, hasOld); }
    bool HasOld() { return LayoutArgs__get_HasOld(this); }
    ::app::Uno::Float2 NewSize() { return LayoutArgs__get_NewSize(this); }
    ::app::Uno::Float2 OldSize() { return LayoutArgs__get_OldSize(this); }
    ::app::Uno::Float3 PositionChange() { return LayoutArgs__get_PositionChange(this); }
    void HasOld(bool value) { LayoutArgs__set_HasOld(this, value); }
    void NewSize(::app::Uno::Float2 value) { LayoutArgs__set_NewSize(this, value); }
    void OldSize(::app::Uno::Float2 value) { LayoutArgs__set_OldSize(this, value); }
    void PositionChange(::app::Uno::Float3 value) { LayoutArgs__set_PositionChange(this, value); }
};

}}}


#endif
