// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Text{struct Base64;}}}

namespace g{
namespace Uno{
namespace Text{

// public static class Base64 :26
// {
uClassType* Base64_typeof();
void Base64__GetBytes_fn(uString* value, uArray** __retval);
void Base64__GetString_fn(uArray* value, uString** __retval);

struct Base64 : uObject
{
    static uArray* GetBytes(uString* value);
    static uString* GetString(uArray* value);
};
// }

}}} // ::g::Uno::Text
