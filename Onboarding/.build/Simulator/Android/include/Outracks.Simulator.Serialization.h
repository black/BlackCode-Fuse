// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Serialization;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal static class Serialization :549
// {
uClassType* Serialization_typeof();
void Serialization___ReadString_fn(::g::Uno::IO::BinaryReader* reader, uString** __retval);

struct Serialization : uObject
{
    static uSStrong<uDelegate*> ReadString_;
    static uSStrong<uDelegate*>& ReadString() { return Serialization_typeof()->Init(), ReadString_; }

    static uString* _ReadString(::g::Uno::IO::BinaryReader* reader);
};
// }

}}} // ::g::Outracks::Simulator
