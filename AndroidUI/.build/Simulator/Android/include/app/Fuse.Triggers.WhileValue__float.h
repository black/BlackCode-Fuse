// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_VALUE__FLOAT_H__
#define __APP_FUSE_TRIGGERS_WHILE_VALUE__FLOAT_H__

#include <app/Fuse.Triggers.IValue__float.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__float; } } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileValue__float;

struct WhileValue__float__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
    ::app::Fuse::Triggers::IValue__float __interface_0;
    bool(*__fp_get_IsOn)(WhileValue__float*);
};

WhileValue__float__uType* WhileValue__float__typeof();

void WhileValue__float___ObjInit_3(WhileValue__float* __this);
void WhileValue__float__add_ValueChanged(WhileValue__float* __this, ::uDelegate* value);
::uObject* WhileValue__float__FindValueNode(::uStatic* __this, ::app::Fuse::Node* n);
::uObject* WhileValue__float__get_Source(WhileValue__float* __this);
float WhileValue__float__get_Value(WhileValue__float* __this);
void WhileValue__float__OnRooted(WhileValue__float* __this, ::app::Fuse::Node* elm);
void WhileValue__float__OnUnrooted(WhileValue__float* __this, ::app::Fuse::Node* elm);
void WhileValue__float__OnValueChanged(WhileValue__float* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__float* a);
void WhileValue__float__Pulse_1(WhileValue__float* __this);
void WhileValue__float__remove_ValueChanged(WhileValue__float* __this, ::uDelegate* value);
void WhileValue__float__set_Source(WhileValue__float* __this, ::uObject* value);
void WhileValue__float__set_Value(WhileValue__float* __this, float value);
void WhileValue__float__UpdateState(WhileValue__float* __this);

struct WhileValue__float : ::app::Fuse::Triggers::WhileTrigger
{
    float _value;
    bool _hasValue;
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uObject*> _obj;
    ::uStrong< ::uDelegate*> ValueChanged;

    void _ObjInit_3() { WhileValue__float___ObjInit_3(this); }
    void add_ValueChanged(::uDelegate* value) { WhileValue__float__add_ValueChanged(this, value); }
    bool IsOn() { return (((WhileValue__float__uType*)this->__obj_type)->__fp_get_IsOn)(this); }
    ::uObject* Source() { return WhileValue__float__get_Source(this); }
    float Value() { return WhileValue__float__get_Value(this); }
    void OnValueChanged(::uObject* s, ::app::Uno::UX::ValueChangedArgs__float* a) { WhileValue__float__OnValueChanged(this, s, a); }
    void Pulse_1() { WhileValue__float__Pulse_1(this); }
    void remove_ValueChanged(::uDelegate* value) { WhileValue__float__remove_ValueChanged(this, value); }
    void Source(::uObject* value) { WhileValue__float__set_Source(this, value); }
    void Value(float value) { WhileValue__float__set_Value(this, value); }
    void UpdateState() { WhileValue__float__UpdateState(this); }
};

}}}


#endif
