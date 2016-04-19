// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Cache;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Cache<T> :8
// {
uType* Cache_typeof();
void Cache__ctor_1_fn(Cache* __this, uObject* source);
void Cache__Evaluate_fn(Cache* __this);
void Cache__get_Item_fn(Cache* __this, int* index, uTRef __retval);
void Cache__get_Items_fn(Cache* __this, uObject** __retval);
void Cache__get_Length_fn(Cache* __this, int* __retval);
void Cache__New2_fn(uType* __type, uObject* source, Cache** __retval);

struct Cache : uObject
{
    uStrong<uArray*> _cache;
    uStrong<uObject*> _source;

    void ctor_1(uObject* source);
    void Evaluate();
    template<class T>
    T Item(int index) { T __retval; return Cache__get_Item_fn(this, &index, &__retval), __retval; }
    uObject* Items();
    int Length();
    static Cache* New2(uType* __type, uObject* source);
};
// }

}}} // ::g::Fuse::Drawing
