// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_328B15FA_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_SPLINES_KEYFRAMED_328B15FA_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Splines_KeyframedSplin-e11d5895.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float__float.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_;

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___uType* List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___typeof();

void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float____ObjInit(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Dispose(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___get_Current(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
bool List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___MoveNext(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* source);
void List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);

struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* source) { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Dispose(this); }
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float Current() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float___MoveNext(this); }
};

}}}


#endif
