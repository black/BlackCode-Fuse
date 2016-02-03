// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__OBJECT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__object;

struct KeyValuePair__string__object__uType : ::uStructType
{
};

KeyValuePair__string__object__uType* KeyValuePair__string__object__typeof();

void KeyValuePair__string__object___ObjInit(KeyValuePair__string__object* __this, ::uString* key, ::uObject* value);
::uString* KeyValuePair__string__object__get_Key(KeyValuePair__string__object* __this);
::uObject* KeyValuePair__string__object__get_Value(KeyValuePair__string__object* __this);
KeyValuePair__string__object KeyValuePair__string__object__New_1(::uStatic* __this, ::uString* key, ::uObject* value);

struct KeyValuePair__string__object
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::uObject*> _value;

    void _ObjInit(::uString* key, ::uObject* value) { KeyValuePair__string__object___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__object__get_Key(this); }
    ::uObject* Value() { return KeyValuePair__string__object__get_Value(this); }
};

}}}


#endif
