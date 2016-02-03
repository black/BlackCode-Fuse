// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__FLOAT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__char__float;

struct KeyValuePair__char__float__uType : ::uStructType
{
};

KeyValuePair__char__float__uType* KeyValuePair__char__float__typeof();

void KeyValuePair__char__float___ObjInit(KeyValuePair__char__float* __this, ::uChar key, float value);
::uChar KeyValuePair__char__float__get_Key(KeyValuePair__char__float* __this);
float KeyValuePair__char__float__get_Value(KeyValuePair__char__float* __this);
KeyValuePair__char__float KeyValuePair__char__float__New_1(::uStatic* __this, ::uChar key, float value);

struct KeyValuePair__char__float
{
    ::uChar _key;
    float _value;

    void _ObjInit(::uChar key, float value) { KeyValuePair__char__float___ObjInit(this, key, value); }
    ::uChar Key() { return KeyValuePair__char__float__get_Key(this); }
    float Value() { return KeyValuePair__char__float__get_Value(this); }
};

}}}


#endif
