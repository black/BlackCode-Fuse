// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__int__Fuse_Input_Capturer;

struct Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType : ::uClassType
{
    ::app::Uno::Collections::ICollection__Fuse_Input_Capturer __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer __interface_1;
};

Dictionary2_ValueCollection__int__Fuse_Input_Capturer__uType* Dictionary2_ValueCollection__int__Fuse_Input_Capturer__typeof();

::uObject* Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator_boxed(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this);
void Dictionary2_ValueCollection__int__Fuse_Input_Capturer___ObjInit(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);
int Dictionary2_ValueCollection__int__Fuse_Input_Capturer__get_Count(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this);
Dictionary2_ValueCollection__int__Fuse_Input_Capturer* Dictionary2_ValueCollection__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);
void Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
void Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this);
bool Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
bool Dictionary2_ValueCollection__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);

struct Dictionary2_ValueCollection__int__Fuse_Input_Capturer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source) { Dictionary2_ValueCollection__int__Fuse_Input_Capturer___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__int__Fuse_Input_Capturer__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__int__Fu-c1143c8d.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer Dictionary2_ValueCollection__int__Fuse_Input_Capturer::GetEnumerator() { return Dictionary2_ValueCollection__int__Fuse_Input_Capturer__GetEnumerator(this); }

}}}


#endif
