// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__INT__UNO_COLLECTIONS_9926D782_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__INT__UNO_COLLECTIONS_9926D782_H__

#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__int __interface_0;
};

Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

::uObject* Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator_boxed(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);
int Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Count(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);
void Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int item);
void Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
bool Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int item);
bool Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int item);

struct Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source) { Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Uno_-17559ed0.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer_::GetEnumerator() { return Dictionary2_KeyCollection__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(this); }

}}}


#endif
