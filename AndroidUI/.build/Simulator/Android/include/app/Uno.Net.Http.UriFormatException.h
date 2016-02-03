// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_URI_FORMAT_EXCEPTION_H__
#define __APP_UNO_NET_HTTP_URI_FORMAT_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct UriFormatException;

struct UriFormatException__uType : ::app::Uno::Exception__uType
{
};

UriFormatException__uType* UriFormatException__typeof();

void UriFormatException___ObjInit_2(UriFormatException* __this, ::uString* message);
UriFormatException* UriFormatException__New_3(::uStatic* __this, ::uString* message);

struct UriFormatException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { UriFormatException___ObjInit_2(this, message); }
};

}}}}


#endif
