// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__BOOL_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__bool;

struct KeyValuePair__string__bool__uType : ::uStructType
{
};

KeyValuePair__string__bool__uType* KeyValuePair__string__bool__typeof();

void KeyValuePair__string__bool___ObjInit(KeyValuePair__string__bool* __this, ::uString* key, bool value);
::uString* KeyValuePair__string__bool__get_Key(KeyValuePair__string__bool* __this);
bool KeyValuePair__string__bool__get_Value(KeyValuePair__string__bool* __this);
KeyValuePair__string__bool KeyValuePair__string__bool__New_1(::uStatic* __this, ::uString* key, bool value);

struct KeyValuePair__string__bool
{
    ::uStrong< ::uString*> _key;
    bool _value;

    void _ObjInit(::uString* key, bool value) { KeyValuePair__string__bool___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__bool__get_Key(this); }
    bool Value() { return KeyValuePair__string__bool__get_Value(this); }
};

}}}


#endif
