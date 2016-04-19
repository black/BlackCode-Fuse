// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct Directory;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class Directory :665
// {
uClassType* Directory_typeof();
void Directory__GetUserDirectory_fn(int* dir, uString** __retval);

struct Directory : uObject
{
    static uString* GetUserDirectory(int dir);
};
// }

}}} // ::g::Uno::IO
