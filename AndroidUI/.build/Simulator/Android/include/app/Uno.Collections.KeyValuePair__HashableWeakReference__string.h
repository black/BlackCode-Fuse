// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__HASHABLE_WEAK_REFERENCE__STRING_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__HASHABLE_WEAK_REFERENCE__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { struct HashableWeakReference; }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__HashableWeakReference__string;

struct KeyValuePair__HashableWeakReference__string__uType : ::uStructType
{
};

KeyValuePair__HashableWeakReference__string__uType* KeyValuePair__HashableWeakReference__string__typeof();

void KeyValuePair__HashableWeakReference__string___ObjInit(KeyValuePair__HashableWeakReference__string* __this, ::app::HashableWeakReference* key, ::uString* value);
::app::HashableWeakReference* KeyValuePair__HashableWeakReference__string__get_Key(KeyValuePair__HashableWeakReference__string* __this);
::uString* KeyValuePair__HashableWeakReference__string__get_Value(KeyValuePair__HashableWeakReference__string* __this);
KeyValuePair__HashableWeakReference__string KeyValuePair__HashableWeakReference__string__New_1(::uStatic* __this, ::app::HashableWeakReference* key, ::uString* value);

struct KeyValuePair__HashableWeakReference__string
{
    ::uStrong< ::app::HashableWeakReference*> _key;
    ::uStrong< ::uString*> _value;

    void _ObjInit(::app::HashableWeakReference* key, ::uString* value) { KeyValuePair__HashableWeakReference__string___ObjInit(this, key, value); }
    ::app::HashableWeakReference* Key() { return KeyValuePair__HashableWeakReference__string__get_Key(this); }
    ::uString* Value() { return KeyValuePair__HashableWeakReference__string__get_Value(this); }
};

}}}


#endif
