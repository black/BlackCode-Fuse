// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_CONTEN_888E8122_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_CONTEN_888E8122_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter;

struct Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__uType* Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__typeof();

void Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter___ObjInit(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source);
int Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__get_Count(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this);
Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source);
void Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Content::Models::ModelParameter* item);
void Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this);
bool Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Content::Models::ModelParameter* item);
bool Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Content::Models::ModelParameter* item);

struct Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source) { Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-7f4005b1.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator(this); }

}}}


#endif
