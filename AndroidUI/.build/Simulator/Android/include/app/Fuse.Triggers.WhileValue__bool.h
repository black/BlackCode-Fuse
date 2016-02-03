// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_VALUE__BOOL_H__
#define __APP_FUSE_TRIGGERS_WHILE_VALUE__BOOL_H__

#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool; } } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileValue__bool;

struct WhileValue__bool__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
    ::app::Fuse::Triggers::IValue__bool __interface_0;
    bool(*__fp_get_IsOn)(WhileValue__bool*);
};

WhileValue__bool__uType* WhileValue__bool__typeof();

void WhileValue__bool___ObjInit_3(WhileValue__bool* __this);
void WhileValue__bool__add_ValueChanged(WhileValue__bool* __this, ::uDelegate* value);
::uObject* WhileValue__bool__FindValueNode(::uStatic* __this, ::app::Fuse::Node* n);
::uObject* WhileValue__bool__get_Source(WhileValue__bool* __this);
bool WhileValue__bool__get_Value(WhileValue__bool* __this);
void WhileValue__bool__OnRooted(WhileValue__bool* __this, ::app::Fuse::Node* elm);
void WhileValue__bool__OnUnrooted(WhileValue__bool* __this, ::app::Fuse::Node* elm);
void WhileValue__bool__OnValueChanged(WhileValue__bool* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__bool* a);
void WhileValue__bool__Pulse_1(WhileValue__bool* __this);
void WhileValue__bool__remove_ValueChanged(WhileValue__bool* __this, ::uDelegate* value);
void WhileValue__bool__set_Source(WhileValue__bool* __this, ::uObject* value);
void WhileValue__bool__set_Value(WhileValue__bool* __this, bool value);
void WhileValue__bool__UpdateState(WhileValue__bool* __this);

struct WhileValue__bool : ::app::Fuse::Triggers::WhileTrigger
{
    bool _value;
    bool _hasValue;
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uObject*> _obj;
    ::uStrong< ::uDelegate*> ValueChanged;

    void _ObjInit_3() { WhileValue__bool___ObjInit_3(this); }
    void add_ValueChanged(::uDelegate* value) { WhileValue__bool__add_ValueChanged(this, value); }
    bool IsOn() { return (((WhileValue__bool__uType*)this->__obj_type)->__fp_get_IsOn)(this); }
    ::uObject* Source() { return WhileValue__bool__get_Source(this); }
    bool Value() { return WhileValue__bool__get_Value(this); }
    void OnValueChanged(::uObject* s, ::app::Uno::UX::ValueChangedArgs__bool* a) { WhileValue__bool__OnValueChanged(this, s, a); }
    void Pulse_1() { WhileValue__bool__Pulse_1(this); }
    void remove_ValueChanged(::uDelegate* value) { WhileValue__bool__remove_ValueChanged(this, value); }
    void Source(::uObject* value) { WhileValue__bool__set_Source(this, value); }
    void Value(bool value) { WhileValue__bool__set_Value(this, value); }
    void UpdateState() { WhileValue__bool__UpdateState(this); }
};

}}}


#endif
