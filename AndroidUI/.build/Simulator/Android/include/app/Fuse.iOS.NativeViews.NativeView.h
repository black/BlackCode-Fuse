// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_NATIVE_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_NATIVE_VIEW_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct NativeView;

struct NativeView__uType : ::app::Fuse::Behavior__uType
{
};

NativeView__uType* NativeView__typeof();

void NativeView___ObjInit_1(NativeView* __this);
NativeView* NativeView__GetFrom(::uStatic* __this, ::app::Fuse::Node* n);
void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* n);
void NativeView__OnTintColorChanged(NativeView* __this);
void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* n);

struct NativeView : ::app::Fuse::Behavior
{
    void _ObjInit_1() { NativeView___ObjInit_1(this); }
    void OnTintColorChanged() { NativeView__OnTintColorChanged(this); }
};

}}}}


#endif
