// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__INT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__int;

struct KeyValuePair__int__int__uType : ::uStructType
{
};

KeyValuePair__int__int__uType* KeyValuePair__int__int__typeof();

void KeyValuePair__int__int___ObjInit(KeyValuePair__int__int* __this, int key, int value);
int KeyValuePair__int__int__get_Key(KeyValuePair__int__int* __this);
int KeyValuePair__int__int__get_Value(KeyValuePair__int__int* __this);
KeyValuePair__int__int KeyValuePair__int__int__New_1(::uStatic* __this, int key, int value);

struct KeyValuePair__int__int
{
    int _key;
    int _value;

    void _ObjInit(int key, int value) { KeyValuePair__int__int___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__int__get_Key(this); }
    int Value() { return KeyValuePair__int__int__get_Value(this); }
};

}}}


#endif
