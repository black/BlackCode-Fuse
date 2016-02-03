// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_QUERY_PARSER_H__
#define __APP_UNO_NET_HTTP_QUERY_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct QueryParser;

struct QueryParser__uType : ::uClassType
{
};

QueryParser__uType* QueryParser__typeof();

void QueryParser___ObjInit(QueryParser* __this);
QueryParser* QueryParser__New_1(::uStatic* __this);
::uString* QueryParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int idx, int* startPartIdx);

struct QueryParser : ::uObject
{
    void _ObjInit() { QueryParser___ObjInit(this); }
};

}}}}


#endif
