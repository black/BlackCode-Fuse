// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_CONTEN_AD531EBB_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_CONTEN_AD531EBB_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__typeof();

void Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
int Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__get_Count(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this);
Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
void Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Content::Models::VertexAttributeArray* item);
void Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this);
bool Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Content::Models::VertexAttributeArray* item);
bool Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Content::Models::VertexAttributeArray* item);

struct Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source) { Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-dfe1bf26.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(this); }

}}}


#endif
