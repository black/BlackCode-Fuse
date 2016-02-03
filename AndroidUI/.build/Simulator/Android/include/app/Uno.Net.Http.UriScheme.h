// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_URI_SCHEME_H__
#define __APP_UNO_NET_HTTP_URI_SCHEME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__int; } } }
namespace app { namespace Uno { namespace Collections { struct List__string; } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct UriScheme;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__int*> UriScheme___defaultPorts;
extern ::uStaticStrong< ::app::Uno::Collections::List__string*> UriScheme__KnownInternetSchemes;
extern ::uStaticStrong< ::app::Uno::Collections::List__string*> UriScheme__KnownNonInternetSchemes;

struct UriScheme__uType : ::uClassType
{
};

UriScheme__uType* UriScheme__typeof();

void UriScheme___ObjInit(UriScheme* __this);
void UriScheme___TypeInit(::uStatic* __this);
::app::Uno::Collections::Dictionary__string__int* UriScheme__get_DefaultPorts(::uStatic* __this);
int UriScheme__GetSchemeType(::uStatic* __this, ::uString* scheme);
bool UriScheme__IsHttpScheme(::uStatic* __this, ::uString* scheme);
UriScheme* UriScheme__New_1(::uStatic* __this);

struct UriScheme : ::uObject
{
    void _ObjInit() { UriScheme___ObjInit(this); }
};

}}}}


#endif
