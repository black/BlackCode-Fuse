// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct DataContextChangedArgs;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public sealed class DataContextChangedArgs :2167
// {
uType* DataContextChangedArgs_typeof();
void DataContextChangedArgs__ctor_1_fn(DataContextChangedArgs* __this, ::g::Fuse::Node* node, uObject* oldValue, uObject* newValue);
void DataContextChangedArgs__New2_fn(::g::Fuse::Node* node, uObject* oldValue, uObject* newValue, DataContextChangedArgs** __retval);
void DataContextChangedArgs__get_NewValue_fn(DataContextChangedArgs* __this, uObject** __retval);
void DataContextChangedArgs__set_NewValue_fn(DataContextChangedArgs* __this, uObject* value);
void DataContextChangedArgs__get_Node_fn(DataContextChangedArgs* __this, ::g::Fuse::Node** __retval);
void DataContextChangedArgs__set_Node_fn(DataContextChangedArgs* __this, ::g::Fuse::Node* value);
void DataContextChangedArgs__get_OldValue_fn(DataContextChangedArgs* __this, uObject** __retval);
void DataContextChangedArgs__set_OldValue_fn(DataContextChangedArgs* __this, uObject* value);

struct DataContextChangedArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> _NewValue;
    uStrong< ::g::Fuse::Node*> _Node;
    uStrong<uObject*> _OldValue;

    void ctor_1(::g::Fuse::Node* node, uObject* oldValue, uObject* newValue);
    uObject* NewValue();
    void NewValue(uObject* value);
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    uObject* OldValue();
    void OldValue(uObject* value);
    static DataContextChangedArgs* New2(::g::Fuse::Node* node, uObject* oldValue, uObject* newValue);
};
// }

}} // ::g::Fuse
