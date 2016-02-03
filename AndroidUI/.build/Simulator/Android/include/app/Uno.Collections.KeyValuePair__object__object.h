// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OBJECT__OBJECT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OBJECT__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__object__object;

struct KeyValuePair__object__object__uType : ::uStructType
{
};

KeyValuePair__object__object__uType* KeyValuePair__object__object__typeof();

void KeyValuePair__object__object___ObjInit(KeyValuePair__object__object* __this, ::uObject* key, ::uObject* value);
::uObject* KeyValuePair__object__object__get_Key(KeyValuePair__object__object* __this);
::uObject* KeyValuePair__object__object__get_Value(KeyValuePair__object__object* __this);
KeyValuePair__object__object KeyValuePair__object__object__New_1(::uStatic* __this, ::uObject* key, ::uObject* value);

struct KeyValuePair__object__object
{
    ::uStrong< ::uObject*> _key;
    ::uStrong< ::uObject*> _value;

    void _ObjInit(::uObject* key, ::uObject* value) { KeyValuePair__object__object___ObjInit(this, key, value); }
    ::uObject* Key() { return KeyValuePair__object__object__get_Key(this); }
    ::uObject* Value() { return KeyValuePair__object__object__get_Value(this); }
};

}}}


#endif
