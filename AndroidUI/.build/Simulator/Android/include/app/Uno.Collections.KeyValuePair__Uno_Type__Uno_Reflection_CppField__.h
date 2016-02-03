// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_TYPE__UNO_REFLECTION_CPP_FIELD___H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_TYPE__UNO_REFLECTION_CPP_FIELD___H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Uno_Type__Uno_Reflection_CppField__;

struct KeyValuePair__Uno_Type__Uno_Reflection_CppField____uType : ::uStructType
{
};

KeyValuePair__Uno_Type__Uno_Reflection_CppField____uType* KeyValuePair__Uno_Type__Uno_Reflection_CppField____typeof();

void KeyValuePair__Uno_Type__Uno_Reflection_CppField_____ObjInit(KeyValuePair__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key, ::uArray* value);
::uType* KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Key(KeyValuePair__Uno_Type__Uno_Reflection_CppField__* __this);
::uArray* KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Value(KeyValuePair__Uno_Type__Uno_Reflection_CppField__* __this);
KeyValuePair__Uno_Type__Uno_Reflection_CppField__ KeyValuePair__Uno_Type__Uno_Reflection_CppField____New_1(::uStatic* __this, ::uType* key, ::uArray* value);

struct KeyValuePair__Uno_Type__Uno_Reflection_CppField__
{
    ::uStrong< ::uType*> _key;
    ::uStrong< ::uArray*> _value;

    void _ObjInit(::uType* key, ::uArray* value) { KeyValuePair__Uno_Type__Uno_Reflection_CppField_____ObjInit(this, key, value); }
    ::uType* Key() { return KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Key(this); }
    ::uArray* Value() { return KeyValuePair__Uno_Type__Uno_Reflection_CppField____get_Value(this); }
};

}}}


#endif
