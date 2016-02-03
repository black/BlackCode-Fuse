// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Reflection.Uno\0.1.0\Native\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct ReflectionHelpers;}}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// internal static extern class ReflectionHelpers :15
// {
uClassType* ReflectionHelpers_typeof();
void ReflectionHelpers__MakeGenericTypeLookupTable_fn(::g::Uno::Collections::Dictionary** __retval);

struct ReflectionHelpers : uObject
{
    static ::g::Uno::Collections::Dictionary* MakeGenericTypeLookupTable();
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
