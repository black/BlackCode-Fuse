// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_POSITION_CHANGE_MODE_H__
#define __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_POSITION_CHANGE_MODE_H__

#include <app/Fuse.ITranslationMode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct LayoutAnimation_PositionChangeMode;

struct LayoutAnimation_PositionChangeMode__uType : ::uClassType
{
    ::app::Fuse::ITranslationMode __interface_0;
};

LayoutAnimation_PositionChangeMode__uType* LayoutAnimation_PositionChangeMode__typeof();

void LayoutAnimation_PositionChangeMode___ObjInit(LayoutAnimation_PositionChangeMode* __this);
::app::Uno::Float3 LayoutAnimation_PositionChangeMode__GetAbsVector(LayoutAnimation_PositionChangeMode* __this, ::app::Fuse::Translation* t);
LayoutAnimation_PositionChangeMode* LayoutAnimation_PositionChangeMode__New_1(::uStatic* __this);

struct LayoutAnimation_PositionChangeMode : ::uObject
{
    void _ObjInit() { LayoutAnimation_PositionChangeMode___ObjInit(this); }
    ::app::Uno::Float3 GetAbsVector(::app::Fuse::Translation* t);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Triggers {

inline ::app::Uno::Float3 LayoutAnimation_PositionChangeMode::GetAbsVector(::app::Fuse::Translation* t) { return LayoutAnimation_PositionChangeMode__GetAbsVector(this, t); }

}}}


#endif
