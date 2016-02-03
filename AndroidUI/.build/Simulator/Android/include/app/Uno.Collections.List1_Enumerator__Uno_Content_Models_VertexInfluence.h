// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_VERTEX_INFLUENCE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_VERTEX_INFLUENCE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_VertexInfluence; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexInfluence; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Models_VertexInfluence;

struct List1_Enumerator__Uno_Content_Models_VertexInfluence__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_VertexInfluence __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Models_VertexInfluence__uType* List1_Enumerator__Uno_Content_Models_VertexInfluence__typeof();

void List1_Enumerator__Uno_Content_Models_VertexInfluence___ObjInit(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this, ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence* source);
void List1_Enumerator__Uno_Content_Models_VertexInfluence__Dispose(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this);
::app::Uno::Content::Models::VertexInfluence* List1_Enumerator__Uno_Content_Models_VertexInfluence__get_Current(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this);
bool List1_Enumerator__Uno_Content_Models_VertexInfluence__MoveNext(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this);
List1_Enumerator__Uno_Content_Models_VertexInfluence List1_Enumerator__Uno_Content_Models_VertexInfluence__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence* source);
void List1_Enumerator__Uno_Content_Models_VertexInfluence__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_VertexInfluence* __this);

struct List1_Enumerator__Uno_Content_Models_VertexInfluence
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Content::Models::VertexInfluence*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence* source) { List1_Enumerator__Uno_Content_Models_VertexInfluence___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Models_VertexInfluence__Dispose(this); }
    ::app::Uno::Content::Models::VertexInfluence* Current() { return List1_Enumerator__Uno_Content_Models_VertexInfluence__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Models_VertexInfluence__MoveNext(this); }
};

}}}


#endif
