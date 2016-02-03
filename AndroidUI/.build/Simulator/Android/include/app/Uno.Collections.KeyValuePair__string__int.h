// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__INT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__int;

struct KeyValuePair__string__int__uType : ::uStructType
{
};

KeyValuePair__string__int__uType* KeyValuePair__string__int__typeof();

void KeyValuePair__string__int___ObjInit(KeyValuePair__string__int* __this, ::uString* key, int value);
::uString* KeyValuePair__string__int__get_Key(KeyValuePair__string__int* __this);
int KeyValuePair__string__int__get_Value(KeyValuePair__string__int* __this);
KeyValuePair__string__int KeyValuePair__string__int__New_1(::uStatic* __this, ::uString* key, int value);

struct KeyValuePair__string__int
{
    ::uStrong< ::uString*> _key;
    int _value;

    void _ObjInit(::uString* key, int value) { KeyValuePair__string__int___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__int__get_Key(this); }
    int Value() { return KeyValuePair__string__int__get_Value(this); }
};

}}}


#endif
