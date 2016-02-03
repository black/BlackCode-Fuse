// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__UNO_COLLECTI_CA922854_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__UNO_COLLECTI_CA922854_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__string__Uno_Collections_List_object_;

struct Dictionary2_KeyCollection__string__Uno_Collections_List_object___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

Dictionary2_KeyCollection__string__Uno_Collections_List_object___uType* Dictionary2_KeyCollection__string__Uno_Collections_List_object___typeof();

::uObject* Dictionary2_KeyCollection__string__Uno_Collections_List_object___GetEnumerator_boxed(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this);
void Dictionary2_KeyCollection__string__Uno_Collections_List_object____ObjInit(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);
int Dictionary2_KeyCollection__string__Uno_Collections_List_object___get_Count(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_KeyCollection__string__Uno_Collections_List_object___GetEnumerator(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this);
Dictionary2_KeyCollection__string__Uno_Collections_List_object_* Dictionary2_KeyCollection__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);
void Dictionary2_KeyCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this, ::uString* item);
void Dictionary2_KeyCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this);
bool Dictionary2_KeyCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this, ::uString* item);
bool Dictionary2_KeyCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__string__Uno_Collections_List_object_* __this, ::uString* item);

struct Dictionary2_KeyCollection__string__Uno_Collections_List_object_ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__string__Uno_Collections_List_object___GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source) { Dictionary2_KeyCollection__string__Uno_Collections_List_object____ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__string__Uno_Collections_List_object___get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-7b885023.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_KeyCollection__string__Uno_Collections_List_object_::GetEnumerator() { return Dictionary2_KeyCollection__string__Uno_Collections_List_object___GetEnumerator(this); }

}}}


#endif
