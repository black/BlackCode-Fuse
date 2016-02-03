// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ELEMENT_TRIGGER_H__
#define __APP_FUSE_TRIGGERS_ELEMENT_TRIGGER_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct ElementTrigger;

struct ElementTrigger__uType : ::app::Fuse::Triggers::Trigger__uType
{
    void(*__fp_OnRooted_1)(ElementTrigger*, ::app::Fuse::Elements::Element*);
    void(*__fp_OnUnrooted_1)(ElementTrigger*, ::app::Fuse::Elements::Element*);
};

ElementTrigger__uType* ElementTrigger__typeof();

void ElementTrigger___ObjInit_2(ElementTrigger* __this);
void ElementTrigger__OnRooted(ElementTrigger* __this, ::app::Fuse::Node* elm);
void ElementTrigger__OnUnrooted(ElementTrigger* __this, ::app::Fuse::Node* elm);

struct ElementTrigger : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { ElementTrigger___ObjInit_2(this); }
    void OnRooted_1(::app::Fuse::Elements::Element* elm) { (((ElementTrigger__uType*)this->__obj_type)->__fp_OnRooted_1)(this, elm); }
    void OnUnrooted_1(::app::Fuse::Elements::Element* elm) { (((ElementTrigger__uType*)this->__obj_type)->__fp_OnUnrooted_1)(this, elm); }
};

}}}


#endif
