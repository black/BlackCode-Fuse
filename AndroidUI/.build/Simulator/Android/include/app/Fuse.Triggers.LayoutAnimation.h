// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_H__
#define __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct LayoutArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct LayoutAnimation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> LayoutAnimation___positionChange;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> LayoutAnimation___sizeChange;
extern ::uStaticStrong< ::uObject*> LayoutAnimation__PositionChange;
extern ::uStaticStrong< ::uObject*> LayoutAnimation__SizeChange;

struct LayoutAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

LayoutAnimation__uType* LayoutAnimation__typeof();

void LayoutAnimation___ObjInit_2(LayoutAnimation* __this);
void LayoutAnimation___TypeInit(::uStatic* __this);
::app::Uno::Float3 LayoutAnimation__GetPositionChange(::uStatic* __this, ::app::Fuse::Node* n);
bool LayoutAnimation__GetSizeChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize);
LayoutAnimation* LayoutAnimation__New_1(::uStatic* __this);
void LayoutAnimation__OnLayoutChange(LayoutAnimation* __this, ::uObject* sender, ::app::Fuse::Elements::LayoutArgs* args);
void LayoutAnimation__OnRooted(LayoutAnimation* __this, ::app::Fuse::Node* elm);
void LayoutAnimation__OnUnrooted(LayoutAnimation* __this, ::app::Fuse::Node* elm);
void LayoutAnimation__SetPositionChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float3 delta);
void LayoutAnimation__SetSizeChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize);

struct LayoutAnimation : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { LayoutAnimation___ObjInit_2(this); }
    void OnLayoutChange(::uObject* sender, ::app::Fuse::Elements::LayoutArgs* args) { LayoutAnimation__OnLayoutChange(this, sender, args); }
};

}}}


#endif
