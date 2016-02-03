// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_COLLECTIONS_LIST_FUSE_BE0DAEE7_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_COLLECTIONS_LIST_FUSE_BE0DAEE7_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_INameListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_;

struct KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType : ::uStructType
{
};

KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof();

void KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value);
::uString* KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Key(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
::app::Uno::Collections::List__Fuse_Scripting_INameListener* KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Value(KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_ KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value);

struct KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener_
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value) { KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Key(this); }
    ::app::Uno::Collections::List__Fuse_Scripting_INameListener* Value() { return KeyValuePair__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Value(this); }
};

}}}


#endif
