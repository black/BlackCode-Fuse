// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__UNO_CONTENT__F1D8B777_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__UNO_CONTENT__F1D8B777_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter;

struct Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__uType* Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__typeof();

::uObject* Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator_boxed(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this);
void Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter___ObjInit(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source);
int Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__get_Count(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this);
Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source);
void Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this, ::uString* item);
void Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this);
bool Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this, ::uString* item);
bool Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* __this, ::uString* item);

struct Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* source) { Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-7d0d9c6d.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter::GetEnumerator() { return Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter__GetEnumerator(this); }

}}}


#endif
