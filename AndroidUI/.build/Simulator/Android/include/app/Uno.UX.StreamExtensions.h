// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_STREAM_EXTENSIONS_H__
#define __APP_UNO_U_X_STREAM_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct MemoryStream; } } }

namespace app {
namespace Uno {
namespace UX {

struct StreamExtensions__uType : ::uClassType
{
};

StreamExtensions__uType* StreamExtensions__typeof();

::uArray* StreamExtensions__ReadAllBytes(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uArray* StreamExtensions__ToArray(::uStatic* __this, ::app::Uno::IO::MemoryStream* memoryStream);

}}}


#endif
