// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelDrawable; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Models_ModelDrawable;

struct List1_Enumerator__Uno_Content_Models_ModelDrawable__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelDrawable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Models_ModelDrawable__uType* List1_Enumerator__Uno_Content_Models_ModelDrawable__typeof();

void List1_Enumerator__Uno_Content_Models_ModelDrawable___ObjInit(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* source);
void List1_Enumerator__Uno_Content_Models_ModelDrawable__Dispose(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this);
::app::Uno::Content::Models::ModelDrawable* List1_Enumerator__Uno_Content_Models_ModelDrawable__get_Current(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this);
bool List1_Enumerator__Uno_Content_Models_ModelDrawable__MoveNext(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this);
List1_Enumerator__Uno_Content_Models_ModelDrawable List1_Enumerator__Uno_Content_Models_ModelDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* source);
void List1_Enumerator__Uno_Content_Models_ModelDrawable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelDrawable* __this);

struct List1_Enumerator__Uno_Content_Models_ModelDrawable
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Content::Models::ModelDrawable*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* source) { List1_Enumerator__Uno_Content_Models_ModelDrawable___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Models_ModelDrawable__Dispose(this); }
    ::app::Uno::Content::Models::ModelDrawable* Current() { return List1_Enumerator__Uno_Content_Models_ModelDrawable__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Models_ModelDrawable__MoveNext(this); }
};

}}}


#endif
