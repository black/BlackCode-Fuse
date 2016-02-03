// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_NODE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_NODE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Node;

struct ValueChangedArgs__Fuse_Node__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Node__uType* ValueChangedArgs__Fuse_Node__typeof();

void ValueChangedArgs__Fuse_Node___ObjInit_1(ValueChangedArgs__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Node__get_Origin(ValueChangedArgs__Fuse_Node* __this);
::app::Fuse::Node* ValueChangedArgs__Fuse_Node__get_Value(ValueChangedArgs__Fuse_Node* __this);
ValueChangedArgs__Fuse_Node* ValueChangedArgs__Fuse_Node__New_2(::uStatic* __this, ::app::Fuse::Node* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Node__set_Origin(ValueChangedArgs__Fuse_Node* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Node__set_Value(ValueChangedArgs__Fuse_Node* __this, ::app::Fuse::Node* value);

struct ValueChangedArgs__Fuse_Node : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Node*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Node* value, ::uObject* origin) { ValueChangedArgs__Fuse_Node___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Node__get_Origin(this); }
    ::app::Fuse::Node* Value() { return ValueChangedArgs__Fuse_Node__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Node__set_Origin(this, value); }
    void Value(::app::Fuse::Node* value) { ValueChangedArgs__Fuse_Node__set_Value(this, value); }
};

}}}


#endif
