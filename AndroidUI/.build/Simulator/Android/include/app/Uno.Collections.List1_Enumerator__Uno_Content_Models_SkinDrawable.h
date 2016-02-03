// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_SKIN_DRAWABLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_SKIN_DRAWABLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_SkinDrawable; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinDrawable; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Models_SkinDrawable;

struct List1_Enumerator__Uno_Content_Models_SkinDrawable__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_SkinDrawable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Models_SkinDrawable__uType* List1_Enumerator__Uno_Content_Models_SkinDrawable__typeof();

void List1_Enumerator__Uno_Content_Models_SkinDrawable___ObjInit(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable* source);
void List1_Enumerator__Uno_Content_Models_SkinDrawable__Dispose(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this);
::app::Uno::Content::Models::SkinDrawable* List1_Enumerator__Uno_Content_Models_SkinDrawable__get_Current(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this);
bool List1_Enumerator__Uno_Content_Models_SkinDrawable__MoveNext(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this);
List1_Enumerator__Uno_Content_Models_SkinDrawable List1_Enumerator__Uno_Content_Models_SkinDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable* source);
void List1_Enumerator__Uno_Content_Models_SkinDrawable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_SkinDrawable* __this);

struct List1_Enumerator__Uno_Content_Models_SkinDrawable
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Content::Models::SkinDrawable*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable* source) { List1_Enumerator__Uno_Content_Models_SkinDrawable___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Models_SkinDrawable__Dispose(this); }
    ::app::Uno::Content::Models::SkinDrawable* Current() { return List1_Enumerator__Uno_Content_Models_SkinDrawable__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Models_SkinDrawable__MoveNext(this); }
};

}}}


#endif
