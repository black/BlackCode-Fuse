// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_A8BC80BB_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_A8BC80BB_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-ec9d5642.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4__float4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_;

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___uType* List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___typeof();

void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4____ObjInit(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___Dispose(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* __this);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___get_Current(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* __this);
bool List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___MoveNext(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* __this);
List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_ List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* __this);

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_* source) { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___Dispose(this); }
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 Current() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4___MoveNext(this); }
};

}}}


#endif
