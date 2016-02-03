// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_NODE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelNode.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelNode; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Models_ModelNode;

struct List1_Enumerator__Uno_Content_Models_ModelNode__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelNode __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Models_ModelNode__uType* List1_Enumerator__Uno_Content_Models_ModelNode__typeof();

void List1_Enumerator__Uno_Content_Models_ModelNode___ObjInit(List1_Enumerator__Uno_Content_Models_ModelNode* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* source);
void List1_Enumerator__Uno_Content_Models_ModelNode__Dispose(List1_Enumerator__Uno_Content_Models_ModelNode* __this);
::app::Uno::Content::Models::ModelNode* List1_Enumerator__Uno_Content_Models_ModelNode__get_Current(List1_Enumerator__Uno_Content_Models_ModelNode* __this);
bool List1_Enumerator__Uno_Content_Models_ModelNode__MoveNext(List1_Enumerator__Uno_Content_Models_ModelNode* __this);
List1_Enumerator__Uno_Content_Models_ModelNode List1_Enumerator__Uno_Content_Models_ModelNode__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* source);
void List1_Enumerator__Uno_Content_Models_ModelNode__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelNode* __this);

struct List1_Enumerator__Uno_Content_Models_ModelNode
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Content::Models::ModelNode*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Models_ModelNode* source) { List1_Enumerator__Uno_Content_Models_ModelNode___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Models_ModelNode__Dispose(this); }
    ::app::Uno::Content::Models::ModelNode* Current() { return List1_Enumerator__Uno_Content_Models_ModelNode__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Models_ModelNode__MoveNext(this); }
};

}}}


#endif
