// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_TO_END_POINT_H__
#define __APP_OUTRACKS_SIMULATOR_FAILED_TO_CONNECT_TO_END_POINT_H__

#include <app/Uno.Exception.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct FailedToConnectToEndPoint;

struct FailedToConnectToEndPoint__uType : ::app::Uno::Exception__uType
{
};

FailedToConnectToEndPoint__uType* FailedToConnectToEndPoint__typeof();

void FailedToConnectToEndPoint___ObjInit_2(FailedToConnectToEndPoint* __this, ::app::Uno::Net::IPEndPoint* endpoint, ::app::Uno::Exception* e);
FailedToConnectToEndPoint* FailedToConnectToEndPoint__New_3(::uStatic* __this, ::app::Uno::Net::IPEndPoint* endpoint, ::app::Uno::Exception* e);

struct FailedToConnectToEndPoint : ::app::Uno::Exception
{
    void _ObjInit_2(::app::Uno::Net::IPEndPoint* endpoint, ::app::Uno::Exception* e) { FailedToConnectToEndPoint___ObjInit_2(this, endpoint, e); }
};

}}}


#endif
