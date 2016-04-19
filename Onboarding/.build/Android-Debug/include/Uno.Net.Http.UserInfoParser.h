// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UserInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class UserInfoParser :252
// {
uType* UserInfoParser_typeof();
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval);
void UserInfoParser__Parse_fn(uString* uriString, int* endIdx, int* idx, uString** __retval);

struct UserInfoParser : uObject
{
    static bool IsValid(uString* userInfo);
    static uString* Parse(uString* uriString, int endIdx, int* idx);
};
// }

}}}} // ::g::Uno::Net::Http
