// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__UNO_COLLECTIONS_LIST_FUSE_IN_7328E3BD_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__UNO_COLLECTIONS_LIST_FUSE_IN_7328E3BD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Pointer_PELHolder; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_;

struct KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType : ::uStructType
{
};

KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof();

void KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value);
int KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Key(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Value(KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value);

struct KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_
{
    int _key;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*> _value;

    void _ObjInit(int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value) { KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Key(this); }
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* Value() { return KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Value(this); }
};

}}}


#endif
