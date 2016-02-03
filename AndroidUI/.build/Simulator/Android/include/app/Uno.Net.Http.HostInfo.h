// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HOST_INFO_H__
#define __APP_UNO_NET_HTTP_HOST_INFO_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HostInfo;

struct HostInfo__uType : ::uClassType
{
};

HostInfo__uType* HostInfo__typeof();

void HostInfo___ObjInit(HostInfo* __this);
::uString* HostInfo__get_Authority(HostInfo* __this);
::uString* HostInfo__get_Host(HostInfo* __this);
int HostInfo__get_Port(HostInfo* __this);
HostInfo* HostInfo__New_1(::uStatic* __this);
void HostInfo__set_Authority(HostInfo* __this, ::uString* value);
void HostInfo__set_Host(HostInfo* __this, ::uString* value);
void HostInfo__set_Port(HostInfo* __this, int value);

struct HostInfo : ::uObject
{
    ::uStrong< ::uString*> _Authority;
    ::uStrong< ::uString*> _Host;
    int _Port;

    void _ObjInit() { HostInfo___ObjInit(this); }
    ::uString* Authority() { return HostInfo__get_Authority(this); }
    ::uString* Host() { return HostInfo__get_Host(this); }
    int Port() { return HostInfo__get_Port(this); }
    void Authority(::uString* value) { HostInfo__set_Authority(this, value); }
    void Host(::uString* value) { HostInfo__set_Host(this, value); }
    void Port(int value) { HostInfo__set_Port(this, value); }
};

}}}}


#endif
