// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_SPLIN_6B046D0C_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_SPLIN_6B046D0C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float2__float2; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___typeof();

struct IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_
{
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2(*__fp_get_Current)(void*);

    static ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 Current(::uObject* __this);
};

}}}

#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float2__float2.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_::Current(::uObject* __this) { return ((IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*)uGetInterfacePtr(__this, IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
