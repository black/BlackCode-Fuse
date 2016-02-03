// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_CONTENT_MOD_ED89BEBC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_CONTENT_MOD_ED89BEBC_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-d9f4a565.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-7e6c5d3f.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_VertexAttributeArray; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof();

void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
bool Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);

struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source) { Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Current() { return Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(this); }
};

}}}


#endif
