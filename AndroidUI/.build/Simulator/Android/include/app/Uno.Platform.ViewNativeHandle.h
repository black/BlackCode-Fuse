// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_VIEW_NATIVE_HANDLE_H__
#define __APP_UNO_PLATFORM_VIEW_NATIVE_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
#include <Uno/Platform2.h>

namespace app {
namespace Uno {
namespace Platform {

struct ViewNativeHandle__uType : ::uStructType
{
};

ViewNativeHandle__uType* ViewNativeHandle__typeof();

bool ViewNativeHandle__Equals(uPlatform2::ViewNativeHandle* __this, ::uObject* obj);
int ViewNativeHandle__GetHashCode(uPlatform2::ViewNativeHandle* __this);
bool ViewNativeHandle__IsSameView(::uStatic* __this, uPlatform2::ViewNativeHandle handle1, uPlatform2::ViewNativeHandle handle2);
bool ViewNativeHandle__op_Equality(::uStatic* __this, uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs);

struct ViewNativeHandle
{
    static bool Equals(uPlatform2::ViewNativeHandle __this, ::uObject* obj) { return ViewNativeHandle__Equals(&__this, obj); }
    static int GetHashCode(uPlatform2::ViewNativeHandle __this) { return ViewNativeHandle__GetHashCode(&__this); }
};

}}}


#endif
