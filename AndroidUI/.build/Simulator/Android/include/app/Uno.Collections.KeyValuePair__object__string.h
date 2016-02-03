// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OBJECT__STRING_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OBJECT__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__object__string;

struct KeyValuePair__object__string__uType : ::uStructType
{
};

KeyValuePair__object__string__uType* KeyValuePair__object__string__typeof();

void KeyValuePair__object__string___ObjInit(KeyValuePair__object__string* __this, ::uObject* key, ::uString* value);
::uObject* KeyValuePair__object__string__get_Key(KeyValuePair__object__string* __this);
::uString* KeyValuePair__object__string__get_Value(KeyValuePair__object__string* __this);
KeyValuePair__object__string KeyValuePair__object__string__New_1(::uStatic* __this, ::uObject* key, ::uString* value);

struct KeyValuePair__object__string
{
    ::uStrong< ::uObject*> _key;
    ::uStrong< ::uString*> _value;

    void _ObjInit(::uObject* key, ::uString* value) { KeyValuePair__object__string___ObjInit(this, key, value); }
    ::uObject* Key() { return KeyValuePair__object__string__get_Key(this); }
    ::uString* Value() { return KeyValuePair__object__string__get_Value(this); }
};

}}}


#endif
