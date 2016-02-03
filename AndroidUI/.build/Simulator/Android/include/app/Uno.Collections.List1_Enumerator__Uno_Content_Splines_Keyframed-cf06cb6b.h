// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_CF06CB6B_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_CF06CB6B_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-1bd22fa2.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4x4__float4x4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_;

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___uType* List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___typeof();

void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4____ObjInit(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___Dispose(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* __this);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___get_Current(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* __this);
bool List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___MoveNext(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* __this);
List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_ List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* __this);

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_* source) { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___Dispose(this); }
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 Current() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___MoveNext(this); }
};

}}}


#endif
