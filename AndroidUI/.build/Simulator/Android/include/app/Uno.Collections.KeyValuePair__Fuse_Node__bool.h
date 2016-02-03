// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_NODE__BOOL_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_NODE__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Node__bool;

struct KeyValuePair__Fuse_Node__bool__uType : ::uStructType
{
};

KeyValuePair__Fuse_Node__bool__uType* KeyValuePair__Fuse_Node__bool__typeof();

void KeyValuePair__Fuse_Node__bool___ObjInit(KeyValuePair__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value);
::app::Fuse::Node* KeyValuePair__Fuse_Node__bool__get_Key(KeyValuePair__Fuse_Node__bool* __this);
bool KeyValuePair__Fuse_Node__bool__get_Value(KeyValuePair__Fuse_Node__bool* __this);
KeyValuePair__Fuse_Node__bool KeyValuePair__Fuse_Node__bool__New_1(::uStatic* __this, ::app::Fuse::Node* key, bool value);

struct KeyValuePair__Fuse_Node__bool
{
    ::uStrong< ::app::Fuse::Node*> _key;
    bool _value;

    void _ObjInit(::app::Fuse::Node* key, bool value) { KeyValuePair__Fuse_Node__bool___ObjInit(this, key, value); }
    ::app::Fuse::Node* Key() { return KeyValuePair__Fuse_Node__bool__get_Key(this); }
    bool Value() { return KeyValuePair__Fuse_Node__bool__get_Value(this); }
};

}}}


#endif
