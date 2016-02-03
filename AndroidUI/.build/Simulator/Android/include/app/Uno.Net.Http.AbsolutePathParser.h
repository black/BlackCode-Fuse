// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_ABSOLUTE_PATH_PARSER_H__
#define __APP_UNO_NET_HTTP_ABSOLUTE_PATH_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct AbsolutePathParser;

struct AbsolutePathParser__uType : ::uClassType
{
};

AbsolutePathParser__uType* AbsolutePathParser__typeof();

void AbsolutePathParser___ObjInit(AbsolutePathParser* __this);
AbsolutePathParser* AbsolutePathParser__New_1(::uStatic* __this);
::uString* AbsolutePathParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int endIdx, int* startPartIdx);

struct AbsolutePathParser : ::uObject
{
    void _ObjInit() { AbsolutePathParser___ObjInit(this); }
};

}}}}


#endif
