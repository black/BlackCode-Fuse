// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_EFC35BF4_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_EFC35BF4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-de50e1a7.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float3__float3.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_;

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___uType* List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___typeof();

void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3____ObjInit(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___Dispose(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* __this);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___get_Current(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* __this);
bool List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___MoveNext(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* __this);
List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_ List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* __this);

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_* source) { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___Dispose(this); }
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 Current() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3___MoveNext(this); }
};

}}}


#endif
