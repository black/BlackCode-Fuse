// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__STRING_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__string;

struct KeyValuePair__int__string__uType : ::uStructType
{
};

KeyValuePair__int__string__uType* KeyValuePair__int__string__typeof();

void KeyValuePair__int__string___ObjInit(KeyValuePair__int__string* __this, int key, ::uString* value);
int KeyValuePair__int__string__get_Key(KeyValuePair__int__string* __this);
::uString* KeyValuePair__int__string__get_Value(KeyValuePair__int__string* __this);
KeyValuePair__int__string KeyValuePair__int__string__New_1(::uStatic* __this, int key, ::uString* value);

struct KeyValuePair__int__string
{
    int _key;
    ::uStrong< ::uString*> _value;

    void _ObjInit(int key, ::uString* value) { KeyValuePair__int__string___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__string__get_Key(this); }
    ::uString* Value() { return KeyValuePair__int__string__get_Value(this); }
};

}}}


#endif
