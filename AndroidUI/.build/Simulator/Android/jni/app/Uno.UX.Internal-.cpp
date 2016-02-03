#include <app/Uno.UX.Internal.PropertyFactory.h>

namespace app {
namespace Uno {
namespace UX {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PropertyFactory__uType* PropertyFactory__typeof()
{
    static ::uStaticStrong<PropertyFactory__uType*> type;
    if (type != NULL) return type;

    type = (PropertyFactory__uType*)::uAllocClassType(sizeof(PropertyFactory__uType), "Uno.UX.Internal.PropertyFactory");

    ::uRegisterType(type);
    return type;
}

}}}}
