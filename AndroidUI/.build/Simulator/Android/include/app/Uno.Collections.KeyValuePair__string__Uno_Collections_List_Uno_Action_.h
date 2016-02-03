// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_COLLECTIONS_LIST_UNO_ACTION__H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_COLLECTIONS_LIST_UNO_ACTION__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Collections_List_Uno_Action_;

struct KeyValuePair__string__Uno_Collections_List_Uno_Action___uType : ::uStructType
{
};

KeyValuePair__string__Uno_Collections_List_Uno_Action___uType* KeyValuePair__string__Uno_Collections_List_Uno_Action___typeof();

void KeyValuePair__string__Uno_Collections_List_Uno_Action____ObjInit(KeyValuePair__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value);
::uString* KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Key(KeyValuePair__string__Uno_Collections_List_Uno_Action_* __this);
::app::Uno::Collections::List__Uno_Action* KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Value(KeyValuePair__string__Uno_Collections_List_Uno_Action_* __this);
KeyValuePair__string__Uno_Collections_List_Uno_Action_ KeyValuePair__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value);

struct KeyValuePair__string__Uno_Collections_List_Uno_Action_
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Collections::List__Uno_Action* value) { KeyValuePair__string__Uno_Collections_List_Uno_Action____ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Key(this); }
    ::app::Uno::Collections::List__Uno_Action* Value() { return KeyValuePair__string__Uno_Collections_List_Uno_Action___get_Value(this); }
};

}}}


#endif
