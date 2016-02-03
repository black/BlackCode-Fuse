// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct BeginRemoveArgs;}}

namespace g{
namespace Fuse{

// public abstract class BeginRemoveArgs :3875
// {
struct BeginRemoveArgs_type : uType
{
    void(*fp_OnRemoved)(::g::Fuse::BeginRemoveArgs*);
};

BeginRemoveArgs_type* BeginRemoveArgs_typeof();
void BeginRemoveArgs__ctor_1_fn(BeginRemoveArgs* __this);
void BeginRemoveArgs__AddSubscriber_fn(BeginRemoveArgs* __this);
void BeginRemoveArgs__get_HasSubscribers_fn(BeginRemoveArgs* __this, bool* __retval);
void BeginRemoveArgs__Remove_fn(BeginRemoveArgs* __this);
void BeginRemoveArgs__RemoveSubscriber_fn(BeginRemoveArgs* __this);

struct BeginRemoveArgs : ::g::Uno::EventArgs
{
    bool _done;
    int subscribers;

    void ctor_1();
    void AddSubscriber();
    bool HasSubscribers();
    void OnRemoved() { (((BeginRemoveArgs_type*)__type)->fp_OnRemoved)(this); }
    void Remove();
    void RemoveSubscriber();
};
// }

}} // ::g::Fuse
