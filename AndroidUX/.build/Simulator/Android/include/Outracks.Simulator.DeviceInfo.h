// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct DeviceInfo;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static extern class DeviceInfo :1961
// {
uClassType* DeviceInfo_typeof();
void DeviceInfo__get_GUID_fn(uString** __retval);
void DeviceInfo__get_Name_fn(uString** __retval);

struct DeviceInfo : uObject
{
    static uString* GUID();
    static uString* Name();
};
// }

}}} // ::g::Outracks::Simulator
