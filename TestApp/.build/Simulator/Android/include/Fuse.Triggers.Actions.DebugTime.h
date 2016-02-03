// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugTime;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class DebugTime :469
// {
struct DebugTime_type : uType
{
    ::g::Fuse::Triggers::Actions::ITaggedDebugProperty interface0;
};

DebugTime_type* DebugTime_typeof();
void DebugTime__ctor__fn(DebugTime* __this);
void DebugTime__GetStringValue_fn(DebugTime* __this, uString** __retval);
void DebugTime__GetTag_fn(DebugTime* __this, uString** __retval);
void DebugTime__New1_fn(DebugTime** __retval);

struct DebugTime : uObject
{
    void ctor_();
    uString* GetStringValue();
    uString* GetTag();
    static DebugTime* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
