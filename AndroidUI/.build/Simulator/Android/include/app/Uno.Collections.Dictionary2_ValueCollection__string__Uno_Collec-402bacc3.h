// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_COLLEC_402BACC3_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_COLLEC_402BACC3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Collections_List_object_;

struct Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_object___typeof();

void Dictionary2_ValueCollection__string__Uno_Collections_List_object____ObjInit(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);
int Dictionary2_ValueCollection__string__Uno_Collections_List_object___get_Count(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_ValueCollection__string__Uno_Collections_List_object___GetEnumerator(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this);
Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Dictionary2_ValueCollection__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);
void Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::List__object* item);
void Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this);
bool Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::List__object* item);
bool Dictionary2_ValueCollection__string__Uno_Collections_List_object___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::List__object* item);

struct Dictionary2_ValueCollection__string__Uno_Collections_List_object_ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source) { Dictionary2_ValueCollection__string__Uno_Collections_List_object____ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Uno_Collections_List_object___get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-3442ad91.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_ValueCollection__string__Uno_Collections_List_object_::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Collections_List_object___GetEnumerator(this); }

}}}


#endif
