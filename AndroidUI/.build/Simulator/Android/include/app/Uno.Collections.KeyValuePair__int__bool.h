// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__BOOL_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__bool;

struct KeyValuePair__int__bool__uType : ::uStructType
{
};

KeyValuePair__int__bool__uType* KeyValuePair__int__bool__typeof();

void KeyValuePair__int__bool___ObjInit(KeyValuePair__int__bool* __this, int key, bool value);
int KeyValuePair__int__bool__get_Key(KeyValuePair__int__bool* __this);
bool KeyValuePair__int__bool__get_Value(KeyValuePair__int__bool* __this);
KeyValuePair__int__bool KeyValuePair__int__bool__New_1(::uStatic* __this, int key, bool value);

struct KeyValuePair__int__bool
{
    int _key;
    bool _value;

    void _ObjInit(int key, bool value) { KeyValuePair__int__bool___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__bool__get_Key(this); }
    bool Value() { return KeyValuePair__int__bool__get_Value(this); }
};

}}}


#endif
