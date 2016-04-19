// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct File;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class File :805
// {
uClassType* File_typeof();
void File__Delete_fn(uString* filename);
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval);
void File__WriteAllBytes_fn(uString* filename, uArray* bytes);

struct File : uObject
{
    static void Delete(uString* filename);
    static ::g::Uno::IO::Stream* OpenRead(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
};
// }

}}} // ::g::Uno::IO
