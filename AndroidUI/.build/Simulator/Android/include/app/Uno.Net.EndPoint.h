// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_END_POINT_H__
#define __APP_UNO_NET_END_POINT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {

struct EndPoint;

struct EndPoint__uType : ::uClassType
{
};

EndPoint__uType* EndPoint__typeof();

void EndPoint___ObjInit(EndPoint* __this, int addressFamily);
int EndPoint__get_AddressFamily(EndPoint* __this);
void EndPoint__set_AddressFamily(EndPoint* __this, int value);

struct EndPoint : ::uObject
{
    int _AddressFamily;

    void _ObjInit(int addressFamily) { EndPoint___ObjInit(this, addressFamily); }
    int AddressFamily() { return EndPoint__get_AddressFamily(this); }
    void AddressFamily(int value) { EndPoint__set_AddressFamily(this, value); }
};

}}}


#endif
