// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__UNO_COLLECTIONS_I_LIST_FUSE_I_758DF93B_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__UNO_COLLECTIONS_I_LIST_FUSE_I_758DF93B_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uStructType
{
};

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

void KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value);
int KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Key(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
::uObject* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, int key, ::uObject* value);

struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_
{
    int _key;
    ::uStrong< ::uObject*> _value;

    void _ObjInit(int key, ::uObject* value) { KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Key(this); }
    ::uObject* Value() { return KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(this); }
};

}}}


#endif
