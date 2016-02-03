// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_RESIZE_CHANGE_MODE_H__
#define __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_RESIZE_CHANGE_MODE_H__

#include <app/Fuse.Animations.IResizeMode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct LayoutAnimation_ResizeChangeMode;

struct LayoutAnimation_ResizeChangeMode__uType : ::uClassType
{
    ::app::Fuse::Animations::IResizeMode __interface_0;
};

LayoutAnimation_ResizeChangeMode__uType* LayoutAnimation_ResizeChangeMode__typeof();

void LayoutAnimation_ResizeChangeMode___ObjInit(LayoutAnimation_ResizeChangeMode* __this);
bool LayoutAnimation_ResizeChangeMode__GetSizeChange(LayoutAnimation_ResizeChangeMode* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* baseSize, ::app::Uno::Float2* deltaSize);
LayoutAnimation_ResizeChangeMode* LayoutAnimation_ResizeChangeMode__New_1(::uStatic* __this);

struct LayoutAnimation_ResizeChangeMode : ::uObject
{
    void _ObjInit() { LayoutAnimation_ResizeChangeMode___ObjInit(this); }
    bool GetSizeChange(::app::Fuse::Node* n, ::app::Uno::Float2* baseSize, ::app::Uno::Float2* deltaSize) { return LayoutAnimation_ResizeChangeMode__GetSizeChange(this, n, baseSize, deltaSize); }
};

}}}


#endif
