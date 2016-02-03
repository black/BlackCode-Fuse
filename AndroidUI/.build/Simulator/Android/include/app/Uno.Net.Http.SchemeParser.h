// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_SCHEME_PARSER_H__
#define __APP_UNO_NET_HTTP_SCHEME_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct SchemeParserResult; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct SchemeParser;

struct SchemeParser__uType : ::uClassType
{
};

SchemeParser__uType* SchemeParser__typeof();

void SchemeParser___ObjInit(SchemeParser* __this);
SchemeParser* SchemeParser__New_1(::uStatic* __this);
::app::Uno::Net::Http::SchemeParserResult SchemeParser__Parse(::uStatic* __this, ::uString* uriString, int* idx);

struct SchemeParser : ::uObject
{
    void _ObjInit() { SchemeParser___ObjInit(this); }
};

}}}}


#endif
