// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_USER_INFO_PARSER_H__
#define __APP_UNO_NET_HTTP_USER_INFO_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct UserInfoParser;

struct UserInfoParser__uType : ::uClassType
{
};

UserInfoParser__uType* UserInfoParser__typeof();

void UserInfoParser___ObjInit(UserInfoParser* __this);
bool UserInfoParser__IsValid(::uStatic* __this, ::uString* userInfo);
UserInfoParser* UserInfoParser__New_1(::uStatic* __this);
::uString* UserInfoParser__Parse(::uStatic* __this, ::uString* uriString, int endIdx, int* idx);

struct UserInfoParser : ::uObject
{
    void _ObjInit() { UserInfoParser___ObjInit(this); }
};

}}}}


#endif
