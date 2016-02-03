// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__UNO_COLLECTI_30F939E7_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__UNO_COLLECTI_30F939E7_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Uno_Action_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_;

struct Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___typeof();

::uObject* Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___GetEnumerator_boxed(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this);
void Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action____ObjInit(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source);
int Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___get_Count(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___GetEnumerator(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this);
Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source);
void Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this, ::uString* item);
void Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this);
bool Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this, ::uString* item);
bool Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_* __this, ::uString* item);

struct Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source) { Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action____ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__U-767a7578.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action_::GetEnumerator() { return Dictionary2_KeyCollection__string__Uno_Collections_List_Uno_Action___GetEnumerator(this); }

}}}


#endif
