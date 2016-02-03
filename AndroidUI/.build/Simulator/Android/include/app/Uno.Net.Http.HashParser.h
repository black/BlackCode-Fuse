// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HASH_PARSER_H__
#define __APP_UNO_NET_HTTP_HASH_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HashParser;

struct HashParser__uType : ::uClassType
{
};

HashParser__uType* HashParser__typeof();

void HashParser___ObjInit(HashParser* __this);
HashParser* HashParser__New_1(::uStatic* __this);
::uString* HashParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int* startPartIdx);

struct HashParser : ::uObject
{
    void _ObjInit() { HashParser___ObjInit(this); }
};

}}}}


#endif
