// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_CONVERTERS_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_CONVERTERS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4x4__float4x4; } } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayConverters__uType : ::uClassType
{
};

ArrayConverters__uType* ArrayConverters__typeof();

::uArray* ArrayConverters__ToFloat4x4Array(::uStatic* __this, ::app::Uno::Buffer* b);
::uArray* ArrayConverters__ToFloat4x4KeyArray(::uStatic* __this, ::app::Uno::Buffer* b);

}}}}}


#endif
