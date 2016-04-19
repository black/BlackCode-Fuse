// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HashParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HashParser :31
// {
uType* HashParser_typeof();
void HashParser__Parse_fn(uString* uriString, int* idx, int* startPartIdx, uString** __retval);

struct HashParser : uObject
{
    static uString* Parse(uString* uriString, int idx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
