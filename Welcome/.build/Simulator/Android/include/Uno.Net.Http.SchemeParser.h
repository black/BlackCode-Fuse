// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct SchemeParser;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct SchemeParserResult;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class SchemeParser :197
// {
uType* SchemeParser_typeof();
void SchemeParser__ctor__fn(SchemeParser* __this);
void SchemeParser__New1_fn(SchemeParser** __retval);
void SchemeParser__Parse_fn(uString* uriString, int* idx, ::g::Uno::Net::Http::SchemeParserResult* __retval);

struct SchemeParser : uObject
{
    void ctor_();
    static SchemeParser* New1();
    static ::g::Uno::Net::Http::SchemeParserResult Parse(uString* uriString, int* idx);
};
// }

}}}} // ::g::Uno::Net::Http
