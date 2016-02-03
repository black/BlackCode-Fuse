// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// internal struct Dictionary<TKey, TValue>.Bucket :18
// {
uStructType* Dictionary__Bucket_typeof();

template<class TKey, class TValue>
struct Dictionary__Bucket
{
    TKey Key;
    TValue Value;
    int State;
};
// }

}}} // ::g::Uno::Collections
