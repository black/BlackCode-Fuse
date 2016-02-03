// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DATA_CONTEXT_CHANGED_ARGS_H__
#define __APP_FUSE_DATA_CONTEXT_CHANGED_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct DataContextChangedArgs;

struct DataContextChangedArgs__uType : ::app::Uno::EventArgs__uType
{
};

DataContextChangedArgs__uType* DataContextChangedArgs__typeof();

void DataContextChangedArgs___ObjInit_1(DataContextChangedArgs* __this, ::app::Fuse::Node* node, ::uObject* oldValue, ::uObject* newValue);
::uObject* DataContextChangedArgs__get_NewValue(DataContextChangedArgs* __this);
::app::Fuse::Node* DataContextChangedArgs__get_Node(DataContextChangedArgs* __this);
::uObject* DataContextChangedArgs__get_OldValue(DataContextChangedArgs* __this);
DataContextChangedArgs* DataContextChangedArgs__New_2(::uStatic* __this, ::app::Fuse::Node* node, ::uObject* oldValue, ::uObject* newValue);
void DataContextChangedArgs__set_NewValue(DataContextChangedArgs* __this, ::uObject* value);
void DataContextChangedArgs__set_Node(DataContextChangedArgs* __this, ::app::Fuse::Node* value);
void DataContextChangedArgs__set_OldValue(DataContextChangedArgs* __this, ::uObject* value);

struct DataContextChangedArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::uObject*> _OldValue;
    ::uStrong< ::uObject*> _NewValue;
    ::uStrong< ::app::Fuse::Node*> _Node;

    void _ObjInit_1(::app::Fuse::Node* node, ::uObject* oldValue, ::uObject* newValue) { DataContextChangedArgs___ObjInit_1(this, node, oldValue, newValue); }
    ::uObject* NewValue() { return DataContextChangedArgs__get_NewValue(this); }
    ::app::Fuse::Node* Node() { return DataContextChangedArgs__get_Node(this); }
    ::uObject* OldValue() { return DataContextChangedArgs__get_OldValue(this); }
    void NewValue(::uObject* value) { DataContextChangedArgs__set_NewValue(this, value); }
    void Node(::app::Fuse::Node* value) { DataContextChangedArgs__set_Node(this, value); }
    void OldValue(::uObject* value) { DataContextChangedArgs__set_OldValue(this, value); }
};

}}


#endif
