// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Placeholder;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Placeholder :1373
// {
::g::Fuse::Controls::ContentControl_type* Placeholder_typeof();
void Placeholder__ctor_4_fn(Placeholder* __this);
void Placeholder__AcquireTarget_fn(Placeholder* __this);
void Placeholder__get_ContentFactory_fn(Placeholder* __this, uObject** __retval);
void Placeholder__set_ContentFactory_fn(Placeholder* __this, uObject* value);
void Placeholder__New2_fn(Placeholder** __retval);
void Placeholder__get_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Node** __retval);
void Placeholder__set_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Node* value);
void Placeholder__get_Target_fn(Placeholder* __this, ::g::Fuse::Node** __retval);
void Placeholder__set_Target_fn(Placeholder* __this, ::g::Fuse::Node* value);

struct Placeholder : ::g::Fuse::Controls::ContentControl
{
    uStrong<uObject*> _contentFactory;
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_4();
    void AcquireTarget();
    uObject* ContentFactory();
    void ContentFactory(uObject* value);
    ::g::Fuse::Node* PlaceholderContent();
    void PlaceholderContent(::g::Fuse::Node* value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static Placeholder* New2();
};
// }

}}} // ::g::Fuse::Controls
