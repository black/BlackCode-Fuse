// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PLACEHOLDER_H__
#define __APP_FUSE_CONTROLS_PLACEHOLDER_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Placeholder;

struct Placeholder__uType : ::app::Fuse::Controls::ContentControl__uType
{
};

Placeholder__uType* Placeholder__typeof();

void Placeholder___ObjInit_4(Placeholder* __this);
void Placeholder__AcquireTarget(Placeholder* __this);
::uObject* Placeholder__get_ContentFactory(Placeholder* __this);
::app::Fuse::Node* Placeholder__get_PlaceholderContent(Placeholder* __this);
::app::Fuse::Node* Placeholder__get_Target(Placeholder* __this);
Placeholder* Placeholder__New_2(::uStatic* __this);
void Placeholder__set_ContentFactory(Placeholder* __this, ::uObject* value);
void Placeholder__set_PlaceholderContent(Placeholder* __this, ::app::Fuse::Node* value);
void Placeholder__set_Target(Placeholder* __this, ::app::Fuse::Node* value);

struct Placeholder : ::app::Fuse::Controls::ContentControl
{
    ::uStrong< ::uObject*> _contentFactory;
    ::uStrong< ::app::Fuse::Node*> _Target;

    void _ObjInit_4() { Placeholder___ObjInit_4(this); }
    void AcquireTarget() { Placeholder__AcquireTarget(this); }
    ::uObject* ContentFactory() { return Placeholder__get_ContentFactory(this); }
    ::app::Fuse::Node* PlaceholderContent() { return Placeholder__get_PlaceholderContent(this); }
    ::app::Fuse::Node* Target() { return Placeholder__get_Target(this); }
    void ContentFactory(::uObject* value) { Placeholder__set_ContentFactory(this, value); }
    void PlaceholderContent(::app::Fuse::Node* value) { Placeholder__set_PlaceholderContent(this, value); }
    void Target(::app::Fuse::Node* value) { Placeholder__set_Target(this, value); }
};

}}}


#endif
