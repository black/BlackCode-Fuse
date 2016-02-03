// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FRAMEBUFFER__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FRAMEBUFFER__INT_H__

#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__int; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__framebuffer__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__framebuffer__int;

struct Dictionary2_ValueCollection__framebuffer__int__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__int __interface_0;
};

Dictionary2_ValueCollection__framebuffer__int__uType* Dictionary2_ValueCollection__framebuffer__int__typeof();

::uObject* Dictionary2_ValueCollection__framebuffer__int__GetEnumerator_boxed(Dictionary2_ValueCollection__framebuffer__int* __this);
void Dictionary2_ValueCollection__framebuffer__int___ObjInit(Dictionary2_ValueCollection__framebuffer__int* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source);
int Dictionary2_ValueCollection__framebuffer__int__get_Count(Dictionary2_ValueCollection__framebuffer__int* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int Dictionary2_ValueCollection__framebuffer__int__GetEnumerator(Dictionary2_ValueCollection__framebuffer__int* __this);
Dictionary2_ValueCollection__framebuffer__int* Dictionary2_ValueCollection__framebuffer__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source);
void Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__framebuffer__int* __this, int item);
void Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__framebuffer__int* __this);
bool Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__framebuffer__int* __this, int item);
bool Dictionary2_ValueCollection__framebuffer__int__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__framebuffer__int* __this, int item);

struct Dictionary2_ValueCollection__framebuffer__int : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__int*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__framebuffer__int__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__framebuffer__int* source) { Dictionary2_ValueCollection__framebuffer__int___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__framebuffer__int__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__framebuffer__int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__framebuffer__int Dictionary2_ValueCollection__framebuffer__int::GetEnumerator() { return Dictionary2_ValueCollection__framebuffer__int__GetEnumerator(this); }

}}}


#endif
