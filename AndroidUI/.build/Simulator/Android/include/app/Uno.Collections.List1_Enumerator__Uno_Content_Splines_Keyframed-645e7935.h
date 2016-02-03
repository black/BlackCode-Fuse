// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_645E7935_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_645E7935_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-6b046d0c.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float2__float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_;

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___uType* List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___typeof();

void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2____ObjInit(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___Dispose(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* __this);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___get_Current(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* __this);
bool List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___MoveNext(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* __this);
List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_ List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* __this);

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_* source) { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___Dispose(this); }
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 Current() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2___MoveNext(this); }
};

}}}


#endif
