// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_CONTAINING_TEXT_H__
#define __APP_FUSE_TRIGGERS_CONTAINING_TEXT_H__

#include <app/Fuse.Triggers.ElementTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct ContainingText;

struct ContainingText__uType : ::app::Fuse::Triggers::ElementTrigger__uType
{
};

ContainingText__uType* ContainingText__typeof();

void ContainingText___ObjInit_3(ContainingText* __this);
void ContainingText__ApplyState(ContainingText* __this);
ContainingText* ContainingText__New_1(::uStatic* __this);
void ContainingText__OnRooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm);
void ContainingText__OnUnrooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm);
void ContainingText__OnValueChanged(ContainingText* __this, ::uObject* sender, ::app::Uno::EventArgs* args);

struct ContainingText : ::app::Fuse::Triggers::ElementTrigger
{
    ::uStrong< ::app::Fuse::Controls::TextInput*> _textInput;

    void _ObjInit_3() { ContainingText___ObjInit_3(this); }
    void ApplyState() { ContainingText__ApplyState(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::EventArgs* args) { ContainingText__OnValueChanged(this, sender, args); }
};

}}}


#endif
