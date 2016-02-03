// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class EndSeekArgs :1705
// {
uType* EndSeekArgs_typeof();
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo);
void EndSeekArgs__New1_fn(int* snapTo, EndSeekArgs** __retval);
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval);
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value);

struct EndSeekArgs : uObject
{
    int _SnapTo;

    void ctor_(int snapTo);
    int SnapTo();
    void SnapTo(int value);
    static EndSeekArgs* New1(int snapTo);
};
// }

}}} // ::g::Fuse::Navigation
