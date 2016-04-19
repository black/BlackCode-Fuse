// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class StringChangedArgs :110
// {
uType* StringChangedArgs_typeof();
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue, uObject* origin);
void StringChangedArgs__New3_fn(uString* newValue, uObject* origin, StringChangedArgs** __retval);

struct StringChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(uString* newValue, uObject* origin);
    static StringChangedArgs* New3(uString* newValue, uObject* origin);
};
// }

}}} // ::g::Fuse::Scripting
