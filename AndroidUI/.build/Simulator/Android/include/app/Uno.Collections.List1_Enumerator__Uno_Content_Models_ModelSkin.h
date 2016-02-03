// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_SKIN_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_SKIN_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelSkin; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelSkin; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Models_ModelSkin;

struct List1_Enumerator__Uno_Content_Models_ModelSkin__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelSkin __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Models_ModelSkin__uType* List1_Enumerator__Uno_Content_Models_ModelSkin__typeof();

void List1_Enumerator__Uno_Content_Models_ModelSkin___ObjInit(List1_Enumerator__Uno_Content_Models_ModelSkin* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* source);
void List1_Enumerator__Uno_Content_Models_ModelSkin__Dispose(List1_Enumerator__Uno_Content_Models_ModelSkin* __this);
::app::Uno::Content::Models::ModelSkin* List1_Enumerator__Uno_Content_Models_ModelSkin__get_Current(List1_Enumerator__Uno_Content_Models_ModelSkin* __this);
bool List1_Enumerator__Uno_Content_Models_ModelSkin__MoveNext(List1_Enumerator__Uno_Content_Models_ModelSkin* __this);
List1_Enumerator__Uno_Content_Models_ModelSkin List1_Enumerator__Uno_Content_Models_ModelSkin__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* source);
void List1_Enumerator__Uno_Content_Models_ModelSkin__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_ModelSkin* __this);

struct List1_Enumerator__Uno_Content_Models_ModelSkin
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Content::Models::ModelSkin*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* source) { List1_Enumerator__Uno_Content_Models_ModelSkin___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Models_ModelSkin__Dispose(this); }
    ::app::Uno::Content::Models::ModelSkin* Current() { return List1_Enumerator__Uno_Content_Models_ModelSkin__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Models_ModelSkin__MoveNext(this); }
};

}}}


#endif
