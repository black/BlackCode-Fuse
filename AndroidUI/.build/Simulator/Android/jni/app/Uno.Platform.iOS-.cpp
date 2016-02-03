#include <app/Uno.Platform.iOS.StatusBarAnimation.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>

namespace app {
namespace Uno {
namespace Platform {
namespace iOS {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StatusBarAnimation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.iOS.StatusBarAnimation", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", 0LL,
        "Fade", 1LL,
        "Slide", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StatusBarStyle__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.iOS.StatusBarStyle", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);

    ::uRegisterType(type);
    return type;
}

}}}}
