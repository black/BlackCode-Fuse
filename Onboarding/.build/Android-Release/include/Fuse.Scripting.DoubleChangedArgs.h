// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct DoubleChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class DoubleChangedArgs :120
// {
uType* DoubleChangedArgs_typeof();
void DoubleChangedArgs__ctor_2_fn(DoubleChangedArgs* __this, double* value, uObject* origin);
void DoubleChangedArgs__New3_fn(double* value, uObject* origin, DoubleChangedArgs** __retval);

struct DoubleChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(double value, uObject* origin);
    static DoubleChangedArgs* New3(double value, uObject* origin);
};
// }

}}} // ::g::Fuse::Scripting
