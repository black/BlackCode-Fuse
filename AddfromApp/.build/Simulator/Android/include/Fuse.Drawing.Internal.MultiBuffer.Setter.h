// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer__Setter;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class MultiBuffer.Setter :315
// {
uType* MultiBuffer__Setter_typeof();
void MultiBuffer__Setter__ctor__fn(MultiBuffer__Setter* __this, ::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int* index1);
void MultiBuffer__Setter__New1_fn(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int* index1, MultiBuffer__Setter** __retval);

struct MultiBuffer__Setter : uObject
{
    int baseP;
    int index;
    uStrong< ::g::Fuse::Drawing::Internal::MultiBuffer*> owner;

    void ctor_(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int index1);
    static MultiBuffer__Setter* New1(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int index1);
};
// }

}}}} // ::g::Fuse::Drawing::Internal
