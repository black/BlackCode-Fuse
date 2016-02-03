// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_TYPE__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Uno_Type__object;

struct KeyValuePair__Uno_Type__object__uType : ::uStructType
{
};

KeyValuePair__Uno_Type__object__uType* KeyValuePair__Uno_Type__object__typeof();

void KeyValuePair__Uno_Type__object___ObjInit(KeyValuePair__Uno_Type__object* __this, ::uType* key, ::uObject* value);
::uType* KeyValuePair__Uno_Type__object__get_Key(KeyValuePair__Uno_Type__object* __this);
::uObject* KeyValuePair__Uno_Type__object__get_Value(KeyValuePair__Uno_Type__object* __this);
KeyValuePair__Uno_Type__object KeyValuePair__Uno_Type__object__New_1(::uStatic* __this, ::uType* key, ::uObject* value);

struct KeyValuePair__Uno_Type__object
{
    ::uStrong< ::uType*> _key;
    ::uStrong< ::uObject*> _value;

    void _ObjInit(::uType* key, ::uObject* value) { KeyValuePair__Uno_Type__object___ObjInit(this, key, value); }
    ::uType* Key() { return KeyValuePair__Uno_Type__object__get_Key(this); }
    ::uObject* Value() { return KeyValuePair__Uno_Type__object__get_Value(this); }
};

}}}


#endif
