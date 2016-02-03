// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Collections_List_object_;

struct KeyValuePair__string__Uno_Collections_List_object___uType : ::uStructType
{
};

KeyValuePair__string__Uno_Collections_List_object___uType* KeyValuePair__string__Uno_Collections_List_object___typeof();

void KeyValuePair__string__Uno_Collections_List_object____ObjInit(KeyValuePair__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value);
::uString* KeyValuePair__string__Uno_Collections_List_object___get_Key(KeyValuePair__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::List__object* KeyValuePair__string__Uno_Collections_List_object___get_Value(KeyValuePair__string__Uno_Collections_List_object_* __this);
KeyValuePair__string__Uno_Collections_List_object_ KeyValuePair__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__object* value);

struct KeyValuePair__string__Uno_Collections_List_object_
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Collections::List__object*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Collections::List__object* value) { KeyValuePair__string__Uno_Collections_List_object____ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Collections_List_object___get_Key(this); }
    ::app::Uno::Collections::List__object* Value() { return KeyValuePair__string__Uno_Collections_List_object___get_Value(this); }
};

}}}


#endif
