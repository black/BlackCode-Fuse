// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__DFE1BF26_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__DFE1BF26_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof();

void Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*> _source;
    ::uStrong< ::app::Uno::Content::Models::VertexAttributeArray*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source) { Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(this); }
};

}}}


#endif
