// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_SKIN_BONE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CONTENT_MODELS_SKIN_BONE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_SkinBone.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_SkinBone; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinBone; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Content_Models_SkinBone;

struct List1_Enumerator__Uno_Content_Models_SkinBone__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_SkinBone __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Content_Models_SkinBone__uType* List1_Enumerator__Uno_Content_Models_SkinBone__typeof();

void List1_Enumerator__Uno_Content_Models_SkinBone___ObjInit(List1_Enumerator__Uno_Content_Models_SkinBone* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinBone* source);
void List1_Enumerator__Uno_Content_Models_SkinBone__Dispose(List1_Enumerator__Uno_Content_Models_SkinBone* __this);
::app::Uno::Content::Models::SkinBone* List1_Enumerator__Uno_Content_Models_SkinBone__get_Current(List1_Enumerator__Uno_Content_Models_SkinBone* __this);
bool List1_Enumerator__Uno_Content_Models_SkinBone__MoveNext(List1_Enumerator__Uno_Content_Models_SkinBone* __this);
List1_Enumerator__Uno_Content_Models_SkinBone List1_Enumerator__Uno_Content_Models_SkinBone__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Content_Models_SkinBone* source);
void List1_Enumerator__Uno_Content_Models_SkinBone__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Content_Models_SkinBone* __this);

struct List1_Enumerator__Uno_Content_Models_SkinBone
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Content::Models::SkinBone*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Content_Models_SkinBone* source) { List1_Enumerator__Uno_Content_Models_SkinBone___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Content_Models_SkinBone__Dispose(this); }
    ::app::Uno::Content::Models::SkinBone* Current() { return List1_Enumerator__Uno_Content_Models_SkinBone__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Content_Models_SkinBone__MoveNext(this); }
};

}}}


#endif
