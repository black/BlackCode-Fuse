// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_MULTI_LAYOUT_H__
#define __APP_FUSE_CONTROLS_MULTI_LAYOUT_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct MultiLayout;

struct MultiLayout__uType : ::app::Fuse::Behavior__uType
{
};

MultiLayout__uType* MultiLayout__typeof();

void MultiLayout___ObjInit_1(MultiLayout* __this);
void MultiLayout__ChangeLayout(MultiLayout* __this, ::app::Fuse::Node* layoutRoot);
::app::Fuse::Elements::Element* MultiLayout__get_LayoutElement(MultiLayout* __this);
MultiLayout* MultiLayout__New_1(::uStatic* __this);
void MultiLayout__OnRooted(MultiLayout* __this, ::app::Fuse::Node* node);
void MultiLayout__OnUnrooted(MultiLayout* __this, ::app::Fuse::Node* node);
void MultiLayout__set_LayoutElement(MultiLayout* __this, ::app::Fuse::Elements::Element* value);

struct MultiLayout : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Elements::Element*> _layoutElement;

    void _ObjInit_1() { MultiLayout___ObjInit_1(this); }
    void ChangeLayout(::app::Fuse::Node* layoutRoot) { MultiLayout__ChangeLayout(this, layoutRoot); }
    ::app::Fuse::Elements::Element* LayoutElement() { return MultiLayout__get_LayoutElement(this); }
    void LayoutElement(::app::Fuse::Elements::Element* value) { MultiLayout__set_LayoutElement(this, value); }
};

}}}


#endif
