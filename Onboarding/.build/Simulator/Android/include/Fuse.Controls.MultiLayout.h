// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Controls{struct MultiLayout;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MultiLayout :1310
// {
::g::Fuse::Behavior_type* MultiLayout_typeof();
void MultiLayout__ctor_1_fn(MultiLayout* __this);
void MultiLayout__ChangeLayout_fn(MultiLayout* __this, ::g::Fuse::Node* layoutRoot);
void MultiLayout__get_LayoutElement_fn(MultiLayout* __this, ::g::Fuse::Elements::Element** __retval);
void MultiLayout__set_LayoutElement_fn(MultiLayout* __this, ::g::Fuse::Elements::Element* value);
void MultiLayout__New1_fn(MultiLayout** __retval);
void MultiLayout__OnRooted_fn(MultiLayout* __this, ::g::Fuse::Node* parentNode);

struct MultiLayout : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Elements::Element*> _layoutElement;

    void ctor_1();
    void ChangeLayout(::g::Fuse::Node* layoutRoot);
    ::g::Fuse::Elements::Element* LayoutElement();
    void LayoutElement(::g::Fuse::Elements::Element* value);
    static MultiLayout* New1();
};
// }

}}} // ::g::Fuse::Controls
